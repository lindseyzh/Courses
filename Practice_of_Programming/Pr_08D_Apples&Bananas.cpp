//Jun.23_01
#include<bits/stdc++.h>
using namespace std;
int n,m;
bool ba[110];
int bnum[110][110]{0};
int main(){
    int a,t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        memset(ba,0,sizeof(ba));
        for(int i=0;i<n;i++){
            cin>>a;
            ba[a]=1;
        }
        memset(bnum,0,sizeof(bnum));
        for(int i=1;i<=100;i++){
            if(ba[i]) bnum[i][i]=1;
            for(int j=i+1;j<=100;j++)
                bnum[i][j]=bnum[i][j-1]+ba[j];
        }
        int ans=0;
        for(int i=1;i<=100;i++)
            for(int j=i+ans;j<=100;j++)
                if(bnum[i][j]<=m) ans=max(ans,j-i);

        ans++;
        cout << ans << endl;
    }
    return 0;
}