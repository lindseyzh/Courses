//Ref:
//
//Explanation: https://blog.csdn.net/yhjpku/article/details/81370126
//Code: https://blog.csdn.net/weixin_44489823/article/details/103110549
#include<bits/stdc++.h>
#define N 100010
using namespace std;
bool vis[N]{0};
int ind[N]{0};
int n;
vector<int> ve[N];
void dfs(int a){
    vis[a]=1;
    int en=ve[a].size();
    for(int i=0;i<en;i++){
        int nx=ve[a][i];
        if(!vis[nx]){
            ind[nx]--;
            if(ind[nx]==0)
                dfs(nx);
        }
    }
}
int main(){
    int m,t;
    cin>>t;
    while(t--){
        bool ok=0;
        scanf("%d%d",&n,&m);
        int a,b;
        for(int i=1;i<=n;i++){
            vis[i]=0;
            ind[i]=0;
            ve[i].clear();
        }
        for(int i=0;i<m;i++){
            scanf("%d%d",&a,&b);
            ve[a].push_back(b);
            ind[b]++;
        }
        for(int i=1;i<=n;i++){
            if(ind[i]==0 && !vis[i]) dfs(i);
        }
        for(int i=1;i<=n;i++)
            if(!vis[i]) {
                ok=1;
                break;
            }

        if(ok) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}