#include<bits/stdc++.h>
using namespace std;
#define N 1000010
int len,nxt[N];
char s[N];
void getnxt(){
    int i=0,j=-1;
    nxt[0]=-1;
    while(i<len){
        if(j==-1||s[i]==s[j]){
            i++;j++;
            nxt[i]=j;
        }
        else j=nxt[j];
    }
}

int main(){
    int casenum=0;
    while(cin>>len){
        if(len==0) return 0;
        casenum++;
        printf("Test case #%d\n",casenum);
        getchar();//don't forget this when using cin & cin.getline
        cin.getline(s,N);
        getnxt();
        for(int i=2;i<=len;i++){
            if(nxt[i]!=0 && i%(i-nxt[i])==0){
                printf("%d %d\n",i,i/(i-nxt[i]));
            }
        }
        printf("\n");
    }
    return 0;
}