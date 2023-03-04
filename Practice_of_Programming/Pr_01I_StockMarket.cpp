#include<iostream>
#include<cstring>
using namespace std;
int n,p[100002];
int minn[100002],maxn[100002];
int dp0[100002],dpn[100002];
int main(){
    int t;
    cin>>t;
    while(t){
        t--;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>p[i];
            
        //for dp[0][i]
        minn[0]=p[0];
        dp0[0]=0;
        for(int j=1;j<n;j++){
            if(p[j]>minn[j-1]) 
                dp0[j]=max(p[j]-minn[j-1],dp0[j-1]);
            else
                dp0[j]=dp0[j-1];
            minn[j]=min(minn[j-1],p[j]);
        }

        //for dp[i][n]
        maxn[n-1]=p[n-1];
        dpn[n-1]=0;
        for(int j=n-2;j>=0;j--){
            if(p[j]<maxn[j+1]) 
                dpn[j]=max(maxn[j+1]-p[j],dpn[j+1]);
            else
                dpn[j]=dpn[j+1];
            maxn[j]=max(maxn[j+1],p[j]);
        }
        
        
        int ans=0;
        for(int i=0;i<n;i++)
            ans=max(ans,dp0[i]+dpn[i]);
        cout << ans << endl;
    }
    return 0;
}


//ver 2: TLE
/*
#include<iostream>
#include<cstring>
using namespace std;
int n,p[100002];
int dp[100002],minn[100002];
int dp0[100002],dpn[100002];
int main(){
    int t;
    cin>>t;
    while(t){
        t--;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>p[i];
            
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++){
            minn[i]=p[i];
            dp[i]=0;
            for(int j=i+1;j<n;j++){
                if(p[j]>minn[j-1]) 
                    dp[j]=max(p[j]-minn[j-1],dp[j-1]);
                else
                    dp[j]=dp[j-1];
                minn[j]=min(minn[j-1],p[j]);
            }
            if(i==0) memcpy(dp0,dp,sizeof(dp));
            dpn[i]=dp[n-1];
        }
        int ans=0;
        for(int i=0;i<n;i++)
            ans=max(ans,dp0[i]+dpn[i]);
        cout << ans << endl;
    }
    return 0;
}
*/


//ver 1: MLE(RE)
/*
#include<iostream>
#include<cstring>
using namespace std;
int n,p[1002];
int dp[102][102],minn[102][102];
int main(){
    int t;
    cin>>t;
    while(t){
        t--;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>p[i];
            minn[i][i]=p[i];
            }
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++){
                if(p[j]>minn[i][j-1]) 
                    dp[i][j]=max(p[j]-minn[i][j-1],dp[i][j-1]);
                else
                    dp[i][j]=dp[i][j-1];
                minn[i][j]=min(minn[i][j-1],p[j]);
            }
        int ans=0;
        for(int i=0;i<n;i++)
            ans=max(ans,dp[0][i]+dp[i][n-1]);
        cout << ans << endl;
    }
    return 0;
}
*/

