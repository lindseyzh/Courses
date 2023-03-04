//Jun.17_05
#include<bits/stdc++.h>
using namespace std;
#define INF 100000
int n,a[220];
int dp[220][220]{0};
int main(){
    int t;
    cin>>t;
    int tt=t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)
            for(int j=i;j<n;j++)
                dp[i][j]=INF;
        for(int i=0;i<n;i++){
            cin>>a[i];
            dp[i][i]=1;
        }
        for(int l=1;l<n;l++)
            for(int i=0;i<n-l;i++){ 
                if(a[i+l]==a[i+l-1]||a[i+l]==a[i]) dp[i][i+l]=dp[i][i+l-1];   
//                if(a[i+l]==a[i]) dp[i][i+l]=min(dp[i][i+l],dp[i+1][i+l-1]+1);        
                for(int j=i;j<i+l;j++){
                    if(a[i+l]==a[j] && j+1<=i+l-1) dp[i][i+l]=min(dp[i][i+l],dp[i][j]+dp[j+1][i+l-1]);
                    dp[i][i+l]=min(dp[i][i+l],dp[i][j]+dp[j+1][i+l]);
                }
            }
        printf("Case %d: %d\n",tt-t,dp[0][n-1]);
    }
    return 0;
}