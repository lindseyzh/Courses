//Jun.17_01
//Reference:https://www.shuzhiduo.com/A/A2dmRvKbze/
//dfs & pruning
#include<bits/stdc++.h>
#define INF 100000
using namespace std;
int s,n;
int h[200];//the height of column i
int c[20];
bool used[20];
bool done;
void dfs(int k){
    if(done) return;
    if(k==n){
        for(int i=0;i<s;i++)
            if(h[i]!=s) return;
        done=1;
        return;
    }
    int id=0;
    for(int i=1;i<s;i++)
        if(h[i]<h[id])
            id=i;
    int maxc=min(s-id,s-h[id]);
    for(int i=id+1;i<s;i++)
        if(h[i]!=h[id]) {
            maxc=min(maxc,i-id);
            break;
        }
    int lasc=INF;//pruning needed for AC
    for(int i=0;i<n;i++)
        if(c[i]<=maxc){
            if(used[i]) continue;
            if(c[i]==lasc) continue;
            for(int j=id;j<id+c[i];j++)
                h[j]+=c[i];
            used[i]=1;
            lasc=c[i];
            dfs(k+1);
            for(int j=id;j<id+c[i];j++)
                h[j]-=c[i];
            used[i]=0;
        }
    
}
int main(){
    int t;
    cin>>t;
    while(t){
        t--;
        cin>>s>>n;
        done=0;
        memset(h,0,sizeof(h));
        memset(used,0,sizeof(used));
        for(int i=0;i<n;i++)
            cin >> c[i];
        sort(c,c+n,greater<int>());
        dfs(0);
        if(done) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}