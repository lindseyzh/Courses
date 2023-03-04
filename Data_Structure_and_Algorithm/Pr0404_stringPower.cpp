//11.24-0
#include<bits/stdc++.h>
using namespace std;
#define MAXL 1000010
char s[MAXL];
int nxt[MAXL],len;
void getnxt(){
    int i=0,j=-1;
    nxt[0]=-1;
    while(i<len){
        if(j==-1||s[i]==s[j])
            nxt[++i]=++j;
        else j=nxt[j];
    }
}
int main(){
    while(cin.getline(s,MAXL)){
        if(s[0]=='.') return 0;
        len=strlen(s);
        getnxt();
        int pfx=len-nxt[len];
        if(len%pfx==0) printf("%d\n",len/pfx);
        else printf("1\n");
    }
    return 0;   
}