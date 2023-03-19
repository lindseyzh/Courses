/*
 * Name: Zhang Lingxin
 * ID:   2100013018
*/


/*
 * Simple, 32-bit and 64-bit clean allocator based on:
 * - Segregated free lists (double linked lists)
 * - First-fit placement
 * - Boundary tag coalescing
 * Blocks must be aligned to doubleword (8 byte) boundaries. 
 * 
 * Minimum block size is 16 bytes.
 * Free block structure:
 * - Header(4 bytes) 
 * - Linked list pointers (stored as offset, 4+4 bytes) 
 * - Footer(4 bytes)
 * 
 * Allocated block structure:
 * - Header(4)
 * - Stored Data (size-4)
 * (Allocated blocks have no footers)
 * 
 * Free list manipulation
 * - Segregated free list.
 * New free block is inserted into a specific list based on its size.
 * - LIFO. 
 * New free block is inserted into head of the correct list
 * - Double linked list.
 * Pointers to precursor & successor are both stored.
 * 
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "mm.h"
#include "memlib.h"

/* do not change the following! */
#ifdef DRIVER
/* create aliases for driver tests */
#define malloc mm_malloc
#define free mm_free
#define realloc mm_realloc
#define calloc mm_calloc
#endif /* def DRIVER */

/*
 * If NEXT_FIT defined use next fit search, else use first-fit search
 */
#define NEXT_FITx

/* Basic constants and macros */
#define WSIZE 4             /* Word and header/footer size (bytes) */
#define DSIZE 8             /* Double word size (bytes) */
#define CHUNKSIZE (1 << 12) /* Extend heap by this amount (bytes) */
#define SEGNUM 12

#define MAX(x, y) ((x) > (y) ? (x) : (y))

/* Pack a size and allocated bit into a word */
#define PACK(size, alloc, prev_alloc) ((size) | (alloc) | (prev_alloc<<1))

/* Read and write a word at address p */
#define GET(p) (*(unsigned int *)(p))              // get 4 bytes in p
#define PUT(p, val) (*(unsigned int *)(p) = (unsigned long) (val)) // put 4 bytes in p
#define GET8(p) (*(unsigned long *)(p)) // put 8 bytes in p
#define PUT8(p, val) (*(unsigned long *)(p) = (unsigned long)(val)) // put 8 bytes in p

/* Read the size and allocated fields from address p */
#define GET_SIZE(p) (GET(p) & ~0x7)
#define GET_ALLOC(p) (GET(p) & 0x1)
#define GET_PREV_ALLOC(p) ((GET(p)&0x2)>>1)

#define SET_PREV_ALLOC(p) (*(unsigned int *)p |= 0x2)
#define SET_PREV_UNALLOC(p) (*(unsigned int *)p &= ~0x2)

/* Given block ptr bp, compute address of its header and footer */
#define HDRP(bp) ((char *)(bp)-WSIZE)
#define FTRP(bp) ((char *)(bp) + GET_SIZE(HDRP(bp)) - DSIZE)

/* Given block ptr bp, compute address of next and previous blocks */
#define NEXT_BLKP(bp) ((char *)(bp) + GET_SIZE(((char *)(bp)-WSIZE)))
#define PREV_BLKP(bp) ((char *)(bp)-GET_SIZE(((char *)(bp)-DSIZE)))

/* Global variables */
static char *heap_listp = 0; /* Pointer to first block */
#ifdef NEXT_FIT
static char *rover; /* Next fit rover */
#endif

/* Given block ptr bp, get its precursor & successor*/
#define PREC_BLKP(bp) (heap_listp + GET(HDRP(bp) + WSIZE))
#define SUCC_BLKP(bp) (heap_listp + GET(HDRP(bp) + DSIZE))

/* Function prototypes for internal helper routines */
static void *extend_heap(size_t words);
static void *place(void *bp, size_t asize);
static void *find_fit(size_t asize);
static void *coalesce(void *bp);

/* My variables*/
static void *seglist_pointer;
static void *heap_boundary;

/* My macros */
/* Given block ptr bp, get its relative addr*/
#define ADDR_TO_OFFSET(bp) ((unsigned int)(((char *)bp) - heap_listp))
#define OFFSET_TO_ADDR(offset) ((void *)(offset + heap_listp))

/*  My functions */
static void list_insert(void * bp, size_t size);//insert a block into free list
static void list_delete(void * bp);//delete a block from free list
inline static void check_block(void * bp);
inline static void check_seg_pointers();
inline static void check_hd_ft(void * hd);
inline static void *get_segp(size_t size);
inline static int get_seg_idx(size_t size);

/*
 * mm_init - Initialize the memory manager
 */
int mm_init(void){
    // fprintf(stderr, "mm_init()\n");
    /* Create the initial empty heap */
    if ((heap_listp = mem_sbrk(4 * WSIZE + SEGNUM * DSIZE)) == (void *)-1)
        return -1;

    /* Segregated list initialization*/
    seglist_pointer = heap_listp;
    for(int i=0;i<SEGNUM;i++){
        PUT8(seglist_pointer + i*DSIZE, 0);
    }

    /* heap initialization */
    heap_listp = seglist_pointer + SEGNUM*DSIZE;
    PUT(heap_listp, 0);                            /* Alignment padding */
    PUT(heap_listp + (1 * WSIZE), PACK(DSIZE, 1, 1)); /* Prologue header */
    PUT(heap_listp + (2 * WSIZE), PACK(DSIZE, 1, 0)); /* Prologue footer */
    PUT(heap_listp + (3 * WSIZE), PACK(0, 1, 1));     /* Epilogue header */
    heap_boundary = heap_listp + 4 * WSIZE;
    heap_listp += (2 * WSIZE);
    // fprintf(stderr, "mm_init() finished\n");
#ifdef NEXT_FIT
    rover = heap_listp;
#endif

    /* Extend the empty heap with a free block of CHUNKSIZE bytes */
    if (extend_heap(CHUNKSIZE / WSIZE) == NULL)
        return -1;
    return 0;
}

/*
 * malloc - Allocate a block with at least size bytes of payload
 */
void *malloc(size_t size)
{
    // fprintf(stderr, "malloc(%d)\n", size);

    size_t asize;      /* Adjusted block size */
    size_t extendsize; /* Amount to extend heap if no fit */
    char *bp;

    /* if empty, init() */
    if (heap_listp == 0)
    {
        mm_init();
    }

    /* Ignore spurious requests */
    if (size == 0)
        return NULL;

    /* Adjust block size to include overhead and alignment reqs. */
    if (size <= DSIZE + WSIZE)
        asize = 2 * DSIZE;
    else
        asize = DSIZE * ((size + (WSIZE) + (DSIZE - 1)) / DSIZE);

    /* Search the free list for a fit */
    if ((bp = find_fit(asize)) != NULL)
    {
        bp = (char*)place(bp, asize);
        return bp;
    }


    /* No fit found. Get more memory and place the block */
    extendsize = MAX(asize, CHUNKSIZE);
    if ((bp = extend_heap(extendsize / WSIZE)) == NULL)
        return NULL;
    bp = (char*)place(bp, asize);
    // check_block(bp);
    // fprintf(stderr, "malloc(%d) finished\n", size);

    return bp;
}

/*
 * free - Free a block
 */
void free(void *bp)
{
    // fprintf(stderr, "free(%d)\n", (char*)bp-heap_listp);
    // fprintf(stderr, "--- ");check_block(bp);
    // mm_checkheap(__LINE__);

    /* if bp==NULL, return */
    if (bp == NULL)
        return;

    /* if the heap is empty, init() */
    if (heap_listp == 0)
    {
        mm_init();
    }

    /* set header & footer */
    PUT(HDRP(bp), PACK(GET_SIZE(HDRP(bp)), 0, GET_PREV_ALLOC(HDRP(bp))));
    PUT(FTRP(bp), PACK(GET_SIZE(HDRP(bp)), 0, 0));
    SET_PREV_UNALLOC(HDRP(NEXT_BLKP(bp)));

    /* coalesce if needed */
    bp = coalesce(bp);


    /* linked list insertion */
    list_insert(bp, GET_SIZE(HDRP(bp)));
    // fprintf(stderr, "free(%d) finished\n", (char*)bp-heap_listp);

}

/*
 * realloc - Naive implementation of realloc
 */
void *realloc(void *ptr, size_t size)
{
    // fprintf(stderr, "realloc(%d,%d)\n", ADDR_TO_OFFSET(ptr), size);

    // check_block(ptr);
    // fprintf(stderr, "next:");check_block(NEXT_BLKP(ptr));
    /* If size == 0 then this is just free, and we return NULL. */
    if (size == 0)
    {
        mm_free(ptr);
        return 0;
    }

    /* If oldptr is NULL, then this is just malloc. */
    if (ptr == NULL)
    {
        return mm_malloc(size);
    }

    size_t asize, oldsize = GET_SIZE(HDRP(ptr));
    void *newptr;

    /* new block size */
    if (size <= DSIZE + WSIZE)
        asize = 2 * DSIZE;
    else
        asize = DSIZE * ((size + (WSIZE) + (DSIZE - 1)) / DSIZE);

    /* if the old block is large enough, do nothing */
    if(oldsize >= asize)
        return ptr;
    
    /* if next block is free */
    if(!GET_ALLOC(HDRP(NEXT_BLKP(ptr)))){
        size_t newsize = oldsize + GET_SIZE(HDRP(NEXT_BLKP(ptr)));

        /* if large enough for the new size */
        if(newsize >= asize){
            list_delete(NEXT_BLKP(ptr));

            /* if large enough to form a new block*/
            if(newsize - asize >= 2 * DSIZE){
                PUT(HDRP(ptr), PACK(asize, 1, GET_PREV_ALLOC(HDRP(ptr))));
                /* Note: no footer */
                void * nextptr = NEXT_BLKP(ptr);
                PUT(HDRP(nextptr), PACK(newsize - asize, 0, 1));
                PUT(FTRP(nextptr), PACK(newsize - asize, 0, 0));
                list_insert(nextptr, newsize - asize);
            }
            else{
                PUT(HDRP(ptr), PACK(newsize, 1, GET_PREV_ALLOC(HDRP(ptr))));
                /* Note: no footer */
                SET_PREV_ALLOC(HDRP(NEXT_BLKP(ptr)));
            }
            return ptr;
        }
    }


    /* if previous block is free */
    if(!GET_PREV_ALLOC(HDRP(ptr))){
        size_t newsize = oldsize + GET_SIZE(HDRP(PREV_BLKP(ptr)));
        
        /* if large enough for the new size */
        if(newsize >= asize){
            list_delete(PREV_BLKP(ptr));
            newptr = PREV_BLKP(ptr);

            /* if large enough to form a new block*/
            if(newsize - asize >= 2 * DSIZE){
                PUT(HDRP(newptr), PACK(asize, 1, GET_PREV_ALLOC(HDRP(newptr))));
                memcpy(newptr, ptr, oldsize);
                /* Note: no footer */
                void * nextptr = NEXT_BLKP(newptr);
                PUT(HDRP(nextptr), PACK(newsize - asize, 0, 1));
                PUT(FTRP(nextptr), PACK(newsize - asize, 0, 0));
                list_insert(nextptr, newsize - asize);
            }
            else{
                PUT(HDRP(newptr), PACK(newsize, 1, GET_PREV_ALLOC(HDRP(newptr))));
                memcpy(newptr, ptr, oldsize);
                /* Note: no footer */
                SET_PREV_ALLOC(HDRP(NEXT_BLKP(newptr)));
            }

            return newptr;
        }
    }

    newptr = mm_malloc(size);

    /* If realloc() fails the original block is left untouched  */
    if (!newptr)
    {
        return 0;
    }

    /* Copy the old data. */
    memcpy(newptr, ptr, oldsize);

    /* Free the old block. */
    mm_free(ptr);
    
    // fprintf(stderr, "realloc(%d,%d) finished\n", ADDR_TO_OFFSET(ptr), size);

    return newptr;
}

/*
 * mm_checkheap - Check the heap for correctness. Helpful hint: You
 *                can call this function using mm_checkheap(__LINE__);
 *                to identify the line number of the call site.
 */
void mm_checkheap(int lineno)
{
    // fprintf(stderr, "checkheap():\n");
    void * bp;

    /* heap structure checking */
    for (bp = heap_listp + DSIZE; GET_SIZE(HDRP(bp)) > 0; bp = NEXT_BLKP(bp)) {
        
        /* align checking */
        if((unsigned long)bp%8!=0) {
            fprintf(stderr, "align error: pos=%d\n",ADDR_TO_OFFSET(bp));
            return;
        }
        /* boundary checking */
        if( (char*)bp-heap_listp<0 || heap_boundary-bp <0 ){
            fprintf(stderr, "boundary error: pos=%d\n",ADDR_TO_OFFSET(bp));
            return;
        }
        
        /* header & footer checking*/
        check_hd_ft(HDRP(bp));
        if(!GET_ALLOC(HDRP(bp)))    
            check_hd_ft(FTRP(bp));

        /* block state checking */
        check_block(bp);

        /* coalescing checking */
        if(!GET_ALLOC(HDRP(bp)) && !GET_PREV_ALLOC(HDRP(bp))){
            fprintf(stderr, "coalescing error: pos=%d\n",ADDR_TO_OFFSET(bp));
            return;
        }
        //fprintf(stderr, "---");check_block(bp);
    }



    /* segregated lists checking*/

    /* head pointers checking */
    check_seg_pointers();

    /* check every list */
    for(int i=0;i<SEGNUM;i++){
        bp = (void*)GET8(seglist_pointer) + i*DSIZE;
        void * last_bp = 0;

        /* check elements in the list */
        for(bp = (void*)(GET8(bp));bp!=heap_listp; bp=SUCC_BLKP(bp)){
            
            /* block state checking*/
            check_block(bp);

            /* boundary checking */
            if( (char*)bp-heap_listp<0 || heap_boundary-bp <0 ){
                fprintf(stderr, "boundary error: pos=%d\n",ADDR_TO_OFFSET(bp));
                return;
            }

            /* list consistency checking */
            if(last_bp!=0){
                if(PREV_BLKP(bp)!=last_bp){
                    fprintf(stderr, "segregated list consistensy error: list[%d], pos=%d\n", i, ADDR_TO_OFFSET(bp));
                    return;
                }
            }
        }
    }

}

/*
 * The remaining routines are internal helper routines
 */

/*
 * extend_heap - Extend heap with free block and return its block pointer
 */
static void *extend_heap(size_t words)
{
    // fprintf(stderr, "extend_heap()\n");
    char *bp;
    size_t size;

    /* Allocate an even number of words to maintain alignment */
    size = (words % 2) ? (words + 1) * WSIZE : words * WSIZE;
    if ((long)(bp = mem_sbrk(size)) == -1)
        return NULL;

    /* Initialize free block header/footer and the epilogue header */
    PUT(HDRP(bp), PACK(size, 0, GET_PREV_ALLOC(HDRP(bp))));         /* Free block header */
    PUT(FTRP(bp), PACK(size, 0, 0));         /* Free block footer */
    PUT(HDRP(NEXT_BLKP(bp)), PACK(0, 1, 0)); /* New epilogue header */
    heap_boundary = NEXT_BLKP(bp) + WSIZE;
    /* Coalesce if the previous block was free */
    bp = coalesce(bp);

    /* linked list insertion */
    list_insert(bp, GET_SIZE(HDRP(bp)));

    // fprintf(stderr, "extend_heap() finished\n");

    return bp;
}

/*
 * coalesce - Boundary tag coalescing. Return ptr to coalesced block
 */
static void *coalesce(void *bp)
{
    // fprintf(stderr, "coalesce(%d)\n",ADDR_TO_OFFSET(bp));

    size_t prev_alloc = GET_PREV_ALLOC(HDRP(bp));
    size_t next_alloc = GET_ALLOC(HDRP(NEXT_BLKP(bp)));
    size_t size = GET_SIZE(HDRP(bp));

    // fprintf(stderr, "alloc: %d,%d,size=%d\n", prev_alloc, next_alloc, size);
    // mm_checkheap(0);
    // check_block(bp);
    // check_block(PREV_BLKP(bp));
    // check_block(NEXT_BLKP(bp));

    if (prev_alloc && next_alloc)
    { /* Case 1: no coalescing */
        // fprintf(stderr, "--case 1, no coalescing\n"); 
        PUT(HDRP(bp), PACK(size, 0, 1));
        PUT(FTRP(bp), PACK(size, 0, 0));
        SET_PREV_UNALLOC(HDRP(NEXT_BLKP(bp)));
        return bp;
    }

    else if (prev_alloc && !next_alloc)
    { /* Case 2: next coalesced */
        // fprintf(stderr, "--case 2, next coalesced\n");   
        list_delete(NEXT_BLKP(bp));
        size += GET_SIZE(HDRP(NEXT_BLKP(bp)));
        PUT(HDRP(bp), PACK(size, 0, 1));
        PUT(FTRP(bp), PACK(size, 0, 0));
        SET_PREV_UNALLOC(HDRP(NEXT_BLKP(bp)));
    }

    else if (!prev_alloc && next_alloc)
    { /* Case 3: prev coalesced */
        // fprintf(stderr, "--case 3, prev coalesced\n");   
        list_delete(PREV_BLKP(bp));
        size += GET_SIZE(HDRP(PREV_BLKP(bp)));
        PUT(FTRP(bp), PACK(size, 0, 0));
        PUT(HDRP(PREV_BLKP(bp)), PACK(size, 0, GET_PREV_ALLOC(HDRP(PREV_BLKP(bp)))));
        bp = PREV_BLKP(bp);
        SET_PREV_UNALLOC(HDRP(NEXT_BLKP(bp)));
    }

    else
    { /* Case 4: both coalesced */
        // fprintf(stderr, "--case 4, prev & next coalesced\n");   
        list_delete(PREV_BLKP(bp));
        list_delete(NEXT_BLKP(bp));
        size += GET_SIZE(HDRP(PREV_BLKP(bp))) +
                GET_SIZE(FTRP(NEXT_BLKP(bp)));
        PUT(HDRP(PREV_BLKP(bp)), PACK(size, 0, GET_PREV_ALLOC(HDRP(PREV_BLKP(bp)))));
        PUT(FTRP(NEXT_BLKP(bp)), PACK(size, 0, 0));
        bp = PREV_BLKP(bp);
        SET_PREV_UNALLOC(HDRP(NEXT_BLKP(bp)));
    }
#ifdef NEXT_FIT
    /* Make sure the rover isn't pointing into the free block */
    /* that we just coalesced */
    if ((rover > (char *)bp) && (rover < NEXT_BLKP(bp)))
        rover = bp;
#endif
    // fprintf(stderr, "coalesce() finished\n");
    return bp;
}

/*
 * place - Place block of asize bytes at start of free block bp
 *         and split if remainder would be at least minimum block size
 */
static void *place(void *bp, size_t asize)
{
    // fprintf(stderr, "place(%d,%d)\n", (char*)bp-heap_listp,asize);

    size_t csize = GET_SIZE(HDRP(bp));

    /* delete from the linked list*/
    if(!GET_ALLOC(HDRP(bp)))
        list_delete(bp);

    /* is the remaining part large enough to form a new block ?*/
    if ((csize - asize) >= (2 * DSIZE))
    {
        /* Note: to avoid fragments of a "large small large small" pattern */
        
        /* a "large" demand is put in the start of the free block */
        if(asize>=96){
            PUT(HDRP(bp), PACK(asize, 1, GET_PREV_ALLOC(HDRP(bp))));
            /* Note: No footer */
            // PUT(FTRP(bp), PACK(asize, 1, 0));

            void * nextbp = NEXT_BLKP(bp);

            /* new free block insertion */
            PUT(HDRP(nextbp), PACK(csize - asize, 0, 1));
            PUT(FTRP(nextbp), PACK(csize - asize, 0, 0));
            SET_PREV_UNALLOC(HDRP(NEXT_BLKP(nextbp)));
            list_insert(nextbp, csize -asize);
            return bp;
        }

        /* a "small" demand is put in the end of the free block */
        else{
            /* new free block insertion */
            PUT(HDRP(bp), PACK(csize - asize, 0, GET_PREV_ALLOC(HDRP(bp))));
            PUT(FTRP(bp), PACK(csize - asize, 0, 0));
            list_insert(bp, csize -asize);

            void * nextbp = NEXT_BLKP(bp);

            PUT(HDRP(nextbp), PACK(asize, 1, 0));
            /* Note: No footer */
            // PUT(FTRP(bp), PACK(asize, 1, 0));
            SET_PREV_ALLOC(HDRP(NEXT_BLKP(nextbp)));
            return nextbp;
        }
    }
    else
    {
        PUT(HDRP(bp), PACK(csize, 1, GET_PREV_ALLOC(HDRP(bp))));
        // PUT(FTRP(bp), PACK(csize, 1, 0));
        SET_PREV_ALLOC(HDRP(NEXT_BLKP(bp)));
        return bp;
    }
}

/*
 * find_fit - Find a fit for a block with asize bytes
 */
static void *find_fit(size_t asize){
    // fprintf(stderr, "find_fit(%d)\n",asize);

#ifdef NEXT_FIT
    /* Next fit search */
    char *oldrover = rover;

    /* Search from the rover to the end of list */
    for (; GET_SIZE(HDRP(rover)) > 0; rover = NEXT_BLKP(rover))
        if (!GET_ALLOC(HDRP(rover)) && (asize <= GET_SIZE(HDRP(rover))))
            return rover;

    /* search from start of list to old rover */
    for (rover = heap_listp; rover < oldrover; rover = NEXT_BLKP(rover))
        if (!GET_ALLOC(HDRP(rover)) && (asize <= GET_SIZE(HDRP(rover))))
            return rover;

    return NULL; /* no fit found */
#else
    /* First-fit search */

    /* search in segregated linked lists */
    for (int idx = get_seg_idx(asize); idx < SEGNUM; idx++){
        for (void * bp = (void*)GET8(seglist_pointer + idx*DSIZE) ; bp != heap_listp && bp!=NULL;
             bp = SUCC_BLKP(bp)){
            // fprintf(stderr, "--try pos %d,bp=%ld\n",(char*)bp-heap_listp,bp);
            // check_block(bp);
            if (!GET_ALLOC(HDRP(bp)) && (asize <= GET_SIZE(HDRP(bp)))){
                return bp;
            }
        }
    }

    return NULL; /* No fit */
#endif

}

/* insert a block into its linked list, LIFO */
inline static void list_insert(void * bp, size_t size){
    // fprintf(stderr, "list_insert(%d,%d)",(char*)bp-heap_listp, size);
    // check_hd_ft(HDRP(bp));

    /* set header & footer */
    PUT(HDRP(bp), PACK(size, 0, GET_PREV_ALLOC(HDRP(bp))));
    PUT(FTRP(bp), PACK(size, 0, 0));
    // check_hd_ft(HDRP(bp));

    void * curseg_pointer = get_segp(size);

    /* linked list maintainence */
    if(GET8(curseg_pointer) == 0){ // empty linked list
        /* prec & succ are both NULL */
        PUT(HDRP(bp) + WSIZE, 0);// precursor is NULL
        PUT(HDRP(bp) + DSIZE, 0);// successor is NULL
        PUT8(curseg_pointer, bp);
    }
    else{
        /* precursor is NULL, successor is free_pointer*/
        PUT(HDRP(bp) + WSIZE, 0);
        PUT(HDRP(bp) + DSIZE, ADDR_TO_OFFSET(GET8(curseg_pointer)));
        PUT(HDRP(GET8(curseg_pointer)) + WSIZE, ADDR_TO_OFFSET(bp));
        PUT8(curseg_pointer, bp);
    }
    // mm_checkheap(__LINE__);
    // fprintf(stderr, "list_insert() finished,\n");
  
}

/* delete a block from its linked list, LIFO */
inline static void list_delete(void * bp){
    // fprintf(stderr, "list_delete(%d)\n", ADDR_TO_OFFSET(bp));

    if(bp==NULL) return;
    if(GET_ALLOC(HDRP(bp))) return;
    void * prec = (void *) PREC_BLKP(bp);
	void * succ = (void *) SUCC_BLKP(bp);
    // fprintf(stderr, "---prec: ");check_block(prec);
    // fprintf(stderr, "---succ: ");check_block(succ);

    void * curseg_pointer = get_segp(GET_SIZE(HDRP(bp)));

    /* if bp is the only block in the list */
    if(prec==heap_listp && succ==heap_listp){
        PUT8(curseg_pointer, 0);
    }

    /*if bp has a precursor but no successor*/ 
	else if(prec!=heap_listp && succ==heap_listp){
		PUT(HDRP(prec) + DSIZE, 0);
	}

    /* if bp has a successor but no precursor (current curseg_pointer) */ 
	else if(succ!=heap_listp && prec==heap_listp){
		PUT(HDRP(succ) + WSIZE, 0);
        PUT8(curseg_pointer, succ);
	}

    /* if bp has a precursor & a successor*/
    else{
		PUT(HDRP(prec) + DSIZE, ADDR_TO_OFFSET(succ));
		PUT(HDRP(succ) + WSIZE, ADDR_TO_OFFSET(prec));
    }
    // mm_checkheap(__LINE__);

    // fprintf(stderr, "list_delete(%d) finished\n",ADDR_TO_OFFSET(bp));
    // fprintf(stderr, "---prec: ");check_block(prec);
    // fprintf(stderr, "---succ: ");check_block(succ);
}

/* get the correct segregated linked list pointer of a specific size*/
inline static void *get_segp(size_t size){
    int idx = 0;
    size_t cursize = 16; //intially 16~31
    while(idx < SEGNUM-1){
        if(cursize*2 >= size) break;
        cursize*=2;
        idx++; 
    }
    return seglist_pointer + idx*DSIZE;
}

/* get the correct segregated linked list index of a specific size*/
inline static int get_seg_idx(size_t size){
    int idx = 0;
    size_t cursize = 16; //intially 16~31
    while(idx < SEGNUM-1){
        if(cursize*2 >= size) break;
        cursize*=2;
        idx++; 
    }
    // printf("get_segp_idx(%d),idx=%d, cursize=%d\n",size,idx,cursize);

    return idx;
}

/* check state of a block*/
inline static void check_block(void * bp){
    if(bp==0){
        fprintf(stderr, "-----bp = NULL\n");
        return;
    }
    if(bp==heap_listp){
        fprintf(stderr, "-----bp = 0\n");
        return;
    }

    if(GET_ALLOC(HDRP(bp))){
        fprintf(stderr, "-----bp = %d, alloc=1, prev_alloc=%d, size=%d\n",
            ADDR_TO_OFFSET(bp), GET_PREV_ALLOC(HDRP(bp)),GET_SIZE(HDRP(bp)));
    }
    else{
        fprintf(stderr, "-----bp = %d, alloc=0, prev_alloc=%d, size=%d, prec=%d, succ=%d\n",
            ADDR_TO_OFFSET(bp), GET_PREV_ALLOC(HDRP(bp)), GET_SIZE(HDRP(bp)), 
            ADDR_TO_OFFSET(PREC_BLKP(bp)),ADDR_TO_OFFSET(SUCC_BLKP(bp)));
    }
}

/* check state of a block header/footer */
inline static void check_hd_ft(void * hd){
    fprintf(stderr, "check_hd_ft(%d):content=%d, alloc=%d, prev_alloc=%d,size=%d\n",
        ADDR_TO_OFFSET(hd), GET(hd), GET_ALLOC(hd),GET_PREV_ALLOC(hd), GET_SIZE(hd));
}

/* check all pointers of segregated linked lists */
inline static void check_seg_pointers(){
    fprintf(stderr, "check_seg_pointers:\n");

    for(int i=0;i<SEGNUM;i++){
        fprintf(stderr, "segp[%d]=%d,",i, 
            ADDR_TO_OFFSET(GET8(seglist_pointer + i*DSIZE)));
    }
    fprintf(stderr, "\n");
}
