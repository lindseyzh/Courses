//11.24Th-02
//0202, brute force is ok
#include<bits/stdc++.h>
#define N 100010
using namespace std;
int n,k,p;
int ans[N];
int cur=0;
bool taken[N]{0};
inline int getnxt(){
    while(taken[cur]) cur=(cur+1)%k;
    return cur;
}
int main(){
    cin>>n>>k>>p;
    int m=k/n;
    int ansnum=0;
    for(int i=1;i<=k;i++){
        int a=getnxt();
        taken[a]=1;
        if(i%n==0){
            ans[ansnum++]=a;
        }
        if(i==k) break;
        for(int j=0;j<p;j++){
            a=getnxt();
            cur=(cur+1)%k;
        }
    }  
    sort(ans, ans+m);
    for(int i=0;i<m;i++)
        printf("%d\n",ans[i]+1);
    return 0;
}

