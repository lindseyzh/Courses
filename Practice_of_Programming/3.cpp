#include<bits/stdc++.h>
using namespace std;
string a,b;
bool dfs(int la,int lb){
    if(la==0 && lb==0) return 1;
    if(a[la-1]==b[lb-1])
        if(dfs(la-1,lb-1)) return 1;
    if(a[la-1]=='?' || b[lb-1]=='?')
        if(dfs(la-1,lb-1)) return 1;
    if(a[la-1]=='*'){
        for(int l=lb;l>=0;l--)
            if(dfs(la-1,l)) return 1;
    }
    if(b[lb-1]=='*'){
        for(int l=la;l>=0;l--)
            if(dfs(l,lb-1)) return 1;
    }
    return 0;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int la,lb;
        la=a.size();
        lb=b.size();
        if(dfs(la,lb)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}