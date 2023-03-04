//bfs
//practice of BFS is needed
#include<bits/stdc++.h>
using namespace std;
int n,m;
int sx,sy,ex,ey;
char mz[102][102];
bool cs[102][102][10][(1<<5)+10]{0};
int bes[102][102][10][(1<<5)+10];
int bestt=INT_MAX;
int mov[4][2]={0,1,1,0,-1,0,0,-1};
struct node{
    int x,y,key,snk,t;
    node(){}
    node(int xx,int yy,int kk,int ss,int tt):
        x(xx),y(yy),key(kk),snk(ss),t(tt){}
};
queue<node> qn;
void bfs(){
    qn.push(node(sx,sy,0,0,0));
    while(1){
        if(qn.empty()) break;
        node cur=qn.front();
        int key=cur.key,snk=cur.snk,t=cur.t;
        if(cur.x==ex && cur.y==ey && key==m){
            bestt=min(bestt,cur.t);
            qn.pop();
            continue;
        }
        if(t+abs(cur.x-ex)+abs(cur.y-ey)>=bestt) {
            qn.pop();
            continue;
        }
        for(int i=0;i<4;i++){
            int xx=cur.x+mov[i][0];
            int yy=cur.y+mov[i][1];
            if(xx<0||yy<0||xx==n||yy==n) continue;
            if(mz[xx][yy]=='#') continue;
        if(mz[xx][yy]==1+key+'0' && t+1<bestt) {
            if(cs[xx][yy][key+1][snk] && bes[xx][yy][key+1][snk]<=t+1) continue;
            cs[xx][yy][key+1][snk]=1;
//            cout << xx << yy << " " << t+1 <<endl;
            bes[xx][yy][key+1][snk]=t+1;
            qn.push(node(xx,yy,key+1,snk,t+1));
        }
        else if(mz[xx][yy]>='A'&& mz[xx][yy]<='E') {
            int ns=mz[xx][yy]-'A';
            if(snk&(1<<ns) && t+1<bestt) {
                if(cs[xx][yy][key][snk] && bes[xx][yy][key][snk]<=t+1) continue;
                cs[xx][yy][key][snk]=1;
 //               cout << xx << yy <<" " << t+1 << endl;
                bes[xx][yy][key][snk]=t+1;
                qn.push(node(xx,yy,key,snk,t+1));
            }
            else if(t+2<bestt){
                int nsnk=snk+(1<<ns);
                if(cs[xx][yy][key][nsnk] && bes[xx][yy][key][nsnk]<=t+2) continue;
                cs[xx][yy][key][nsnk]=1;
 //               cout << xx << yy <<" " << t+2 <<endl;
                bes[xx][yy][key][nsnk]=t+2;
                qn.push(node(xx,yy,key,nsnk,t+2));
            }
        }
        else if(t+1<bestt) {
            if(cs[xx][yy][key][snk] &&bes[xx][yy][key][snk]<=t+1) continue;
            cs[xx][yy][key][snk]=1;
 //           cout << xx << yy <<" " << t+1 <<  endl;
            bes[xx][yy][key][snk]=t+1;
            qn.push(node(xx,yy,key,snk,t+1));
        }
        }
        qn.pop();
    }
    return;
}
int main(){
    while(cin>>n>>m){
    if(n+m==0) return 0;
    memset(cs,0,sizeof(cs));
    memset(bes,0,sizeof(bes));
    bestt=INT_MAX;
    int snum=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)   { 
            cin>>mz[i][j];
            if(mz[i][j]=='K') 
                sx=i,sy=j;
            else if(mz[i][j]=='S'){
                mz[i][j]='A'+snum;
                snum++;
                }
            else if(mz[i][j]=='T')
                ex=i,ey=j;
        }
    cs[sx][sy][0][0]=1;
    bfs();
    if(bestt==INT_MAX) cout << "impossible" << endl;
    else cout << bestt << endl;
    }
    return 0;
}

//dfs:TLE
/*
#include<bits/stdc++.h>
using namespace std;
int n,m;
int sx,sy,ex,ey;
char mz[102][102];
bool cs[102][102][10][(1<<5)+10]{0};
int bes[102][102][10][(1<<5)+10];
int bestt=INT_MAX;
int mov[4][2]={0,1,1,0,-1,0,0,-1};
void dfs(int key,int t,int x,int y,int snk){
    if(mz[x][y]=='T' && key==m){
        bestt=min(t,bestt);
        return;
    }
    if(t+abs(ex-x)+abs(ey-y)>=bestt) return;
    for(int i=0;i<4;i++){
        int xx=x+mov[i][0];
        int yy=y+mov[i][1];
        if(xx<0 || xx==n || yy<0 || yy==n) continue;
        if(mz[xx][yy]=='#') continue;
        char ckey;
        if(key<m) ckey='0'+key+1;
        else ckey=' ';
        if(mz[xx][yy]==ckey && t+1<bestt) {
            if(cs[xx][yy][key+1][snk] && bes[xx][yy][key+1][snk]<=t+1) continue;
            cs[xx][yy][key+1][snk]=1;
//            cout << xx << yy << " " << t+1 <<endl;
            bes[xx][yy][key+1][snk]=t+1;
            dfs(key+1,t+1,xx,yy,snk);
        }
        else if(mz[xx][yy]>='A'&& mz[xx][yy]<='E') {
            int ns=mz[xx][yy]-'A';
            if(snk&(1<<ns) && t+1<bestt) {
                if(cs[xx][yy][key][snk] && bes[xx][yy][key][snk]<=t+1) continue;
                cs[xx][yy][key][snk]=1;
 //               cout << xx << yy <<" " << t+1 << endl;
                bes[xx][yy][key][snk]=t+1;
                dfs(key,t+1,xx,yy,snk);
            }
            else if(t+2<bestt){
                int nsnk=snk+(1<<ns);
                if(cs[xx][yy][key][nsnk] && bes[xx][yy][key][nsnk]<=t+2) continue;
                cs[xx][yy][key][nsnk]=1;
 //               cout << xx << yy <<" " << t+2 <<endl;
                bes[xx][yy][key][snk]=t+2;
                dfs(key,t+2,xx,yy,nsnk);
            }
        }
        else if(t+1<bestt) {
            if(cs[xx][yy][key][snk] &&bes[xx][yy][key][snk]<=t+1) continue;
            cs[xx][yy][key][snk]=1;
 //           cout << xx << yy <<" " << t+1 <<  endl;
            bes[xx][yy][key][snk]=t+1;
            dfs(key,t+1,xx,yy,snk);
        }
    }
    return;
}
int main(){
    while(cin>>n>>m){
    if(n+m==0) return 0;
    memset(cs,0,sizeof(cs));
    memset(bes,0,sizeof(bes));
    bestt=INT_MAX;
    int snum=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)   { 
            cin>>mz[i][j];
            if(mz[i][j]=='K') 
                sx=i,sy=j;
            else if(mz[i][j]=='S'){
                mz[i][j]='A'+snum;
                snum++;
                }
            else if(mz[i][j]=='T')
                ex=i,ey=j;
        }
    cs[sx][sy][0][0]=1;
    dfs(0,0,sx,sy,0);
    if(bestt==INT_MAX) cout << "impossible" << endl;
    else cout << bestt << endl;
    }
    return 0;
}
*/