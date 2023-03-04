#include<bits/stdc++.h>
using namespace std;
#define N 100010
typedef long long ll;
ll sum=0;
struct ed{
    int s,t;
    ll v;
    ed(){};
    ed(int ss,int tt,ll vv):s(ss),t(tt),v(vv){};
    friend bool operator<(const ed & a,const ed & b){
        return a.v>b.v;
    }
};
int p[N];
ll Size[N];
int find(int a){
    if(a==p[a]) return a;
    int pa=p[a];
    int ppa=find(pa);
    p[a]=ppa;
    return ppa; 
}
int getsize(int a){
    int pa=find(a);
    return Size[pa];
}
void Union(int a,int b,ll v){
    int pa=find(a);
    int pb=find(b);
    if(pa==pb) return;
    // printf("sum+=%d\n",(Size[pa]*Size[pb]-1)*(v+1));
    sum+=(Size[pa]*Size[pb]-1)*(v+1)+v;
    p[pa]=pb;
    Size[pb]=Size[pa]+Size[pb];
}
priority_queue<ed> qe;
int main(){
    int n;
    cin>>n;
    int s,t;
    ll v;
    for(int i=1;i<=n;i++){
        p[i]=i;
        Size[i]=1;
    }
    for(int i=0;i<n-1;i++){
        cin>>s>>t>>v;
        qe.push(ed(s,t,v));
    }
    for(int i=0;i<n-1;i++){
        ed cur=qe.top();
        qe.pop();
        int a=cur.s,b=cur.t,v=cur.v;
        Union(a,b,v);
    }
    cout << sum << endl;
    return 0;
}