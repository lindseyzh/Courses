#include<bits/stdc++.h>
using namespace std;
#define INF 100000000
struct nd{
    int inin, v;
    nd(){}
    nd(int ii,int vv):inin(ii),v(vv){}
    bool operator<(nd b){
        return inin<b.inin;
    }
};
vector<nd> vn;
int n,m,a[1010];
bool cs[1010]{0};
bool op[1010]{0};
int ans=INF;
long long int num=0;
void dfs(int c,int k){
    if(c>ans) return;
    if(c==ans){
        num++;
        return;
    }
    if( c<ans && c>=m){
        num=1;
        ans=c;
        memcpy(op,cs,sizeof(cs));
        return;
    }
    if(k==n) return;
    for(int i=k;i<n;i++){
        if(a[i]+c>ans) break;
        if(cs[i]) continue;
        cs[i]=1;
        dfs(c+a[i],i+1);
        cs[i]=0;
    }
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        vn.push_back(nd(i,a[i]));
    }
    sort(vn.begin(),vn.end());
    for(int i=0;i<n;i++)
        a[i]=vn[i].v;
    dfs(0,0);

//物品序号要+1
    cout <<ans << " " <<num << endl;
    if(num==1) {
        vector<int> ans;
        for(int i=0;i<n;i++)
            if(op[i]) ans.push_back(vn[i].inin+1);
        sort(ans.begin(),ans.end());
        cout << ans[0];
        int ll=ans.size();
        for(int i=1;i <ll;i++)
            cout << " " << ans[i];
        
        cout << endl;
    }
    return 0;
}