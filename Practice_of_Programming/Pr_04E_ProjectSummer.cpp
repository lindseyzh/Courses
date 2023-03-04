//Jun.15-5
#include<bits/stdc++.h>
using namespace std;
#define INF 1000000
struct nd{
    int x,y,t;
    nd(){}
    nd(int xx,int yy,int tt):x(xx),y(yy),t(tt){}
};
queue<nd> qn;
char mz[110][110];
int sx,sy;
int doors[110][110][2];
int trs[30][2];
int havetrs[30]{0};
bool cs[110][110];
int mov[4][2]={0,1,0,-1,1,0,-1,0};
int m,n;
int ans;

void bfs(){
    qn.push(nd(sx,sy,0));
    cs[sx][sy]=1;
    while(1){
        if(qn.empty()) break;
        nd fr=qn.front();
        int x=fr.x,y=fr.y,t=fr.t;
        bool done=0;

        if('a'<=mz[x][y] && mz[x][y]<='z'){
            int xx=doors[x][y][0];
            int yy=doors[x][y][1];
            if(!cs[xx][yy]) {
                cs[xx][yy]=1;
                if(mz[xx][yy]=='I'){
                    done=1;
                    ans=t+1;
                }
                qn.push(nd(xx,yy,t+1));
            }
        }
        for(int i=0;i<4;i++){
            int xx=x+mov[i][0];
            int yy=y+mov[i][1];
            if(xx<0||yy<0||xx==n||yy==m) continue;
            if(cs[xx][yy]) continue;
            if(mz[xx][yy]=='#') continue;
            cs[xx][yy]=1;
            if(mz[xx][yy]=='I'){
                done=1;
                ans=t+1;
                break;
            }
            qn.push(nd(xx,yy,t+1));
        }  

        if(done) break;
        qn.pop();
    }
}
int main(){
    int t;
    cin>>t;
    int st=t;
    while(t){
        t--;

        //Initialization
        ans=INF;
        qn=queue<nd>();//clear the queue
        memset(havetrs,0,sizeof(havetrs));
        memset(cs,0,sizeof(cs));
        cin>>n>>m;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++){
                cin>>mz[i][j];
                if(mz[i][j]=='B') sx=i,sy=j;
                else if('a'<=mz[i][j] && mz[i][j]<='z'){
                    int k=mz[i][j]-'a';
                    if(havetrs[k]){
                        int x=trs[k][0],y=trs[k][1];
                        doors[x][y][0]=i;
                        doors[x][y][1]=j;
                        doors[i][j][0]=x;
                        doors[i][j][1]=y;
                    }
                    else{
                        havetrs[k]=1;
                        trs[k][0]=i;
                        trs[k][1]=j;
                    }
                }
            }
        bfs();
        if(ans==INF) ans=-1;
        printf("Case #%d: %d\n",st-t,ans);
    }
    return 0;
}