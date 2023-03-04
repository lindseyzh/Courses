//Palindromic Sequence
#include<iostream>
#include<vector>
using namespace std;
long long dp[300][300]{0},ans[300]{0};        
int main(){
    int n,num=0,maxn=0;
    vector<int> nn;
    while(cin>>n){
        if(n==0) break;
        nn.push_back(n);
        maxn=max(maxn,n);
        num++;
    }

    n=maxn;
        dp[1][1]=dp[2][1]=1;
        dp[2][2]=1;
        ans[1]=1;
        for(int i=2;i<=n;i++){
            dp[i][i]=1;
            if(i%2==0) dp[i][i/2]=1;
            for(int j=1;j<=i/2;j++){
                for(int k=j;k<=i-2*j;k++)
                    dp[i][j]+=dp[i-2*j][k];
            }
            for(int j=1;j<=i;j++)
                ans[i]+=dp[i][j];
        }

    for(int i=0;i<num;i++)
        cout << nn[i] << " " <<ans[nn[i]] <<endl;

    return 0;
}