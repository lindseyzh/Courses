#include<iostream>
using namespace std;
int n,m,lastnum[502]{},nextnum[502]{};
int lastone[502][502]{},nextone[502][502]{};
int dp[502]{0};
int dfs(int i){
    if(dp[i]>0) return dp[i];
    if(nextnum[i]==0){
        dp[i]=1;
        return 1;
    }
    int sum=0;
    for(int j=0;j<nextnum[i];j++){
        sum+=dfs(nextone[i][j]);
    }
    dp[i]=sum;
    return sum;
}
int main(){
    cin>>n>>m;
    int i,j,a,b;
    for(i=0;i<m;i++){
        cin>>a>>b;
        lastone[b][lastnum[b]]=a;
        nextone[a][nextnum[a]]=b;
        lastnum[b]++;
        nextnum[a]++;
    }
    int sum=0;
    for(i=1;i<=n;i++)
        if(lastnum[i]==0){
            sum+=dfs(i);
        }
    cout<<sum<<endl;
    return 0;
}