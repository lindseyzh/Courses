//Jun.17_04
#include<bits/stdc++.h>
using namespace std;
int h,w,m;
int g[60][60];
int mov[4][2]={0,1,0,-1,1,0,-1,0};
bool cs[60][60];
void color(int x,int y){
    for(int i=0;i<4;i++){
        int xx=x+mov[i][0];
        int yy=y+mov[i][1];
        if(xx<0||yy<0||xx==h||yy==w) continue;
        if(cs[xx][yy]) continue;
        if(abs(g[xx][yy]-g[x][y])>m) continue;
        cs[xx][yy]=1;
        color(xx,yy);
    }
}
int main(){
    while(cin>>h>>w>>m){
        if(h==0) return 0;
        for(int i=0;i<h;i++)
            for(int j=0;j<w;j++)
                cin>>g[i][j];
        memset(cs,0,sizeof(cs));
        int n=0;
        for(int i=0;i<h;i++)
            for(int j=0;j<w;j++)
                if(!cs[i][j]){
                    cs[i][j]=1;
                    n++;
                    color(i,j);
                }
        cout << n << endl;
    }
    return 0;
}