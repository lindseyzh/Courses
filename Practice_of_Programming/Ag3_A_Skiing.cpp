#include<iostream>
#include<cstring>
using namespace std;
int h[102][102]{0};
int dp[102][102]{0};
int mov[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
int r,c;
int Dp(int i,int j){
    if(dp[i][j]>0) return dp[i][j];
    for(int u=0;u<4;u++){
        int x=i+mov[u][0],y=j+mov[u][1];
        if(x>=0&&x<r&&y>=0&&y<c)
            if(h[x][y]<h[i][j]){
                dp[i][j]=max(dp[i][j],Dp(x,y)+1);
            }
    }        
    dp[i][j]=max(dp[i][j],1);
    return dp[i][j];
}
int main(){
    cin>>r>>c;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++){
            cin>>h[i][j];
    }
    int maxl=0;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            maxl=max(maxl,Dp(i,j));
    cout << maxl<<endl;
    return 0;
}