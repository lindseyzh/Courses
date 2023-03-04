#include<bits/stdc++.h>
#define INF 1000000000
using namespace std;
typedef long long int LL;
int n,m;
int arr[1010][1010]{0};
bool cs[1010]{0};
LL dp[1010]{0};
LL dfs(int k){
    if(dp[k]>0) return dp[k];
    LL maxa=0;
    for(int i=0;i<n;i++){
        if(arr[k][i]){
            if(cs[i]){
                return INF;
            }
            cs[i]=1;
            maxa=max(maxa,arr[k][i]+dfs(i));
            cs[i]=0;
        }
        if(maxa>=INF){
            dp[k]=INF;
            return INF;
        }
    }
    dp[k]=maxa;
    return maxa;
}
int main(){
    cin>>n>>m;
    int xx,yy,zz;
    for(int i=0;i<m;i++){
        cin>>xx>>yy>>zz;
        arr[xx-1][yy-1]=max(arr[xx-1][yy-1],zz);
    }
    cs[0]=1;
    dfs(0);
    cout << dp[0]  << endl;
    return 0;
}