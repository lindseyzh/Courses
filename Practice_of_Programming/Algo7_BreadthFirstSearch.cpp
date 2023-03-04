//POJ 1077: Eight/Fifteen
//unfinished
/*
#include<bits/stdc++.h>
using namespace std;
const int MAXN=362880+10;

int cur;
int mov[4][2]={0,1,1,0,-1,0,0,-1};
int fac[9]={1,1,2,6,24,120,720,5040,40320};
int vis[MAXN]{0};

inline int StoN(int b[]);
struct node{
    int s=0;
    int las=-1;
    int op=-1;
    int p,px,py;
    int bd[9]{0};
    node(int pp=-1 ,int * b = NULL):p(pp){
        if(pp!=-1){
            px=pp/3;
            py=pp%3;
        }
        if(b!=NULL)
            for(int i=0;i<9;i++)
                bd[i]=b[i];
        s=StoN(bd);
    }
};
queue<node> qn;
node states[MAXN];

inline int StoN(int b[]){
    int s=0;
    for(int i=0;i<9;i++){
        int n=0;
        for(int j=i+1;j<9;j++)
            if(b[i]>b[j]) n++;
        s+=n*fac[8-i];
    }
    return s+1;
}
inline void NtoS(int b[],int s){
    for(int i=8;i>=0;i--){
        b[i]=s/fac[i];
        s/=fac[i];
    }
}
void bfs(node n){
    for(int i=0;i<4;i++){
        int x=n.px+mov[i][0];
        int y=n.py+mov[i][1];
        if(x<0 || y<0 || x==3 || y==3) continue;
        if(vis[n.s]==1) continue;
        node s = n;
        int a = s.bd[x*3+y];
        s.bd[x*3+y]=s.bd[n.px*3+n.py];
        s.bd[n.px*3+n.py]=a;
        s.p=x*3+y;
        s.s=StoN(s.bd);
        s.las=n.s;
        s.op=i;
        qn.push(s);
    }


}
int main(){
    char c;
    int bd[9]
    for(int i=0;i<9;i++)
        {
            cin>>c;
            if(c=='x'){
                cur=i;
                bd[i]=9;
            }
            else bd[i]=c-'0';
        }
    qn.push(node(cur,bd));
    qn.front().s=StoN(qn.front().bd);

    while(1){
        node n=qn.front();
        if(n.s==1){
            
            break;
        }
        bfs(n);
        qn.pop();
    }
    return 0;
}
*/


//POJ 4127: Maze
//solution 1:dfs
/*
#include<iostream>
#include<cstring>
#include<climits>
using namespace std;
bool m[5][5];
int bestd=INT_MAX;
int steps[25][2];
int beststeps[25][2];
bool cs[5][5]{0};
int mov[4][2]={0,1,1,0,-1,0,0,-1};
void dfs(int x,int y,int d){
    if(x==4 && y==4){
        if(d<bestd){
            bestd=d;
            memcpy(beststeps,steps,sizeof(steps));
        }
        return;
    }
    for(int u=0;u<4;u++){
        int xx=x+mov[u][0];
        int yy=y+mov[u][1];
        if(xx<0 || yy<0 || xx>=5 || yy>=5) continue;
        if(cs[xx][yy] || m[xx][yy]) continue;
        steps[d][0]=xx;
        steps[d][1]=yy;
        cs[xx][yy]=1;
        dfs(xx,yy,d+1);
        cs[xx][yy]=0;
    }
    return;
}
int main(){
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            cin>>m[i][j];
    dfs(0,0,0);
    printf("(0, 0)\n");
    for(int i=0;i<bestd;i++)
        printf("(%d, %d)\n",beststeps[i][0],beststeps[i][1]);
    return 0;
}
*/

//solution 2:bfs(unfinished)
/*
#include<bits/stdc++.h>
using namespace std;
int m[5][5];
int main(){
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            cin>>m[i][j];
    return 0;
}
*?



//POJ 4001: catch the cow
/*
#include<bits/stdc++.h>
using namespace std;
struct node{
    int x,d;
    node(int xx,int dd=0):x(xx),d(dd){}
};
queue<node> nd;
#define MAXL 100000
bool cs[100020];
int k,n;
int d=0;
bool findit=0;
int main(){
    cin>>n>>k;
    cs[n]=1;
    nd.push(node(n,0));
    while(1){
        int x= nd.front().x;
        int d= nd.front().d;
        if(x==k) {
            cout << d << endl;
            return 0;
        }
        nd.pop();
        if(x+1<=MAXL && !cs[x+1]){
            nd.push(node(x+1,d+1));
            cs[x+1]=1;
        }
        if(x-1>=0 && !cs[x-1]){
            nd.push(node(x-1,d+1));
            cs[x-1]=1;
        }
        if(2*x<=MAXL && !cs[2*x]){
            nd.push(node(2*x,d+1));
            cs[2*x]=1;
        }
    }

    return 0;
}
*/



