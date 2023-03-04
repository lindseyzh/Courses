//Jun.16_05
//Reference:https://blog.csdn.net/weixin_44288817/article/details/92959645
#include<bits/stdc++.h>
#define INF 100
using namespace std;
int n, c[20],w;
int bag[20];
int ans=INF;
void dfs(int k,int b){
    if(b>=ans) return;
    if(k==n){
        ans=min(ans,b);
        return;
    }
    for(int i=0;i<b;i++)
        if(c[k]<=bag[i]){
            bag[i]-=c[k];
            dfs(k+1,b);
            bag[i]+=c[k];
        }
    bag[b]-=c[k];
    dfs(k+1,b+1);
    bag[b]+=c[k];
}
int main(){
    cin>>n>>w;
    for(int i=0;i<n;i++){
        cin>>c[i];
        bag[i]=w;
    }
    dfs(0,1);
    cout << ans << endl;
    return 0;
}