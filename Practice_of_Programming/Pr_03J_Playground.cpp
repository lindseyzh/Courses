//June 15-02
//reference:https://blog.csdn.net/w112348/article/details/106789722
#include<bits/stdc++.h>
using namespace std;
#define INF 1000000
int m,n,s;
int h[110],c[110],t[110];
bool lmt[110]{0};
int dp[1100][25000]{0};//dp[cost][time]
int entr[110]{0};
int main(){
    string op;
    cin>>m>>n>>s;
    for(int i=0;i<n;i++){
        cin>>h[i]>>c[i]>>t[i]>>op;
        if(op[0]=='l') lmt[i]=1;
    }
    //initialization
    int maxt=m;
    for(int i=1;i<=m;i++){
        if(i%3==0){
            if(200*i/3<=s) entr[i]=200*i/3;
            else {
                maxt=i-1;
                break;
            }
        }
        else if(i%3==2){
            if(200*(i/3)+150<=s) entr[i]=200*(i/3)+150;
            else {
                maxt=i-1;
                break;
            }
        }
        else{
            if(200*(i/3)+100<=s) entr[i]=200*(i/3)+100;
            else {
                maxt=i-1;
                break;
            }
        }
    }

    int hrs=maxt*24;

    for(int u=0;u<n;u++){
    //pay attention to the difference
        if(lmt[u]){//0-1 bag,
            for(int i=s-150;i>=c[u];i--)
                for(int j=hrs;j>=t[u];j--)
                    dp[i][j]=max(dp[i][j],dp[i-c[u]][j-t[u]]+h[u]);
        }
        else{//complete bag
            for(int i=c[u];i<=s-150;i++)
                for(int j=t[u];j<=hrs;j++)
                    dp[i][j]=max(dp[i][j],dp[i-c[u]][j-t[u]]+h[u]);
        }
    }

    int ans=0;
    for(int i=1;i<=maxt;i++) 
        ans=max(ans,dp[s-entr[i]][24*i]);
    cout << ans << endl;
    return 0;
}