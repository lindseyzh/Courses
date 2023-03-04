//11.27-2
#include<bits/stdc++.h>
using namespace std;
inline void op(bool a){
    if(a) cout << "Yes" << endl;
    else cout << "No" << endl;
    return;
}
int main(){
    string a,b;
    while(cin>>a>>b){
        int la=a.size();
        int lb=b.size();
        if(la>lb) {
            op(0);
            continue;
        }
        int i=0,j=0;
        bool ok=0;
        while(1){
            if(a[i]==b[j]){
                i++;
                j++;
                if(i==la) {
                    ok=1;break;
                }
            }
            else {
                j++;
                if(j==lb) break;
            }
        }
        op(ok);
    }
    return 0;
}