#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int dp[401][400001]{0};//dp[i][j]:i times,j eggs
int n,m;
int main(){
	int i,j;
	for(i=1;i<400001;i++)
		dp[1][i]=1;
	for(i=1;i<400;i++)
		dp[i][1]=i;
	while(cin>>n>>m){
		if(n==0&&m==0) return 0;
		if(n==1) {
			cout<<1<<endl;
			continue;
		}
		if(m==1) {
			cout<<n<<endl;
			continue;
		}
		int t=(int)ceil(log(1.0*n+1)/log(2.0));
		if(m>=t) {
			cout<<t<<endl;
			continue;
		}
		i=2;
		while(1){
			for(j=2;j<=m;j++)
				dp[i][j]=dp[i-1][j-1]+dp[i-1][j]+1;
			if(dp[i][m]>=n){
				cout<<i<<endl;
				break;
			}		
			i++;
		}
		
	}
	
	
	return 0;
}


/*
//solution 1:timeout

#include<iostream>
#include<cmath>
using namespace std;
long long dp[4005][4005]{0},n,m;
#define INF 10000000;
int main(){
	long long i,j,u;
	long long thisdp;
	while(cin>>n>>m){
		if(n==0&&m==0) return 0;
		for(i=1;i<=n;i++)
			dp[1][i]=i;//one egg,i floors
		for(j=1;j<=n;j++)
			dp[j][1]=1;
		
		for(i=1;i<=n;i++)
			for(j=2;j<=m;j++){
				if(pow(2,j)>=i){
					thisdp=ceil(log2(i+1));
					for(u=j;u<=m;u++)
						dp[u][i]=thisdp;
					break;
				}
				
				thisdp=INF;
				for(u=1;u<=i;u++)
					thisdp=min(thisdp,1+max(dp[j-1][u-1],dp[j][i-u]));
				dp[j][i]=thisdp;
			}
		cout<<dp[m][n]<<endl;
		
	}
	
	
	
	return 0;
}
*/
