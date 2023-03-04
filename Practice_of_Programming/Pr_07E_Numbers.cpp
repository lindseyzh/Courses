//Jun.20_03
//dp
#include<bits/stdc++.h>
using namespace std;
int n,k[20],x[20][12];
long long dp[20][3]{0};
//long long is necessary
int main(){ 
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k[i];
        for(int j=0;j<k[i];j++)
            cin>>x[i][j];
    }
    for(int j=0;j<k[0];j++)
        dp[0][x[0][j]%3]++;
    for(int i=1;i<n;i++){
        for(int j=0;j<k[i];j++){
            int d=x[i][j]%3;
            dp[i][d%3]+=dp[i-1][0];
            dp[i][(d+1)%3]+=dp[i-1][1];
            dp[i][(d+2)%3]+=dp[i-1][2];
        }
    }
    
    cout << dp[n-1][0] << endl;
    return 0;
}


//dfs: TLE
/*
#include<bits/stdc++.h>
using namespace std;
int n,k[20],x[20][10];
int ans=0,sum=0;
void dfs(int t){
    if(t==n){
        if(sum%3==0) ans++;
        return;
    }
    for(int i=0;i<k[t];i++){
        sum+=x[t][i];
        dfs(t+1);
        sum-=x[t][i];
    }
}
int main(){ 
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k[i];
        for(int j=0;j<k[i];j++)
            cin>>x[i][j];
    }
    dfs(0);
    cout << ans << endl;
    return 0;
}
*/


