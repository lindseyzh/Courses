//Jun.23
//02J/05E/05J/06I/06L/07F/07M/08J


//dp
#include<bits/stdc++.h>
#define INF 100000000
using namespace std;
int n,x[4040],y[4040];
int dp[4040][4040]{0};
int ans=INF;
int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>x[i]>>y[i];
    //dp[i][j]: the minimal gpa sum with Lesson 0-i & Sad=j
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            dp[i][j]=INF;
    dp[0][0]=min(x[0],y[0]);
    for(int i=1;i<n;i++){
        //Note: don't use "(i-1)*x[i]"
        if(i*x[i]>=dp[i-1][0])
            dp[i][0]=min(dp[i][0],dp[i-1][0]+x[i]);
        if(i*y[i]>=dp[i-1][0])
            dp[i][0]=min(dp[i][0],dp[i-1][0]+y[i]);
        for(int j=1;j<=i;j++){
            if(dp[i-1][j-1]!=INF && i*x[i]<dp[i-1][j-1])//sad+1
                dp[i][j]=min(dp[i][j],dp[i-1][j-1]+x[i]);
            if(dp[i-1][j]!=INF && i*x[i]>=dp[i-1][j])//sad~
                dp[i][j]=min(dp[i][j],dp[i-1][j]+x[i]);
            if(dp[i-1][j-1]!=INF && i*y[i]<dp[i-1][j-1])//sad+1
                dp[i][j]=min(dp[i][j],dp[i-1][j-1]+y[i]);
            if(dp[i-1][j]!=INF && i*y[i]>=dp[i-1][j])//sad~
                dp[i][j]=min(dp[i][j],dp[i-1][j]+y[i]);
        }
    }
    ans=INF;
    for(int j=0;j<n;j++)
        if(dp[n-1][j]<INF){
            ans=j;
            break;
        }
    cout << ans << endl;
    return 0;
}