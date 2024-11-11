#include<iostream>
using namespace std;
int a[102][102],dp[102][102],h;
int main(){
	cin>>h;
	int i,j;
	for(i=1;i<=h;i++)
		for(j=1;j<=i;j++)
			cin>>a[i][j];
	for(i=1;i<=h;i++)
		dp[h][i]=a[h][i];
	for(i=h-1;i>=1;i--)
		for(j=1;j<=i;j++){
			dp[i][j]=a[i][j]+max(dp[i+1][j],dp[i+1][j+1]);
		}
	cout<<dp[1][1]<<endl;
	return 0;
}
