//Jun.15-03
//DFS Pruning
#include<bits/stdc++.h>
using namespace std;
int ans[100000]{0};
bool sucs=0;
int n;
void dfs(int k,int s,int mint,double sum){
    if(sucs) return;
    if(k==n){
        if(abs(sum)<=1e-6 && s==0){
            sucs=1;
        }
        return;
    }
    //if((n-k)*(n-k)>s*sum) return;//pruning 1,unnecessary
    if(n-k<sum*mint) return;//⭐pruning 2(necessary)
    for(int t=mint;t<=s;t++){
        if(sum*t>=1.0){
            ans[k]=t;
            dfs(k+1,s-t,t,sum-1.0/t);
            }
        if(sucs) return;
    }
}
int main(){
    int m;
    cin>>m;
    while(m){
        m--;
        int s;
        cin>>s;
        sucs=0;
        memset(ans,0,sizeof(ans));
        n=1;
        while(1){
            if(n*n>s) break;
            dfs(0,s,1,1.0);
            if(sucs)
                break;
            n++;
        }
        if(sucs){
            cout << n;
            for(int i=0;i<n;i++)
                cout << ' ' << ans[i];
            cout << endl;
        }
        else cout << -1 << endl;
    }

    return 0;
}