//Jun.19_01
//dfs:TLE
/*
#include<bits/stdc++.h>
#define INF 1000000
using namespace std;
int n,k,m,h;
int a[1010],b[1010],c[1010];
int mst[1010][1010]{0};
int ans=INF;
inline int curv(int t){
    return min(t,m);
}
struct nd{
    int us,bs,r,k;
    nd(int uu,int bb,int rr,int kk):us(uu),bs(bb),r(rr),k(kk){}
};
queue<nd> qn;
void dfs(int r,int us,int bs){
    if(r>=ans || r>=n) return;
    if(ans<INF){
        if(mst[r][ans-1]<bs) 
            return;
    }
    if(mst[r][n-1]<bs) return;
    //1.attack
    int nxbs=bs-b[r];
    if(nxbs<=0){
        ans=min(ans,r+1);
        return;
    }
    int nxus=us-a[r];
    if(nxus>0){
        dfs(r+1,nxus,nxbs);
    }
    
    //2.recover
    nxus=curv(us+c[r])-a[r];
    if(nxus>0)
        dfs(r+1,nxus,bs);
    
    //3.frog
    if(k>0){
        k--;
        dfs(r+1,us,bs);
        k++;
    }

}  
int main(){
    cin>>n>>k>>m>>h;
    for(int i=0;i<n;i++)   {
        cin>>a[i]>>b[i]>>c[i];
        mst[i][i]=b[i];
    }
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++){
            mst[i][j]=mst[i][j-1]+b[j];
        }
    dfs(0,m,h);
    if(ans==INF) cout << "Fail" << endl;
    else cout << ans << endl;
    return 0;
}
*/


//Jun.19_01
//bfs:MLE
#include<bits/stdc++.h>
#define INF 1000000
using namespace std;
int n,K,m,h;
int a[1010],b[1010],c[1010];
int mst[1010][1010]{0};
int ans=INF;
inline int curv(int t){
    return min(t,m);
}
struct nd{
    int us,bs,r,k;
    nd(int uu,int bb,int rr,int kk):us(uu),bs(bb),r(rr),k(kk){}
};
queue<nd> qn;
void bfs(){
    qn.push(nd(m,h,0,K));
    while(!qn.empty()){
        nd fr=qn.front();
        qn.pop();
        int us=fr.us,bs=fr.bs,r=fr.r,k=fr.k;
        if(r>=n) break;
        if(mst[r][n-1]<bs) continue;
        //1. attack
        if(bs-b[r]<=0){
            ans=r+1;
            break;
        }
        if(us-a[r]>0){
            nd nx(us-a[r],bs-b[r],r+1,k);
            qn.push(nx);
        }
        //2.heal
        int nxus=curv(us+c[r])-a[r];
        if(nxus>0){
            nd nx(nxus,bs,r+1,k);
            qn.push(nx);
        }
        //3.frog
        if(k>0){
            nd nx(us,bs,r+1,k-1);
            qn.push(nx);
        }
    }
}
int main(){
    cin>>n>>K>>m>>h;
    for(int i=0;i<n;i++)   {
        cin>>a[i]>>b[i]>>c[i];
        mst[i][i]=b[i];
    }
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            mst[i][j]=mst[i][j-1]+b[j];
    bfs();
    if(ans==INF) cout << "Fail" << endl;
    else cout << ans << endl;
    return 0;
}

