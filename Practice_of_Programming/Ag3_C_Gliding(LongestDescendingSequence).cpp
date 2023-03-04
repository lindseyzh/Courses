#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int k;
    cin>>k;
    while(k){
        k--;
        int n,h[102],dp[102];
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>h[i];
            dp[i]=1;
        }
//      memset(dp,1,sizeof(dp));
//      ⭐memset should only be used to set the array '-1' or '0'  
//Reference: https://blog.csdn.net/weixin_43790779/article/details/114489612
        //east to west
        for(int i=1;i<n;i++)
            for(int j=0;j<i;j++)
                if(h[i]<h[j])
                    dp[i]=max(dp[i],dp[j]+1);
        int maxn=0;
        for(int i=0;i<n;i++)
            maxn=max(maxn,dp[i]);
        
        //west to east
        for(int i=0;i<n;i++)
            dp[i]=1;
        for(int i=n-2;i>=0;i--)
            for(int j=n-1;j>i;j--)
                if(h[i]<h[j])
                    dp[i]=max(dp[i],dp[j]+1);
        for(int i=0;i<n;i++)
            maxn=max(maxn,dp[i]);
        
        cout << maxn << endl;
    }
    return 0;
}