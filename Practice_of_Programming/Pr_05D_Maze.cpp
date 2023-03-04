//Jun.16_03
#include<bits/stdc++.h>
#define INF 1000000
using namespace std;
int m,n,H;
char mz[300][300];
bool cs[300][300][6];
int ans;
int mov[4][2]={1,0,-1,0,0,1,0,-1};
struct nd{
    int x,y,t,h;
    nd(){}
    nd(int xx,int yy,int tt,int hh):x(xx),y(yy),t(tt),h(hh){}
};
queue<nd> qn;
void bfs(){
    qn.push(nd(0,0,0,H));
    while(1){
        if(qn.empty()) break;
        nd fr=qn.front();
        int x=fr.x,y=fr.y,t=fr.t,h=fr.h;
        bool done=0;
        for(int i=0;i<4;i++){
            int xx=x+mov[i][0];
            int yy=y+mov[i][1];
            if(xx<0||yy<0||xx==m||yy==n) continue;
            if(mz[xx][yy]=='#') continue;
            int hn=h;
            if(mz[xx][yy]=='*') hn--;
            if(hn==0 || cs[xx][yy][hn]) continue;
            cs[xx][yy][hn]=1;
            if(xx==m-1&&yy==n-1&&hn>0){
                ans=t+1;
                done=1;
                break;
            }
            qn.push(nd(xx,yy,t+1,hn));
        }
        if(done) break;
        qn.pop();
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>m>>n>>H;
        ans=INF;
        qn=queue<nd>();//clear the queue   
        memset(cs,0,sizeof(cs));
        
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                cin>>mz[i][j];
        bfs();
        cout << ans << endl;
    }
    return 0;
}