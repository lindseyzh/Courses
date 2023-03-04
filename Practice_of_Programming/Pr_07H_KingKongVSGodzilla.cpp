//Reference: Ag7_A_MonkeyKing
#include<bits/stdc++.h>
using namespace std;
const int BLK=1<<10;
struct nd{
    int x,y,stp,key,blk;
    nd(){}
    nd(int xx,int yy,int ss,int kk=0,int bb=0):
        x(xx),y(yy),stp(ss),key(kk),blk(bb){}
};
queue<nd> qn;
int n,m;
char bd[110][110];
bool cs[110][110][BLK][10]{0};
int sx,sy,k=0;
int mov[4][2]={1,0,-1,0,0,1,0,-1};
void bfs(){
    qn.push(nd(sx,sy,0));
    cs[sx][sy][0][0]=1;
    while(!qn.empty()){
        nd fr=qn.front();
        qn.pop();
        int x=fr.x,y=fr.y,stp=fr.stp,key=fr.key,blk=fr.blk;
        for(int i=0;i<4;i++){
            int xx=x+mov[i][0];
            int yy=y+mov[i][1];
            if(xx<0||yy<0||xx==n||yy==m) continue;
            
        }
    }
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            cin>>bd[i][j];
            if(bd[i][j]=='S')
                sx=i,sy=j;
            else if(bd[i][j]=='G'){
                bd[i][j]='A'+k;
                k++;
            }
        }
    bfs();
    return 0;
}