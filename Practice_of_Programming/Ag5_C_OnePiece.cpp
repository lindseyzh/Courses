#include<iostream>
#include<limits.h>
using namespace std;
int n,t[20][20]{0};
int bestt=INT_MAX;
int mint=INT_MAX;
bool cs[20]{0};
void dfs(int k,int las,int ts){
    if(k==n-1){
        bestt=min(bestt,ts);
        return;
    }
    if(ts+(n-1-k)*mint>=bestt) return;
    for(int i=1;i<n;i++){
        if(cs[i]) continue;
        if(i==n-1 && k!=n-2) continue;
        if(ts+t[las][i]>=bestt) continue;
        cs[i]=1;
        dfs(k+1,i,ts+t[las][i]);
        cs[i]=0;
    }
    return;
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            cin>>t[i][j];
            if(t[i][j]!=0) 
                mint=min(mint,t[i][j]);
            }
    cs[0]=1;
    dfs(0,0,0);
    cout << bestt << endl;
    return 0;
}
