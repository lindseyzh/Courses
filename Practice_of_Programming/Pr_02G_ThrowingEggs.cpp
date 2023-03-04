#include<iostream>
#include<cstring>
using namespace std;
int dp[102][12];
int main(){
    int n,m;
    while(cin>>n>>m){
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++)
            dp[i][1]=i;
        for(int j=1;j<=m;j++)
            dp[1][j]=1;
        for(int j=2;j<=m;j++){
            for(int i=2;i<=n;i++){
                dp[i][j]=i;
                for(int u=2;u<=i-1;u++)
                    dp[i][j]=min(dp[i][j],max(dp[u-1][j-1],dp[i-u][j])+1);
            }
        }
        cout << dp[n][m] << endl;
    }
    return 0;  
}