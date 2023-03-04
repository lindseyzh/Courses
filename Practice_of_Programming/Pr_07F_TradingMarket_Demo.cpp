#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <set>
#include <cstring>
#include <stack>
#include <algorithm>
#include <cmath>
#include <queue>
#include <set>

using namespace std;

int in[1010];
const int inf = 1000000000;

struct node{
    int v;
    int label;
};
int dp[1010];
int pre[1010];

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<node> > g(n+1);
    vector<vector<node> > inv(n+1);
    memset(in,0,sizeof(in));
    for(int i=0;i<m;i++){
        int x, y, z;
        scanf("%d%d%d",&x,&y,&z);
        g[x].push_back({y,z});
        inv[y].push_back({x,z});
        in[y]++;
    }
    memset(dp,0,sizeof(dp));
    dp[1] = 0;
    pre[1] = 0;
    int res = 0;
    queue<int> que;
    que.push(1);
    while(!que.empty()){
        int v = que.front();
        que.pop();
        if(g[v].empty()){
            res = max(res, dp[v]);
            continue;
        }
        for(auto x:g[v]){
            int p = pre[v];
            while(p){
                if(p == x.v){
                    cout << inf << endl;
                    return 0;
                }
                p = pre[p];
            }
            if(dp[x.v] < dp[v]+x.label){
                dp[x.v] = dp[v]+x.label;
                pre[x.v] = v;
                que.push(x.v);
                }
        }
}
cout << res << endl;
return 0;
}