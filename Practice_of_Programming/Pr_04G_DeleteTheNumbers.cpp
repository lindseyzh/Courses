//Jun.15-07
#include<bits/stdc++.h>
using namespace std;
int n,a[1010];
int dp[1010];
int main(){
    int t;
    cin>>t;
    while(t){
        t--;
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        memset(dp,0,sizeof(dp));
        int ans=0;
        if(a[1]==1) dp[1]=1;
        for(int i=2;i<=n;i++){
            if(a[i]>i) continue;
            dp[i]=1;
            for(int j=i-1;j>=1;j--){
                if(dp[j]>0 && a[j]<a[i] && a[i]-a[j]<=i-j)
                    dp[i]=max(dp[i],dp[j]+1);
            }
            ans=max(ans,dp[i]);
        }
        cout << ans << endl;
    }
    return 0;
}