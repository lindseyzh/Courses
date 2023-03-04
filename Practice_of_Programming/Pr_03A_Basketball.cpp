#include<iostream>
#include<cstring>
using namespace std;
char re[4][4];
int po[4]{0};
int unk[20][2],unkn=0;
int ans=100;
void dfs(int n){
    if(n==unkn){
        int wins=0;
        for(int i=1;i<4;i++)
            if(po[0]<po[i]) wins++;
        ans=min(ans,wins);
        return;
    }
    
    //dfs
    int i=unk[n][0],j=unk[n][1];
    po[i]++;
    dfs(n+1);
    po[i]--;
    po[j]++;
    dfs(n+1);
    po[j]--;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t){
        t--;
        ans=100;
        unkn=0;
        memset(po,0,sizeof(po));
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++){
                cin>>re[i][j];
                if(re[i][j]=='W') po[i]++;
                else if(re[i][j]=='?' && i<j){
                    unk[unkn][0]=i;
                    unk[unkn][1]=j;
                    unkn++;
                }    
            } 
        dfs(0);
    cout << ans+1 << endl;

    }
    return 0;
}