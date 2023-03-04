#include<iostream>
#include<cstring>
using namespace std;
char bd[10][10];
bool row[10];
int n;
int dfs(int c,int k){
    if(k==0) return 1;
    if(n-c<k) return 0;
    int ans=0;
    for(int i=0;i<n;i++)
        if(bd[c][i]=='#' && !row[i]){
            row[i]=1;
            ans+=dfs(c+1,k-1);
            row[i]=0;
        }
    ans+=dfs(c+1,k);
    return ans;
}
int main(){
    int k;
    while(cin>>n>>k){
        if(n==-1 && k==-1) return 0;
        memset(row,0,sizeof(row));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>bd[i][j];
        cout << dfs(0,k) << endl;
    }


    return 0;
}