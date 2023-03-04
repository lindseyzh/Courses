//Jun.17_03
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[100010];
int deli[100010];
int n;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>deli[i];
            dp[i]=0;
            }
        if(deli[0]>0) dp[0]=deli[0];
        dp[1]=max(0,max(deli[0],deli[1]));
        for(int i=2;i<n;i++)
            dp[i]=max(dp[i-1],dp[i-2]+ll(deli[i]));
        cout << dp[n-1] << endl;
    }
    return 0;
}