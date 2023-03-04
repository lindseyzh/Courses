//Jun.15-08
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a,b;
ll dp[100];
int main(){
    int t;
    cin>>t;
    int maxn=0;
    while(t){
        t--;
        cin>>a>>b;
        b-=(a-1);
        if(b<=maxn) cout << dp[b] << endl;
        else{
        dp[1]=1;
        dp[2]=1;
        for(int i=3;i<=b;i++)
            dp[i]=dp[i-1]+dp[i-2];
        cout << dp[b] << endl;  
        } 
    }

    return 0;
}