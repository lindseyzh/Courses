//Jun.23_05
//钥匙类的BFS迷宫. 建议使用int记录钥匙数
//而不是用bool记录是否达到过某个位置某个钥匙数的状态
//否则可能TLE/MLE等等
#include<bits/stdc++.h>
#define INF 100000000
using namespace std;
int m,n,mz[110][110];
int knum,ans;
//bool cs[110][110][1010];
//the number of keys is larger, "bool" cs results in TLE
int cs[110][110];
int mov[4][2]={1,0,-1,0,0,1,0,-1};
struct nd{
    int x,y,stp,k;
    nd(){};
    nd(int xx,int yy,int st,int kk):x(xx),y(yy),stp(st),k(kk){}
};
struct key{
    int k,x,y;
    key(){}
    key(int kk,int xx,int yy):k(kk),x(xx),y(yy){}
    bool operator<(key b){
        return k<b.k;
    }
};
queue<nd> qn;
vector<key> vk;
void bfs(){
    memset(cs,0,sizeof(cs));
    qn=queue<nd>();
    int fir=1;
    if(mz[0][0]==2) fir=2;//if mz[0][0] is the first key
    cs[0][0]=fir;
    qn.push(nd(0,0,0,fir));
    if(fir==knum+1){
        ans=0;
        return;
    }
    bool done=0;
    while(!qn.empty()){
        nd fr=qn.front();
        qn.pop();
        int x=fr.x,y=fr.y,k=fr.k,stp=fr.stp;
        for(int i=0;i<4;i++){
            int xx=x+mov[i][0];
            int yy=y+mov[i][1];
            if(xx<0||yy<0||xx==m||yy==n) continue;
            if(mz[xx][yy]==0) continue;
            int nxk=k;
            if(mz[xx][yy]==k+1)
                nxk=k+1;
            if(cs[xx][yy]!=0 && cs[xx][yy]>=nxk) continue;
            cs[xx][yy]=nxk;
            nd nx(xx,yy,stp+1,nxk);
            qn.push(nx);
            if(nxk==knum+1){
                ans=stp+1;
                done=1;
                break;
            }
        }
        if(done) break;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>m>>n;
        ans=INF;
        vk=vector<key>();
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++){
                cin>>mz[i][j];
                if(mz[i][j]>1){
                    vk.push_back(key(mz[i][j],i,j));
                }
            }
        sort(vk.begin(),vk.end());
        knum=vk.end()-vk.begin();
        for(int i=0;i<knum;i++)
            mz[vk[i].x][vk[i].y]=i+2;
        bfs();
        if(ans<INF) cout << ans << endl;
        else cout << -1 << endl;
    }
    return 0;
}