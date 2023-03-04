//Jun.20_02
#include<bits/stdc++.h>
using namespace std;
int lf,rt,n;
stack<int> s;
bool ans[22]{0};
string c(")(");
void dfs(int k){
    if(k==2*n-1){
        for(int i=0;i<2*n;i++)
            printf("%c",c[ans[i]]);
        printf("\n");
        return;
    }
    if(lf<n){
        ans[k]=1;
        lf++;
        dfs(k+1);
        lf--;
    }
    if(rt<lf){
        ans[k]=0;
        rt++;
        dfs(k+1);
        rt--;
    }
}
int main(){
    cin>>n;
    ans[0]=1;
    lf=1,rt=0;
    dfs(1);
    return 0;
}