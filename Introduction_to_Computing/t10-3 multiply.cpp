#include<iostream>
#include<cstring>
using namespace std;
int dp[12][12]{0};
int num[12][12]{0};
int main(){
	int k,a[12],i,j,u;
	char s[12];
	cin>>s>>k;
	int l=strlen(s);
	for(i=0;i<l;i++)
		a[i]=s[i]-'0';
	num[0][0]=dp[0][0]=a[0];
	for(i=1;i<l;i++)
		dp[i][0]=num[0][i]=dp[i-1][0]*10+a[i];
	for(i=1;i<l;i++){
		num[i][i]=a[i];
		for(j=i+1;j<l;j++)
			num[i][j]=num[i][j-1]*10+a[j];
	}	
//	cout<<'/'<<endl;
	for(j=1;j<=k;j++)
		for(i=j;i<l;i++){
			int thisdp=0;
			for(u=j-1;u<i;u++){
				thisdp=max(thisdp,dp[u][j-1]*num[u+1][i]);	
			}
			dp[i][j]=thisdp;
		}
	
	cout<<dp[l-1][k]<<endl;
	
	return 0;
}
