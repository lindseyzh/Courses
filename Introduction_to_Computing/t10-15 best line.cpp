#include<iostream>
using namespace std;
int n,m,w[202][202];
int firstline[202][202],first[202][202];
int dp[202][202];
int main(){
	int i,j,u,v;
	while(cin>>n>>m){
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>w[i][j];
	for(j=0;j<n;j++){
	first[j][0]=w[j][0];
	for(i=0;i<m;i++)
		first[j][i]=first[j][i-1]+w[j][i];
	}
	int best;
	for(i=0;i<m;i++){
		best=w[0][i];
		for(j=0;j<i;j++)
			best=max(best,first[0][i]-first[0][j]+w[0][j]);
		for(j=i+1;j<m;j++)
			best=max(best,first[0][j]-first[0][i]+w[0][i]);
		dp[0][i]=best;	
	}
	for(i=1;i<n;i++)
		for(j=0;j<m;j++){
			best=dp[i-1][j]+w[i][j];
			for(u=0;u<j;u++)
				best=max(best,dp[i-1][u]+first[i][j]-first[i][u]+w[i][u]);
			for(u=j+1;u<m;u++)
				best=max(best,dp[i-1][u]+first[i][u]-first[i][j]+w[i][j]);			
			dp[i][j]=best;
		}
	best=dp[n-1][0];
	for(i=1;i<m;i++)
		best=max(best,dp[n-1][i]);
	cout<<best<<endl;
	}
	return 0;
}
