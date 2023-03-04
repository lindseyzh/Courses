//
//Reference:https://blog.csdn.net/weixin_53469593/article/details/118402593
#include<bits/stdc++.h>
using namespace std;
int n,m;
int bd[1010][1010];
int mov[4][2]={0,1,0,-1,1,0,-1,0};
int color(int x,int y){
    int ans=1;
    for(int i=0;i<4;i++){
        int xx=x+mov[i][0];
        int yy=y+mov[i][1];
        if(xx<0||yy<0||xx==n||yy==m) continue;
        if(bd[xx][yy]!=0) continue;
        bd[xx][yy]=-1;
        ans+=color(xx,yy);
    }
    return ans;
}
bool check(int x,int y){
    for(int i=0;i<4;i++){
        int xx=x+mov[i][0];
        int yy=y+mov[i][1];
        if(xx<0||yy<0||xx==n||yy==m) continue;
        if(bd[xx][yy]!=0) continue;
        bd[xx][yy]=1;
        color(xx,yy);
    }

}
int main(){
    int t;
    cin>>t;
    while(t){
        t--;
        cin>>n>>m;
        int ans=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                cin>>bd[i][j];
        int s;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++){
            if(bd[i][j]==0){
                bd[i][j]=-1;
                color(i,j);
            }
            if(check(i,j)) ans=max(ans,s);
            
        }
    }
    return 0;
}