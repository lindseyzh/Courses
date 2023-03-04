//kmp 
//reference:https://www.cnblogs.com/xzhws/p/14459354.html
#include<bits/stdc++.h>
using namespace std;
char s[1000010];
int nxt[1000010];
int l,n=0;
void getnxt(){
    int i=0,j=-1;
    nxt[0]=-1;
    while(i<l){
        if(j==-1||s[i]==s[j]){
            i++;j++;
            nxt[i]=j;
        }
        else j=nxt[j];
    }
    return;
}
int main(){
    while(1){
        scanf("%s",s);
        l=strlen(s);
        if(l==1 && s[0]=='.') return 0;
        getnxt();
        int d=l-nxt[l],ans;
        if(l%d==0) ans=l/d;
        else ans=1;
        printf("%d\n",ans);
    }
    return 0;
}