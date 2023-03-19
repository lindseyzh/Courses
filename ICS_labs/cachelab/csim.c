//Name: zhang lingxin
//ID  : 2100013018

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<malloc.h>
#include<string.h>
#include "cachelab.h"
#include<getopt.h>
#include<unistd.h>
typedef unsigned long long ull;
struct block
{
    ull tag;//tag
    int lasvis;
};
int cacheValid[50][5];//valid

enum cachee{ini,hit,miss_new,miss_ev};
int visnum=0,S;
int hit_count=0, miss_count=0, eviction_count=0;
int s,E,b,S,B;
int setmask,offset;
int verbose=0;
FILE * fp;
char cur[100];
struct block ** pb;


void printHelp();
void ReadData(int);
int Visit(ull);


int main(int argc, char * argv[]){

    //intialization
    if(argc==10) verbose=1;//verbose mode
    s = atoi(argv[2+verbose]);
    E = atoi(argv[4+verbose]);
    b = atoi(argv[6+verbose]);
    S = 1<<s;
    setmask = (1<<s)-1;
    offset = 1<<b;    
    memset(cacheValid,0,sizeof(cacheValid));
    fp = fopen(argv[8+verbose],"r");//read only file

    //space allocation
    pb = (struct block**)malloc(sizeof(void*)*S);
    for(int i=0;i<S;i++)
        pb[i] = (struct block*)malloc(sizeof(struct block)*E);
        
    
    //data procession
    ReadData(verbose);
    //printf("Data Read Finished\n");
    printSummary(hit_count,miss_count, eviction_count);
    
    //free space
    for(int i=0;i<S;i++){
        free(pb[i]);
        pb[i]=NULL;
    }
    free(pb);
    pb = NULL;
    return 0;
}




int Visit(ull addr){
    //initialization
    int setnum = (int)(addr>>b)&setmask;
    //printf("addr=%llx,setnum=%d\n",addr,setnum);
    int ok=ini;
    ull tag = addr>>(b+s);
    //printf("startAddr=%llx\n",startAddr);
    int las=0;

    //hit
    for(int i=0;i<E;i++)
        if(pb[setnum][i].tag==tag && cacheValid[setnum][i]){
            ok=hit;
            pb[setnum][i].lasvis=visnum++;
            break;
        }
    //no hit
    if(ok==ini){
        for(int i=0;i<E;i++){
            if(!cacheValid[setnum][i]){
                cacheValid[setnum][i]=1;
                pb[setnum][i].tag=tag;
                pb[setnum][i].lasvis=visnum++;
                ok=miss_new;
                break;
            }
            else {
                if(pb[setnum][i].lasvis<pb[setnum][las].lasvis)
                    las = i;
            }
        }
        if(ok==ini){
            //printf("addr:%llx->%llx\n",pb[setnum][las]->addr,startAddr);
            pb[setnum][las].tag=tag;
            pb[setnum][las].lasvis=visnum++;
            ok=miss_ev;
        }
    }
    return ok; 
}


void ReadData(int v){
    char c;
    ull addr;
    int len,result;
    while(fgets(cur,100,fp)){
        if(cur[0]=='L') continue;
        sscanf(cur," %c %llx,%d",&c,&addr,&len);
        result = Visit(addr);
        hit_count += (result==hit);
        miss_count += (result!=hit);
        eviction_count += (result==miss_ev);
        if(c=='M') hit_count++;
        if(v){
            cur[strlen(cur)-1]='\0'; //"fgets" reads '\n'
            printf("%s",cur);
            if(result==hit) printf(" hit");
            else if(result==miss_new) printf(" miss");
            else printf(" miss eviction");
            if(c=='M') printf(" hit");
            printf("\n");
        }
    }
}


