//Jun.18_03
#include<bits/stdc++.h>
using namespace std;
int n,m;
const int MAXI=100010;
int cs[MAXI];
struct nd{
    int x,k;
    string s="";
    nd(){}
    nd(int xx,int kk):x(xx),k(kk){}
};
queue<nd> qn;
nd ans;
void bfs(){
    qn=queue<nd>();
    qn.push(nd(n,0));
    memset(cs,0,sizeof(cs));
    cs[n]=1;
    while(!qn.empty()){
        nd fr=qn.front();
        qn.pop();
        int x=fr.x,k=fr.k;
        string s=fr.s;
        //1: H
        if(3*x<MAXI)//necessary.3^25 ~ 10^11
        if(!cs[3*x]){
            nd nx(3*x,k+1);
            nx.s=s+"H";
            if(3*x==m){
                ans=nx;
                return;
            }
            cs[3*x]=1;
            qn.push(nx);
        }
        if(!cs[x/2]){
            nd nx(x/2,k+1);
            nx.s=s+"O";
            if(x/2==m){
                ans=nx;
                return;
            }
            cs[x/2]=1;
            qn.push(nx);
        }
    }
}
int main(){
    while(cin>>n>>m){
        if(n==0&&m==0) return 0;
        bfs();
        cout << ans.k << endl;
        cout << ans.s << endl;
    }
    return 0;
}