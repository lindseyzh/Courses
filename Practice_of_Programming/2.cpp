#include<bits/stdc++.h>
#define INF 10000000
typedef long long ll;
using namespace std;
ll p,q;
ll x,y;
ll UB;
int maxn=52;
int ans=INF;
void dfs(int k,ll cur){
    if(k==52){
        if(cur==q)
            ans=min(ans,k);
        return;
    }
    //1. *y
    if(cur>UB) return;
    if(k+1>=ans) return;
    if(cur*y==q){
        ans=min(ans,k+1);
        return;
    }
    dfs(k+1,cur*y);
    //2.lose
    if(cur>=x) {
        if(cur-x==q){
            ans=min(ans,k+1);
            return;
        }
        dfs(k+1,cur-x);
    }
}
int main(){
    cin>>p>>q>>x>>y;
    UB=1;
    for(int i=0;i<32;i++)
        UB=UB*2;
    dfs(0,p);
    if(ans<INF) cout << ans << endl;
    else cout << "Failed" << endl;
    return 0;
}