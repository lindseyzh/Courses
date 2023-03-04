//Jun.20_01
#include<bits/stdc++.h>
using namespace std;
int k,n,t,dp[1000010],m[110],p[110];
int main(){
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=0;i<n;i++)
            cin>>m[i];
        for(int i=0;i<n;i++)
            cin>>p[i];
        memset(dp,0,sizeof(dp));
        dp[m[0]]=p[0];
        int cur=0;
        for(int i=m[0]+1;i<=m[n-1];i++){
            dp[i]=dp[i-1];
            if(cur<n-1)
                if(i==m[cur+1]) {
                cur++;
                int las=0;
                if(i-k-1>=0) las=dp[i-k-1];
                dp[i]=max(dp[i-1],las+p[cur]);
            }
        }
        cout << dp[m[n-1]] << endl;
    }
    return 0;
}