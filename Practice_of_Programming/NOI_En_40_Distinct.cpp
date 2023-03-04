//Jun.17_01
#include<bits/stdc++.h>
using namespace std;
    int n,a[10010];
    bool cs[10010]{0};
    bool cho[10010]{0};
int main(){
    cin>>n;
    bool fir=1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>0)
            if(!cs[a[i]]){
                cs[a[i]]=1;
                if(fir) {cout << a[i];fir=0;}
                else cout << ' ' << a[i];
            }
    }
    cout << endl;
    return 0;
}