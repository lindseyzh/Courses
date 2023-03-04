#include<bits/stdc++.h>
using namespace std;
int m,n,w[3500],d[3500];
int dp[13000]{0};
//openjudge data: 3500/13000
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>w[i]>>d[i];
    for(int j=1;j<=n;j++){
        for(int i=m;i>=w[j];i--)
            dp[i]=max(dp[i],dp[i-w[j]]+d[j]);
    }
    /*
    //WA
    for(int i=1;i<=m;i++){
        for(int j=n;j>=1;j--){
            if(w[j]<=i)
                dp[i]=max(dp[i],dp[i-w[j]]+d[j]);
        }
        
    }
    */
    cout << dp[m] << endl;

    return 0;
}
//solution 1: MLE
/*
#include<bits/stdc++.h>
using namespace std;
int m,n,w[350],d[350];
int dp[130][350]{0};
//openjudge data: 3500/13000
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>w[i]>>d[i];
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(w[j]<=i)
                dp[i][j]=max(dp[i][j-1],dp[i-w[j]][j-1]+d[j]);
            else dp[i][j]=dp[i][j-1];
        }
        
    }
    cout << dp[m][n] << endl;

    return 0;
}
*/