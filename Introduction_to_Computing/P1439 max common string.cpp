#include<iostream>
#include<cstring>
using namespace std;
int dp[102][102]{0};
int main(){
	int a[102],b[102];
	int n,i,j,l1,l2;
	cin>>n;
	l1=l2=n;
	for(i=0;i<l1;i++)
		cin>>a[i];
	for(j=0;j<l2;j++)
		cin>>b[j];
	for(i=0;i<l1;i++)
		if(a[i]==b[0]) break;
	for(i=i;i<l1;i++)
		dp[i][0]=1;
	for(j=0;j<l2;j++)
		if(b[j]==a[0]) break;
	for(j=j;j<l2;j++)
		dp[0][j]=1;	
	for(i=1;i<l1;i++)
		for(j=1;j<l2;j++){
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			if(a[i]==b[j]) 
				dp[i][j]=max(dp[i-1][j-1]+1,dp[i][j]);
		}
	cout<<dp[l1-1][l2-1]<<endl;
	
	return 0;
}
