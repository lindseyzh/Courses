#include<iostream>
using namespace std;
bool a[102][102]{0};
int n,m,dp[102][102]{0};
int main(){
	cin>>n>>m;
	int i,j;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			cin>>a[i][j];
	dp[1][1]=a[1][1];
	for(i=2;i<=n;i++)
		dp[i][1]=a[i][1];
	for(i=2;i<=m;i++)
		dp[1][i]=a[1][i];
	int maxdp=0;
	for(i=2;i<=n;i++)
		for(j=2;j<=m;j++)
			if(a[i][j]){
				dp[i][j]=min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]))+1;
				maxdp=max(dp[i][j],maxdp);
			}
	cout<<maxdp<<endl;
	return 0;
}
