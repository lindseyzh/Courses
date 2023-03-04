//Jun.22_03
#include<bits/stdc++.h>
using namespace std;
int t,m,p[110],n[110];
int dp[110][2]{0};
int main(){
    cin>>t>>m;;
    for(int i=0;i<t;i++)
        cin>>p[i]>>n[i];
    dp[0][0]=p[0];//P
    dp[0][1]=n[0];//N
    for(int i=1;i<t;i++){
        dp[i][0]=max(dp[i-1][0]+p[i],dp[i-1][1]+p[i]-m);
        dp[i][1]=max(dp[i-1][1]+n[i],dp[i-1][0]+n[i]-m);
    }
    cout << max(dp[t-1][0],dp[t-1][1]) << endl;
    return 0;
}