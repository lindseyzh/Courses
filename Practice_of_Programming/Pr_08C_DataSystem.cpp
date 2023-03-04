//Jun.22_04
#include<bits/stdc++.h>
using namespace std;
int a[1010],ddp[1010],dpp[1010],n;
int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    //left
    ddp[0]=1;
    for(int i=1;i<n;i++){
        ddp[i]=1;
        for(int j=0;j<i;j++)
            if(a[j]>=a[i])
                ddp[i]=max(ddp[i],ddp[j]+1);
    }
    //right
    dpp[n-1]=1;
    for(int i=n-2;i>=0;i--){
        dpp[i]=1;
        for(int j=n-1;j>i;j--)
            if(a[j]<=a[i])
                dpp[i]=max(dpp[i],dpp[j]+1);
    }
    for(int i=0;i<n;i++)
        ddp[i+1]=max(ddp[i],ddp[i+1]);
    for(int i=n-1;i>=0;i--)
        dpp[i-1]=max(dpp[i],dpp[i-1]);
    int ans=0;
    for(int i=0;i<n-1;i++){
        ans=max(ans,ddp[i]+dpp[i+1]);
    }
    cout << ans << endl;
    return 0;
}


//a TLE solution written in dizziness
/*
#include<bits/stdc++.h>
using namespace std;
int n,d[1010]{0};
int dp[1010][1010]{0};
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>d[i];
    }
    for(int i=0;i<n-1;i++)
        for(int u=i;u<n;u++){
            dp[i][u]=1;
            for(int j=u-1;j>=i;j--)
                if(d[u]<=d[j])
                    dp[i][u]=max(dp[i][u],dp[i][j]+1);
        }
    dp[n-1][n-1]=1;
    int ans=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            ans=max(ans,dp[0][i]+dp[i+1][j]);
        }
        ans=max(ans,dp[0][i+1]);
    }
    cout << ans << endl;
    return 0;
}
*/