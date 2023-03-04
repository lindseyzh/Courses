#include<iostream>
#include<cstring>
using namespace std;
int hn,peach[110],hornet[110];
int dp[110][110];
int n;
int main(){
    while(cin>>hn){
        if(hn==-1) return 0;
        n=0;
        while(cin>>peach[n]>>hornet[n]){
            if(peach[n]==-1) break;
            n++;
        }
        int ans=0;
        memset(dp,0,sizeof(0));
        for(int i=0;i<n;i++)
            if(hornet[i]<=hn) {
                dp[i][i]=peach[i];
                ans=max(ans,peach[i]);
            }
        for(int i=0;i<n-1;i++){
            int hor=hornet[i];
            if(hor>hn) continue;
            for(int j=i+1;j<n;j++)
                if(hor+hornet[j]<=hn){
                    dp[i][j]=dp[i][j-1]+peach[j];
                    ans=max(ans,dp[i][j]);
                    hor+=hornet[j];
                }
                else {
                    break;
                }
        }
        cout << ans << endl;
    }
    return 0;
}