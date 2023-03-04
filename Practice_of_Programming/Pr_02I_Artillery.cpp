//Reference:https://blog.csdn.net/hqd_acm/article/details/6215469
#include<bits/stdc++.h>
using namespace std;
#define INF 100000
bool bd[105][15]{0};
int bdn[105]{0};
int n,m;
int dp[105][100][100];//dp[row][state1][state2]
int st[100]{0};
int stnum[100]{0};
inline bool legal(int a){
    if(((a<<1)&a) || ((a<<2)&a)) return 0;
    return 1;
}
bool matchh[100][100]{0};
int main(){
    cin>>n>>m;
    char c;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            cin>>c;
            if(c=='P'){
                bd[i][j]=1;
                bdn[i]+=(1<<j);
            }
        }
    int stn=0;
    for(int i=0;i<(1<<m);i++)
        if(legal(i)) {
            st[stn]=i;
            for(int j=0;j<m;j++)
                if(i&(1<<j)) stnum[stn]++;
            stn++;
        }
    memset(dp,-1,sizeof(dp));

    //special:n=1!!!!
    if(n==1){
        int ans=0;
        for(int i=0;i<stn;i++)
            if(bdn[0]&st[i])
                ans=max(ans,stnum[i]);
        cout << ans << endl;
        return 0;
    }



    for(int i=0;i<stn;i++)
        for(int j=0;j<stn;j++)
            if((st[i]&st[j])==0) {
                matchh[i][j]=1;
                if((bdn[0]&st[i])==st[i] && (bdn[1]&st[j])==st[j])
                    dp[1][i][j]=stnum[i]+stnum[j];
    }
    for(int u=2;u<n;u++){//row
        for(int i=0;i<stn;i++){
            if((bdn[u]&st[i])!=st[i]) continue;
            for(int j=0;j<stn;j++){
                if((bdn[u-1]&st[j])!=st[j] || !matchh[i][j]) continue;
                for(int v=0;v<stn;v++){
                    if((bdn[u-2]&st[v])!=st[v] || dp[u-1][v][j]==-1 || !matchh[i][v]) continue;
                    dp[u][j][i]=max(dp[u][j][i],dp[u-1][v][j]+stnum[i]);
                }
            }
        }
    }
    int ans=0;
    for(int i=0;i<stn;i++)
        for(int j=0;j<stn;j++)
            ans=max(ans,dp[n-1][i][j]);
    cout << ans << endl;

    return 0;
}