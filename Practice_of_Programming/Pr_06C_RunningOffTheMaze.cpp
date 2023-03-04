//Jun.16_8
#include<bits/stdc++.h>
using namespace std;
int m,T,sx,sy;
char mz[15][15];
bool cs[15][15];
int mov[4][2]={1,0,-1,0,0,1,0,-1};
struct nd{
    int x,y,t;
    nd(){}
    nd(int xx,int yy,int tt):x(xx),y(yy),t(tt){}
};
queue<nd> qn;
bool bfs(){
    qn=queue<nd>();
    memset(cs,0,sizeof(cs));
    qn.push(nd(sx,sy,0));
    cs[sx][sy]=1;
    bool done=0;
    while(!qn.empty()){
        nd fr=qn.front();
        qn.pop();
        int x=fr.x,y=fr.y,t=fr.t;
        if(t==T) return 0;
        for(int i=0;i<4;i++){
            int xx=x+mov[i][0];
            int yy=y+mov[i][1];
            if(xx<0||yy<0||xx==m||yy==m) continue;
            if(cs[xx][yy]||mz[xx][yy]=='#') continue;
            cs[xx][yy]=1;
            if(mz[xx][yy]=='E') return 1;
            qn.push(nd(xx,yy,t+1));
        }
    }
    return done;
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        cin>>m>>T;
        for(int i=0;i<m;i++)
            for(int j=0;j<m;j++){
                cin>>mz[i][j];
                if(mz[i][j]=='S')
                    sx=i,sy=j;
                }
        if(bfs()) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
    return 0;
}