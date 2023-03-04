#include<bits/stdc++.h>
using namespace std;
int mz[25][25]{0},m,n,k;
bool cs[110]{0};
int mov[4][2]={0,1,1,0,0,-1,-1,0};
int ans=0;
void dfs(int x,int y){
    bool walk=0;
    for(int i=0;i<4;i++){
        int xx=x+mov[i][0];
        int yy=y+mov[i][1];
        if(xx<0 || xx==m) continue;
        if(yy<0 || yy==n) continue;
        int cur=mz[xx][yy];
        if(cs[cur]) continue;
        walk=1;
        cs[cur]=1;
        dfs(xx,yy);
        cs[cur]=0;
    }
    if(!walk){
        int num=0;
        for(int i=1;i<=k;i++)
            num+=cs[i];
        ans=max(ans,num);
    }
}
int main(){
    cin>>m>>n>>k;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>mz[i][j];
    cs[mz[0][0]]=1;
    dfs(0,0);
    cout << ans << endl;
    return 0;
}