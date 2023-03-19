//Name: zhang lingxin
//ID  : 2100013018

/*
 * trans.c - Matrix transpose B = A^T
 *
 * Each transpose function must have a prototype of the form:
 * void trans(int M, int N, int A[N][M], int B[M][N]);
 *
 * A transpose function is evaluated by counting the number of misses
 * on a 1KB direct mapped cache with a block size of 32 bytes.
 */
#include <stdio.h>
#include "cachelab.h"
#include "contracts.h"

int is_transpose(int M, int N, int A[N][M], int B[M][N]);

/*
 * transpose_submit - This is the solution transpose function that you
 *     will be graded on for Part B of the assignment. Do not change
 *     the description string "Transpose submission", as the driver
 *     searches for that string to identify the transpose function to
 *     be graded. The REQUIRES and ENSURES from 15-122 are included
 *     for your convenience. They can be removed if you like.
 */

void transNormal_32(int a, int b){

}


char transpose_submit_desc[] = "Transpose submission";
void transpose_submit(int M, int N, int A[N][M], int B[M][N])
{
    REQUIRES(M > 0);
    REQUIRES(N > 0);
    
    if(M==32&&N==32){
        //diagonal: move Aii to B22 and then to Bii  
        //A11->B22->B11
        for(int i=0;i<8;i++)
            for(int j=0;j<8;j++)
                B[i+8][j+8]=A[j][i];
        for(int i=0;i<8;i++)
            for(int j=0;j<8;j++)
                B[i][j]=B[i+8][j+8];
        //A33->B22->B33
        for(int i=16;i<24;i++)
            for(int j=16;j<24;j++)
                B[i-8][j-8]=A[j][i];
        for(int i=16;i<24;i++)
            for(int j=16;j<24;j++)
                B[i][j]=B[i-8][j-8];
        //A44->B22->B44
        for(int i=24;i<32;i++)
            for(int j=24;j<32;j++)
                B[i-16][j-16]=A[j][i];
        for(int i=24;i<32;i++)
            for(int j=24;j<32;j++)
                B[i][j]=B[i-16][j-16];     
        //A22->B21->B22
        for(int i=8;i<16;i++)
            for(int j=8;j<16;j++)
                B[i][j-8]=A[j][i];
        for(int i=8;i<16;i++)
            for(int j=8;j<16;j++)
                B[i][j]=B[i][j-8];    

        //other parts: 8*8 blocking
        for(int i=0;i<32;i+=8)
            for(int j=0;j<32;j+=8)
                if(i!=j)
                    for(int u=i;u<i+8;u++)
                        for(int v=j;v<j+8;v++)
                            B[u][v]=A[v][u];
    }
    else if(M==64&&N==64){
        //diagonal: block33~block88
/*          Aii                  an empty space in B
/       ***********             *********************
/       * a  * b  *      ->     * a  * c  * b  * d  *    
/       ***********             *********************
/       * c  * d  *
/       ***********
/

            Bii
        ***********          
/       * a  * c  *       
/  ->   ***********          
/       * b  * d  *
/       ***********

*/
        for(int u=16;u<64;u+=8){
            for(int i=u;i<u+4;i++)
                for(int j=u;j<u+4;j++){
                    B[i-u][j-u]=A[j][i];
                    B[i-u][j-u+8]=A[j][i+4];
                }
            for(int i=u;i<u+4;i++)
                for(int j=u;j<u+4;j++){
                    B[i-u][j-u+4]=A[j+4][i];
                    B[i-u][j-u+12]=A[j+4][i+4];
                }
            for(int i=u;i<u+4;i++)
                for(int j=u;j<u+4;j++){
                    B[i][j]=B[i-u][j-u];
                    B[i][j+4]=B[i-u][j-u+4];
                }
            for(int i=u;i<u+4;i++)
                for(int j=u;j<u+4;j++){
                    B[i+4][j]=B[i-u][j-u+8];
                    B[i+4][j+4]=B[i-u][j-u+12];
                }
        }
        //block22
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++){
                B[i][j+16]=A[j+8][i+8];
                B[i][j+24]=A[j+8][i+8+4];
            }
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++){
                B[i][j+20]=A[j+8+4][i+8];
                B[i][j+28]=A[j+8+4][i+8+4];
            }
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++){
                B[i+8][j+8]=B[i][j+16];
                B[i+8][j+8+4]=B[i][j+20];
            }
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++){
                B[i+8+4][j+8]=B[i][j+24];
                B[i+8+4][j+8+4]=B[i][j+28];
            }
        
        //block11
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++){
                B[i][j+16]=A[j][i];
                B[i][j+24]=A[j][i+4];
            }
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++){
                B[i][j+20]=A[j+4][i];
                B[i][j+28]=A[j+4][i+4];
            }
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++){
                B[i][j]=B[i][j+16];
                B[i][j+4]=B[i][j+20];
            }
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++){
                B[i+4][j]=B[i][j+24];
                B[i+4][j+4]=B[i][j+28];
            }
        
        //others:
        //move the 4*4 block in this order to reduce misses
/*
/       ***********             ***********
/       * 1  * 2  *      ->     * 1  * 4  *   
/       ***********             ***********
/       * 4  * 3  *             * 2  * 3  *
/       ***********             ***********
/

*/
        for(int i=0;i<64;i+=8)
            for(int j=0;j<64;j+=8)
                if(i!=j){
                    for(int u=i;u<i+4;u++)
                        for(int v=j;v<j+4;v++)
                            B[u][v]=A[v][u];
                    for(int u=i;u<i+4;u++)
                        for(int v=j;v<j+4;v++)
                            B[u][v+4]=A[v+4][u];
                    for(int u=i;u<i+4;u++)
                        for(int v=j;v<j+4;v++)
                            B[u+4][v+4]=A[v+4][u+4];
                    for(int u=i;u<i+4;u++)
                        for(int v=j;v<j+4;v++)
                            B[u+4][v]=A[v][u+4];
                }
        //*/
    }
    else {
        //use local variables to reduce misses
        //move 56*64 as 8*8 blocks
        int a1,a2,a3,a4,a5,a6,a7,a8;
        for(int i=0;i<56;i+=8)
            for(int j=0;j<64;j++){
                a1=A[j][i];
                a2=A[j][i+1];
                a3=A[j][i+2];
                a4=A[j][i+3];
                a5=A[j][i+4];
                a6=A[j][i+5];
                a7=A[j][i+6];
                a8=A[j][i+7];
                B[i][j]=a1;
                B[i+1][j]=a2;
                B[i+2][j]=a3;
                B[i+3][j]=a4;
                B[i+4][j]=a5;
                B[i+5][j]=a6;
                B[i+6][j]=a7;
                B[i+7][j]=a8;
            }
        //move the last several rows & columns
        for(int i=0;i<60;i+=4)
            for(int j=64;j<68;j++)
                for(int u=i;u<i+4;u++){
                    a1=A[j][u];
                    B[u][j]=a1;
                }
        for(int j=0;j<64;j+=4)
            for(int u=j;u<j+4;u++)
                for(int v=56;v<60;v++){
                    a1=A[u][v];
                    B[v][u]=a1;
                }
         
    }
    ENSURES(is_transpose(M, N, A, B));
}

char test1_desc[] = "test1";
void test1(int M, int N, int A[N][M], int B[M][N])
{
    int i, j, tmp;

    REQUIRES(M > 0);
    REQUIRES(N > 0);

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            tmp = A[i][j];
            B[j][i] = tmp;
        }
    }

    ENSURES(is_transpose(M, N, A, B));
}

/*
 * You can define additional transpose functions below. We've defined
 * a simple one below to help you get started.
 */

 /*
  * trans - A simple baseline transpose function, not optimized for the cache.
  */
char trans_desc[] = "Simple row-wise scan transpose";
void trans(int M, int N, int A[N][M], int B[M][N])
{
    int i, j, tmp;

    REQUIRES(M > 0);
    REQUIRES(N > 0);

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            tmp = A[i][j];
            B[j][i] = tmp;
        }
    }

    ENSURES(is_transpose(M, N, A, B));
}

/*
 * registerFunctions - This function registers your transpose
 *     functions with the driver.  At runtime, the driver will
 *     evaluate each of the registered functions and summarize their
 *     performance. This is a handy way to experiment with different
 *     transpose strategies.
 */
void registerFunctions()
{
    /* Register your solution function */
    registerTransFunction(transpose_submit, transpose_submit_desc);
    /* Register any additional transpose functions */
    //registerTransFunction(trans, trans_desc);
    //registerTransFunction(test1, test1_desc);
}

/*
 * is_transpose - This helper function checks if B is the transpose of
 *     A. You can check the correctness of your transpose by calling
 *     it before returning from the transpose function.
 */
int is_transpose(int M, int N, int A[N][M], int B[M][N])
{
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; ++j) {
            if (A[i][j] != B[j][i]) {
                return 0;
            }
        }
    }
    return 1;
}

