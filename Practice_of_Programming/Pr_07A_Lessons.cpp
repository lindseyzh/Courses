#include<bits/stdc++.h>
using namespace std;
int n,a[1010],b[1010];
inline int curv(int i,int j){
    int ans1=min(b[i]-a[j],b[j]-a[i]);
    int ans2=min(b[i]-a[i],b[j]-a[j]);
    int ans=min(ans1,ans2);
    return max(0,ans+1);
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
    int ans=0;
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++){
            ans=max(ans,curv(i,j));
        }
    cout << ans << endl;
    return 0;
}