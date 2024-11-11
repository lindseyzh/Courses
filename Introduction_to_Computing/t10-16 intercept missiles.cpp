#include<iostream>
using namespace std;
int h[26],k,dp[26];
int main(){
	cin>>k;
	int i,j;
	for(i=0;i<k;i++)
		cin>>h[i];
	dp[k-1]=1;
	int thisl,maxdp=1;
	for(i=k-2;i>=0;i--){
		thisl=1;
		for(j=i+1;j<=k-1;j++)
			if(h[j]<=h[i]){
				thisl=max(thisl,dp[j]+1);
			}
		dp[i]=thisl;
		maxdp=max(maxdp,dp[i]);
	}
	cout<<maxdp<<endl;
	
	return 0;
}
