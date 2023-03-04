//Jun.23
#include<bits/stdc++.h>
using namespace std;
int n,m;
bool bb[20][110];
bool pu[20]{0};
int ans=0;
void dfs(int k){
    if(k==n){
        int aans=0;
        for(int j=0;j<m;j++){
            int num=0;
            for(int i=0;i<n;i++)
                num+= pu[i] ? (!bb[i][j]):bb[i][j];
            aans+=max(num,n-num);
        }
        ans=max(ans,aans);
        return;
    }
    pu[k]=1;
    dfs(k+1);
    pu[k]=0;
    dfs(k+1);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        ans=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                cin>>bb[i][j];
        memset(pu,0,sizeof(pu));
        dfs(0);
        cout << ans << endl;
    }
    return 0;
}