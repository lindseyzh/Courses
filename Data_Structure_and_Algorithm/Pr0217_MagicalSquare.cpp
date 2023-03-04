#include<bits/stdc++.h>
using namespace std;
int a[50][50]{0};
int main(){
    int n;
    cin>>n;
    int i=0,j=n-1;
    n=2*n-1;
    int cur=1;
    int num=n*n;
    while(cur<=num){
        a[i][j]=cur++;
        int ni=(i+n-1)%n;
        int nj=(j+1)%n;
        if((i==0&&j==n-1) || a[ni][nj]){
            i=(i+1)%n;
        }
        else{
            i=ni;
            j=nj;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",a[i][0]);
        for(int j=1;j<n;j++)
            printf(" %d",a[i][j]);
        printf("\n");
    }
    return 0;
}