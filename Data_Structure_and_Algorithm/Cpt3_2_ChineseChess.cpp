#include<bits/stdc++.h>
using namespace std;
#define INF 10000000
int sx,sy,ex,ey,m;
int ans;
int mov[8][2]={1,2,1,-2,-1,2,-1,-2,2,1,2,-1,-2,1,-2,-1};
int leg[8][2]={0,1,0,-1,0,1,0,-1,1,0,1,0,-1,0,-1,0};
struct nd{
    int x,y,s;
    nd(int xx,int yy,int ss):x(xx),y(yy),s(ss){}
};
int bd[40][40]{};//step
bool ok[40][40]{};
int lasx[40][40],lasy[40][40];
int num[40][40]{0};//num of solutions
queue<nd> qn;
void bfs(){
    qn.push(nd(sx,sy,0));
    bd[sx][sy]=0;
    num[sx][sy]=1;
    ok[sx][sy]=1;
    ans = INF;
    while(!qn.empty()){
        nd fr = qn.front();
        qn.pop();
        int x=fr.x,y=fr.y,s=fr.s;
        if(s>=ans) break;
        for(int i=0;i<8;i++){
            int xx=x+mov[i][0];
            int yy=y+mov[i][1];
            if(xx<0||xx>10||yy<0||yy>10) continue;
            if(bd[xx][yy]==-2) continue;//unavailable
            if(bd[x+leg[i][0]][y+leg[i][1]]==-2) continue;//legging
            if(bd[xx][yy]>=0 && bd[xx][yy]<s+1) continue;
            bd[xx][yy]=s+1;
            num[xx][yy]+=num[x][y];
            lasx[xx][yy]=x;
            lasy[xx][yy]=y;
            if(xx==ex && yy==ey){
                if(ans==INF) 
                    ans=s+1;
                continue;
            }
            if(!ok[xx][yy])
                qn.push(nd(xx,yy,s+1));
            ok[xx][yy]=1;
        }
    }
}
void printit(int xx,int yy){
    if(xx!=sx || yy!=sy) {
        printit(lasx[xx][yy],lasy[xx][yy]);
        printf("-");
    }
    printf("(%d,%d)",xx,yy);    
}
int main(){
    cin>>sx>>sy>>ex>>ey;
    cin>>m;
    int px,py;
    memset(bd,-1,sizeof(bd));
    for(int i=0;i<m;i++){
        cin>>px>>py;
        bd[px][py]=-2;//unavailable
    }
    if(sx==ex&&sy==ey){
        printf("(0,0)\n");
        return 0;
    }
    bfs();
    if(num[ex][ey]>1) cout << num[ex][ey] << endl;
    else{
        printit(ex,ey);
        printf("\n");
    }
    return 0;
}