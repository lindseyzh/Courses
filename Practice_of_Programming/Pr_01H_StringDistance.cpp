
//POJ 4007
#include<bits/stdc++.h>
using namespace std;
int dp[1002][1002];
//note: initialize of array shouldn't be put in "while(){...}"
//or CE
int main(){
    int o;
    cin>>o;
    while(o){
        o--;
        string a,b;
        cin>>a>>b;
        int la=a.size();
        int lb=b.size();

        //initialize
        for(int i=0;i<lb;i++)
            if(b[i]!=a[0]) dp[0][i]=i+1;
            else{
                for(int j=i;j<lb;j++)
                    dp[0][j]=j;
                break;
            }
        for(int i=0;i<la;i++)
            if(a[i]!=b[0]) dp[i][0]=i+1;
            else{
                for(int j=i;j<la;j++)
                    dp[j][0]=j;
                break;
            }

        //dp
        for(int i=1;i<la;i++){
            for(int j=1;j<lb;j++){
                if(a[i]==b[j]) dp[i][j]=dp[i-1][j-1];
                else {
                    dp[i][j]=min(min(dp[i-1][j]+1,dp[i][j-1]+1),dp[i-1][j-1]+1);
                }
            }
        }
        cout << dp[la-1][lb-1] << endl;
    }
    return 0;
}