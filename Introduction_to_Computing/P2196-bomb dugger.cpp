#include<iostream>
using namespace std;
int dp[22]{0},n;
bool line[22][22];
int bombnum[22]{0},lastone[22]{0};
int main(){
	cin>>n;
	int i,j;
	for(i=1;i<=n;i++)
		cin>>bombnum[i];
	for(i=1;i<n;i++)
		for(j=i+1;j<=n;j++){
			cin>>line[i][j];
			line[j][i]=line[i][j];
		}
	dp[1]=bombnum[1];
	lastone[1]=1;
	int maxdp=dp[1],beststart=1;
	for(i=2;i<=n;i++){
		dp[i]=0;
		lastone[i]=i;
		for(j=i-1;j>=1;j--)
			if(line[i][j]&&dp[j]>dp[i]){
				dp[i]=dp[j];
				lastone[i]=j;
			}
		dp[i]+=bombnum[i];	
		if(dp[i]>maxdp){
			maxdp=dp[i];
			beststart=i;
		}
	}
	int cur[22];
	int num=0;
	i=beststart;
	while(1){
		cur[num]=i;
		if(i==lastone[i]) break;
		i=lastone[i];
		num++;
	}
	cout<<cur[num];
	for(i=num-1;i>=0;i--)
		cout<<' '<<cur[i];
	cout<<endl;
	cout<<maxdp<<endl;
	
	return 0;
}
