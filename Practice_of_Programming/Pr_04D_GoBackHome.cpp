//Jun.17_6
#include<bits/stdc++.h>
using namespace std;
int n,p[15][15];
bool done;
bool cs[15];
void dfs(int k){
    if(done) return;
    if(k==n-1){
        done=1;
        return;
    }
    for(int i=0;i<n;i++)
        if(p[k][i]>0 && !cs[i]){
            cs[i]=1;
            dfs(i);
        }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>p[i][j];
        done=0;
        memset(cs,0,sizeof(cs));
        cs[0]=1;
        dfs(0);
        if(done) cout << "YES" << endl;
        else cout << "NO" << endl; 
    }
    return 0;
}
