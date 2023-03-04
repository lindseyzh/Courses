//June 15-01
#include<bits/stdc++.h>
using namespace std;
int r,c,k,sx,sy;
#define INF 1000000
char mz[110][110];
int mov[4][2]={1,0,0,1,-1,0,0,-1};
bool cs[110][110][12];
int ans=INF;

struct nd{
    int x,y,t;
    nd(){}
    nd(int xx,int yy,int tt):x(xx),y(yy),t(tt){};
};
queue<nd> qn;

void bfs(){
    qn.push(nd(sx,sy,0));
    cs[sx][sy][0]=1;
    while(1){
        if(qn.empty()){
            break;
        }
        nd cur=qn.front();
        int x=cur.x,y=cur.y,t=cur.t;
        for(int i=0;i<4;i++){
            int xx=x+mov[i][0];
            int yy=y+mov[i][1];
            if(xx<0 || yy<0 || xx==r || yy==c) continue;
            if(mz[xx][yy]=='#' && (t+1)%k!=0) continue;
            if(cs[xx][yy][(t+1)%k]) continue;
            if(mz[xx][yy]=='E'){
                ans=min(ans,t+1);
            }
            else qn.push(nd(xx,yy,t+1));
            cs[xx][yy][(t+1)%k]=1;
        }
        qn.pop();
    }
}
int main(){
    int t;
    cin>>t;
    while(t){
        t--;
        cin>>r>>c>>k;
        memset(cs,0,sizeof(cs));
        ans=INF;
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++){
                cin>>mz[i][j];
                if(mz[i][j]=='S')
                    sx=i,sy=j;
                }

        bfs();
        if(ans==INF) cout << "Oop!" << endl;
        else cout << ans << endl;  
    }

    return 0;
}