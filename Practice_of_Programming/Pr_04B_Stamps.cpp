/*
#include<bits/stdc++.h>
using namespace std;
int n,a[110];
int bestn=INT_MAX;

int main(){
    int k;
    while(cin>>n>>k){
        if(n+k==0) return 0;
        bestn=INT_MAX;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int dp[102][1002]{0};
        for(int i=1;i<=k;i++){
            for(int j=0;j<n;j++){
                if(a[j]<=i)
                    dp[i][j]=min(dp[i][j-1],dp[i-a[j]][j-1]+)
                
            }
        }



        if(bestn==INT_MAX) cout << -1 << endl;
        else cout << bestn << endl;
    } 
    return 0;
}
*/

//dfs: TLE
#include<bits/stdc++.h>
using namespace std;
#define INF 10000
int n,a[110];
int re[1010][110];
int dfs(int k, int m){
    if(k==0){
        return 0;
    }
    if(k<a[0]) return INF;
    if(re[k][m]>0) return re[k][m];
    int ans=INF;
    for(int i=m-1;i>=0;i--){
        for(int j=k/a[i];j>=0;j--){
            int kk=k-j*a[i];
            if(re[kk][i]+j>=ans) continue;
            ans=min(ans,dfs(kk,i)+j) ;
        }
    }
    re[k][m]=ans;
    return ans;
}
int main(){
    int k;
    while(cin>>n>>k){
        if(n+k==0) return 0;
        memset(re,0,sizeof(re));
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int ans = dfs(k,n);
        if(ans==INF) cout << -1 << endl;
        else cout << ans << endl;
    } 
    return 0;
}