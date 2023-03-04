//Jun.18_01
//a common bfs with DISGUSTING details...
#include<bits/stdc++.h>
#define INF 1000000
using namespace std;
int n,m,sx,sy,v,ans;
int mov[4][2]={0,1,0,-1,1,0,-1,0};
bool cs[110][110][15][10];
bool done;
char mz[110][110];
struct nd{
    int x,y,t,e,las;
    nd(){}
    nd(int xx,int yy,int tt,int ee,int ll):x(xx),y(yy),t(tt),e(ee),las(ll){}
};
queue<nd> qn;
void jump(nd fr){
    int x=fr.x,y=fr.y,t=fr.t,e=fr.e,las=fr.las;
    int mx=mov[las][0],my=mov[las][1];
    {
        int xx=x+e*mx,yy=y+e*my;
        if(xx<0) xx=0;
        if(yy<0) yy=0;
        if(xx>=n) xx=n-1;
        if(yy>=m) yy=m-1;
        if(!cs[xx][yy][e][4] && !cs[xx][yy][e][las] && mz[xx][yy]!='#') {
            cs[xx][yy][e][las]=1;
            if(mz[xx][yy]!='E') cs[xx][yy][e][4]=1;
            nd nx(xx,yy,t,e,las);
            qn.push(nx);
            if(mz[xx][yy]=='E') jump(nx);
        }
    }
    for(int i=e-1;i>=1;i--){
        int xx=x+i*mx,yy=y+i*my;
        if(xx<0 || yy<0 || xx>=n || yy>=m) continue;
        if(cs[xx][yy][i][4] || cs[xx][yy][i][las]) continue;
        if(mz[xx][yy]=='#') continue;
        cs[xx][yy][i][las]=1;
        if(mz[xx][yy]!='E') cs[xx][yy][i][4]=1;
        nd nx(xx,yy,t,i,las);
        qn.push(nx);
        if(mz[xx][yy]=='E') jump(nx);
    }
}
void bfs(){
    qn = queue<nd>();
    memset(cs,0,sizeof(cs));
    ans=INF;
    qn.push(nd(sx,sy,0,v,-1));
    cs[sx][sy][v][4]=1;
    while(!qn.empty()){
        nd fr=qn.front();
        qn.pop();
        int x=fr.x,y=fr.y,t=fr.t,e=fr.e;
        if(mz[x][y]=='T') {
            done=1;
            ans=min(ans,t);
        }
        for(int i=0;i<4;i++){
            int xx=x+mov[i][0];
            int yy=y+mov[i][1];
            if(xx<0||yy<0||xx==n||yy==m) continue;
            if(mz[xx][yy]=='#') continue;
            if(cs[xx][yy][e][4] || cs[xx][yy][e][i]) continue;
            cs[xx][yy][e][i]=1;
            if(mz[xx][yy]!='E') cs[xx][yy][e][4]=1;
            nd nx(xx,yy,t+1,e,i);
            qn.push(nx);
            if(mz[xx][yy]=='E')
                jump(nx);
        }
        
    }
}
int main(){
    int t=0;
    while(cin>>n>>m>>v){
        if(n==0) return 0;
        t++;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++){
                cin>>mz[i][j];
                if(mz[i][j]=='S')
                    sx=i,sy=j;
                }
        bfs();
        if(ans==INF) ans=-1;
        printf("Case #%d: %d\n",t,ans);
    }
    return 0;
}