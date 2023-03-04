//⭐demo 2: Brithday Cake
#include<bits/stdc++.h>
using namespace std;
int M,N;
int minS=INT_MAX,area=0;
bool finished=0;
void dfs(int v, int m,int r, int h){
    if(m==0){
        if(v!=0) return;
        //if(v) is "if(v!=0)" instead of "if(v>0)"
        minS=min(minS, area);
        finished=1;
        return;
    }
    if(v<=0) return;
    for(int rr=r;rr>=m;rr--){
        if(m==M) {area = rr*rr;
            if(area>=minS) continue;
        }
        //the first layer
        for(int hh=h;hh>=m;hh--){
            //m layers, h_m>=m
            if(area+2*rr*hh>=minS) continue;
            area+=2*rr*hh;
            dfs(v-rr*rr*hh,m-1,rr-1,hh-1);
            area-=2*rr*hh;
        }
    }
    return;
}
int main(){
    cin>>N>>M;
    int h=N;
    int r = (int)sqrt(N);
    dfs(N,M,r,h);
    if(finished) cout << minS << endl;
    else cout << 0 << endl;
    return 0;
}


//demo 1: Roads(POJ1724)
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int k,n,r;
int minDist=INT_MAX;
bool finished=0;
bool havebeen[110]{0};
int minl[110][10002]{0};
int dist=0,cost=0;
struct Road{
    int s,d,l,t;
    Road(int ss, int dd, int ll, int tt):s(ss),d(dd),l(ll),t(tt){};
};
vector<vector<Road>> road(110);
void dfs(int position){
    if(dist>=minDist) return;
    if(cost>k) return;
    if(position==n){
        finished=1;
        minDist=min(minDist, dist);
        return;
    }
    vector<Road> & r=road[position];
    for(int i=0;i<r.size();i++)
        if(!havebeen[r[i].d]){
            if(minl[r[i].d][cost+r[i].t]!=0&&minl[r[i].d][cost+r[i].t]<=dist+r[i].l) continue;
        havebeen[r[i].d]=1;
        dist+=r[i].l;
        cost+=r[i].t;
        minl[r[i].d][cost+r[i].t]=dist;
        dfs(r[i].d);
        havebeen[r[i].d]=0;
        dist-=r[i].l;
        cost-=r[i].t;
    }
    return;
}
int main(){
    cin>>k>>n>>r;
    int s,d,l,t;
    for(int i=0;i<r;i++){
        cin>>s>>d>>l>>t;
        road[s].push_back(Road(s,d,l,t));
    }
    havebeen[1]=1;
    dfs(1);
    if(finished)
        cout << minDist << endl;
    else cout << -1 << endl;
    return 0;
}
*/


//basic demos:
//POJ 2815: Tower/Castle (coloring)
/*
#include<iostream>
using namespace std;
int r[55][55],m,n;
bool cs[55][55]{0};//closed set;
int num=0;
int mov[4][2]={0,-1,-1,0,0,1,1,0};
int colored(int i, int j){
    cs[i][j]=1;
    int s=1;
    for(int u=0;u<4;u++){
        if(r[i][j]&(1<<u)) continue;
        int x=i+mov[u][0];
        int y=j+mov[u][1];
            if(!cs[x][y]){
                cs[x][y]=1;
                s+=colored(x,y);
            }
    }
    return s;
}
int main(){
    cin>>m>>n;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>r[i][j];
    int maxr=0;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if(!cs[i][j]) {
                num++;
                cs[i][j]=1;
                maxr=max(maxr,colored(i,j));
            }
    cout << num << endl << maxr << endl;
    return 0;
}
*/


//POJ 4103: grid game
/*
#include<iostream>
using namespace std;
int n,num=0;
bool g[50][50]{0};
int mov[3][2]={0,1,0,-1,1,0};
void dfs(int i,int j,int d){
    if(d==n) {
        num++;
        return;
    }
    for(int u=0;u<3;u++){
        int x=i+mov[u][0];
        int y=j+mov[u][1];
        if(!g[x][y]){
            g[x][y]=1;
            dfs(x,y,d+1);
            g[x][y]=0;
        }
    }
}
int main(){
    cin>>n;
    g[0][n]=1;
    dfs(0,n,0);
    cout << num << endl;
    return 0;
}
*/

