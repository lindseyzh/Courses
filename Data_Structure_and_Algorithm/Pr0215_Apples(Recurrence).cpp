#include<bits/stdc++.h>
using namespace std;
int dp[20][20]{0};
int rec(int m,int n){
    if(dp[m][n]>0) return dp[m][n];
    if(n<=1) return 1;
    if(m<=1) return 1;
    int ans=0;
    ans+=rec(m,n-1);
    if(m>=n) ans+=rec(m-n,n);
    dp[m][n]=ans;
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        cout << rec(m,n) << endl;
    }

    return 0;
}