#include<bits/stdc++.h>
using namespace std;
int n,a[24];
int dfs(int k,int s){
    if(s==0){
        return 1;
    }
    if(k==0) return 0;
    int ans=0;
    for(int i=k;i>0;i--){
        if(a[i]<=s) 
            ans+=dfs(i-1,s-a[i]);
    }
    return ans;
}
int main(){
    int t;
    cin>>n>>t;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cout << dfs(n,t) << endl;

    return 0;
}