//Jun.23_
//Referemce:https://www.cnblogs.com/hoskey/p/3800200.html
#include<bits/stdc++.h>
using namespace std;
int sr[110][110]{0};//share
int tsr[110][110]{0};
bool ctrl[110][110]{0};
int maxn=0;
int cur;
void dfs(int k){
    for(int i=0;i<=maxn;i++){
        tsr[cur][i]+=sr[k][i];
        if(tsr[cur][i]>50 && !ctrl[cur][i]){
            ctrl[cur][i]=1;
            dfs(i);
        }
    }
}
int main(){
    int n,a,b,p;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>p;
        maxn=max(maxn,max(a,b));
        sr[a][b]=p;
    }
    for(int i=1;i<=maxn;i++){
        cur=i;
        ctrl[i][i]=1;
        dfs(i);
    }

    for(int i=1;i<=maxn;i++)
        for(int j=1;j<=maxn;j++)
            if(i!=j && ctrl[i][j]){
                printf("%d %d\n",i,j);
            }

    return 0;
}