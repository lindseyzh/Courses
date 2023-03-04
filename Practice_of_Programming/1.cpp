#include<bits/stdc++.h>
using namespace std;
int n,h[110],l[110]{0};
int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>h[i];
    int ans=0;
    for(int i=0;i<n;i++){
        l[i]=1;
        for(int j=1;j<n;j++){
            int jj=(i+j)%n;
            int lasj=(i+j-1)%n;
            if(h[jj]<h[lasj]) l[i]++;
            else break;
        }
        ans=max(ans,l[i]);
    }
    cout << ans-1 << endl;
    return 0;
}