#include<bits/stdc++.h>
using namespace std;
int a[220],n;//If RE, consider long long
char op[220];
double dp[220],p[220];
inline int opr(char opr,int a,int b){
    switch(opr){
        case '&':
            return a&b;
        case '|':
            return a|b;
        case '^':
            return a^b;
    }
    return 0;
}
int ans;
float dfs(int k){
    if(k==n) return a[n];

}
int main(){
    while(cin>>n){
        for(int i=0;i<=n;i++)
            cin>>a[i];
        for(int i=1;i<=n;i++)
            cin>>op[i];
        for(int i=1;i<=n;i++)
            cin>>p[i];
        ans=0;
        dfs(0);
        cout << ans << endl;
    }
    return 0;
}