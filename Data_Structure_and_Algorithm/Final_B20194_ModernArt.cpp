//stack
//Ref: https://blog.csdn.net/weixin_59966536/article/details/128066559

#include<bits/stdc++.h>
using namespace std;
#define N 100010
int n,a[N];
int las[N];
bool vis[N]{0};
stack<int> si;
int main(){
    cin>>n;
    memset(las,-1,sizeof(las));
    int cur;
    for(int i=0;i<n;i++){
        cin>>cur;
        a[i]=cur;
        las[cur]=i;
    }
    si.push(0);
    vis[0]=1;
    las[0]=n;
    bool legal=1;
    int maxd=0;
    for(int i=0;i<n;i++){
        if(si.top()!=a[i]){
            if(vis[a[i]]) {
                legal=0;
                break;
            }
            si.push(a[i]);
        }
        vis[a[i]]=1;
        maxd=max(maxd,(int)si.size());
        //Note: si.size() returns size_t
        if(i==las[a[i]]) si.pop();
    }
    if(!legal) cout << -1 << endl;
    else cout << maxd-1 << endl;
    return 0;
}