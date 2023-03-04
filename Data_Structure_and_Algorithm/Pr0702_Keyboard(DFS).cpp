#include<bits/stdc++.h>
using namespace std;
int n,k;
char bd[10][10];
bool taken[10]{0};
int num=0;
void dfs(int i, int k){
    if(k==0) {
        num++;
        return;
    }
    if(i==n) return;
    // if(n-i<k) return;//a small optimization
    for(int j=0;j<n;j++){
        if(!taken[j] && bd[i][j]=='#'){
            taken[j]=1;
            dfs(i+1, k-1);
            taken[j]=0;
        }
    }
    dfs(i+1,k);
}
int main(){
    while(cin>>n>>k){
        if(n==-1) return 0;
        num=0;
        memset(taken,0,sizeof(taken));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>bd[i][j];
        dfs(0, k);
        cout << num << endl;
    }

    return 0;
}