//poj2755
//solution 1: recurrence+dp
/*
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int a[22],dp[22][44];
int choose(int n,int v){
    if(dp[n][v]>=0) return dp[n][v];
    if(v<a[0]) return 0;
    int ans=0;
    for(int i=n-1;i>=0;i--)
        if(a[i]<=v) ans+=choose(i,v-a[i]);
    dp[n][v]=ans;
    return ans;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++)
        dp[i][0]=1;
    cout << choose(n,40) << endl;
    return 0;
}
*/

//solution 2: dp without recurrence
#include<iostream>
using namespace std;
int main(){
    int n,a[30];
    cin>>n;
    for(int i=0;i<n;i++)   
        cin>>a[i];
    int dp[30][50]{0};
    for(int i=0;i<n;i++)
        dp[i][0]=1;
    for(int j=0;j<=40;j++)
        if(a[0]==j) dp[0][j]=1;
        
    for(int i=1;i<n;i++){
        for(int j=1;j<=40;j++){
            dp[i][j]=dp[i-1][j];
            if(a[i]<=j) dp[i][j]+=dp[i-1][j-a[i]];
        }
    }
    cout << dp[n-1][40] << endl;
    return 0;
}