//POJ 4150
//Reference:https://blog.csdn.net/qq_39004117/article/details/81028156
#include<bits/stdc++.h>
#define INF 99999999999
using namespace std;
int n,a[10010],b[10010],c[10010];
int dp[10010][2][2]{0};
int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    for(int i=0;i<n;i++)
        cin>>c[i];
    dp[0][0][0]=a[0];
    dp[0][0][1]=b[0];
    dp[0][1][0]=dp[0][1][1]=-INF;
    for(int i=1;i<n;i++){
        dp[i][0][0]=a[i]+max(dp[i-1][0][1],dp[i-1][1][1]);
        dp[i][1][0]=b[i]+max(dp[i-1][0][0],dp[i-1][1][0]);
        dp[i][0][1]=b[i]+max(dp[i-1][0][1],dp[i-1][1][1]);
        dp[i][1][1]=c[i]+max(dp[i-1][0][0],dp[i-1][1][0]);
    }
    cout << max(dp[n-1][0][0],dp[n-1][1][0]) << endl;
    return 0;
}