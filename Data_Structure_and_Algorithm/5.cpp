#include<bits/stdc++.h>
using namespace std;
#define N 50050
#define INF 1250025050
typedef long long ll;
int lf[N]{},rt[N]{},p[N]{};
int Size[N]{0},inb[N]{};
ll tinb=0;
ll bestinb,curinb;
int calsize(int a){
    if(a==0) return 0;
    Size[a]=1;
    if(lf[a]==0&&rt[a]==0) {
        inb[a]=0;
        return 1;
    }
    if(lf[a]) Size[a]+=calsize(lf[a]);
    if(rt[a]) Size[a]+=calsize(rt[a]);
    inb[a]=abs(Size[lf[a]]-Size[rt[a]]);
    tinb+=inb[a];
    // cout << "tinb+=inb"<<a << '=' << inb[a] << endl;
    return Size[a];
}
void dfs(int a){
    if(!a[lf]&&!a[rt]){
        bestinb=min(bestinb,curinb);
        return;
    }
    if(Size[a[lf]]>Size[a[rt]]){
        curinb--;
        dfs(a[lf]);
        curinb++;
        curinb++;
        dfs(a[rt]);
        curinb--;
    }
    else if(Size[a[rt]]>Size[a[lf]]){
        curinb--;
        dfs(a[rt]);
        curinb++;
        curinb++;
        dfs(a[lf]);
        curinb--;
    }
    else{
        curinb++;
        dfs(a[rt]);
        curinb--;
        curinb++;
        dfs(a[lf]);
        curinb--;    
    }
}
int main(){
    int n;
    cin>>n;
    int a,b;
    for(int i=0;i<n-1;i++){
        cin>>a>>b;
        p[b]=a;
        if(lf[a]==0) lf[a]=b;
        else rt[a]=b;
    }
    calsize(1);
    // cout << tinb << endl;
    curinb=tinb;
    bestinb=INF;
    dfs(1);
    cout << bestinb << endl;
    return 0;
}