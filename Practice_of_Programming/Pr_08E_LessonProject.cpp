//Jun.23_02
//if use dp[10010][10010],MLE
//CE in my computer, but AC in POJ
//Local compiler gets things wrong sometimes
#include<bits/stdc++.h>
using namespace std;
struct prj{
    int p,d;
    bool operator<(prj b){
        return d<b.d;
    }
};
prj pj[10010];
int n;
int dp[3][10010]{0};
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>pj[i].p>>pj[i].d;
    }
    sort(pj,pj+n);
    for(int i=0;i<n;i++){
        if(i==0) dp[1][0]=pj[0].p;
        else dp[1][i]=max(dp[1][i-1],pj[i].p);    
    }
    int ans=0;
    int ii,li;
    for(int i=2;i<=10000;i++){
        ii=i%2;
        li=1-ii;
        dp[ii][0]=pj[0].p;
        ans=max(ans,dp[ii][0]);
        for(int j=1;j<n;j++){
            if(pj[j].d>=i)
                dp[ii][j]=max(dp[ii][j-1],dp[li][j-1]+pj[j].p);
            else dp[ii][j]=dp[ii][j-1];
            ans=max(ans,dp[ii][j]);    
        }
    }
    cout << ans << endl;
    return 0;
}