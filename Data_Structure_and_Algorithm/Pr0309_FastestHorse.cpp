//1125-3
//0307
#include<bits/stdc++.h>
using namespace std;
#define N 100
#define INF 10000000
int sx,sy,nx,ny;
int bd[N][N]{0};
int mov[8][2]={1,2,1,-2,-1,2,-1,-2,2,1,2,-1,-2,1,-2,-1};
int hor[8][2]={0,1,0,-1, 0,1, 0,-1,1,0,1,0, -1,0,-1,0};
struct nd{
    int x,y,t;
    int lx,ly;
    nd(){}
    nd(int xx,int yy,int tt,int lxx=-1,int lyy=-1):x(xx),y(yy),t(tt),lx(lxx),ly(lyy){}
};
int ansp[N][2];
int stp[N][N]{0},num[N][N]{0};  
int hasbeen[N][N]{0};
int lasx[N][N],lasy[N][N];
int ans=INF;
void bfs(){
    queue<nd> qn;
    qn.push(nd(sx,sy,0));
    stp[sx][sy]=0;
    num[sx][sy]=1;
    while(1){
        if(qn.empty()) break;
        nd fr=qn.front();
        qn.pop();
        int x=fr.x,y=fr.y,t=fr.t;
        if(t>=ans) break;
        for(int i=0;i<8;i++){
            int xx=x+mov[i][0];
            int yy=y+mov[i][1];
            if(xx<0||yy<0) continue;
            if(bd[xx][yy]==1) continue;//taken by other pieces
            if(stp[xx][yy]>0&&t+1>stp[xx][yy]) continue;
            int hx=x+hor[i][0];
            int hy=y+hor[i][1];
            if(bd[hx][hy]==1) continue;
            stp[xx][yy]=t+1;
            num[xx][yy]+=num[x][y];
            lasx[xx][yy]=x;
            lasy[xx][yy]=y;
            if(xx==nx&&yy==ny){
                ans=t+1;
            }
            if(!hasbeen[xx][yy]){
                qn.push(nd(xx,yy,t+1,x,y));
                hasbeen[xx][yy]=1;
            }
        }
    }
}
int main(){
    cin>>sx>>sy>>nx>>ny;
    int m,x,y;
    cin>>m;
    while(m--){
        cin>>x>>y;
        bd[x][y]=1;
    }
    //Note: special judge
    if(sx==nx&&sy==ny){
        printf("(%d,%d)",nx,ny);
       
        return 0;
    }
    bfs();
    if(num[nx][ny]>1) cout << num[nx][ny] << endl;
    else{
        ansp[0][0]=nx;
        ansp[0][1]=ny;
        x=nx,y=ny;
        for(int j=1;j<=ans;j++){
            int xx=lasx[x][y];
            int yy=lasy[x][y];
            ansp[j][0]=xx;
            ansp[j][1]=yy;
            x=xx,y=yy;
        }
        printf("(%d,%d)",ansp[ans][0],ansp[ans][1]);
        for(int i=ans-1;i>=0;i--)
            printf("-(%d,%d)",ansp[i][0],ansp[i][1]);
        printf("\n");
    }
    return 0;
}