#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[1010],dp[1010];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        dp[i]=a[i];
    }
    for(int i=1;i<n;i++)
        for(int j=0;j<i;j++)
            if(a[j]<a[i]){
                dp[i]=max(dp[i],dp[j]+a[i]);
            }
    int ans=0;
    for(int i=0;i<n;i++)
        ans=max(ans,dp[i]);
    cout << ans << endl;
    return 0;
}