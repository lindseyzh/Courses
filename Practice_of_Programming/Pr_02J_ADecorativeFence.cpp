//Jun.23
//POJ 1037
#include<bits/stdc++.h>
using namespace std;
int n,c;
int ct=0,ans[22],cur[22];
bool done=0,cs[22];
void dfs(int k,int las,int st){
    if(done) return;
    if(k==n){
        ct++;
        if(ct==c){
            for(int i=0;i<n;i++)
                ans[i]=cur[i];
            done=1;
        }
        return;
    }
    for(int i=1;i<=n;i++)
        if(!cs[i]){

        }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>c;
        ct=0;
        done=0;
        memset(cs,0,sizeof(cs));
        dfs(0,-1,-1);
        cout << ans[0];
        for(int i=1;i<n;i++)
            cout <<" " << ans[i];
        cout << endl;
    }
    return 0;
}