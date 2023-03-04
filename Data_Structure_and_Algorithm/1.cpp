#include<bits/stdc++.h>
using namespace std;
#define N 100010
int nxt[N]{};
int len;
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
    cin.getline(s,N);
    len=strlen(s);
    getnxt();
    int d=nxt[len];
    if(d==0) {cout << len << endl;return 0;}
    int loop=len-d;
    int ans=(loop-(len%loop))%loop;
    cout << ans << endl;
}