//t10-13
#include<iostream>
using namespace std;
int n,a[102];
int dp[102][102];
int stonenum[102][102]{0};//stonenum between pile i and j
int findnum(int lf,int rt){
	if(stonenum[lf][rt]>0) 
		return stonenum[lf][rt];
	int num=0;
	for(int i=lf;i<=rt;i++)
		num+=a[i];
	stonenum[lf][rt]=num;
	return num;
}
int main(){
	cin>>n;
	int i,j;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n-1;i++)
		dp[i][i+1]=a[i]+a[i+1];
	int r1,r2,r3;
	//dp[i][i+l]:best score from stonepile i to stonepile i+l
	int mindp;
	for(int l=2;l<n;l++)
		for(i=0;i<n-l;i++){
			r1=dp[i][i+l-1]+a[i+l]+findnum(i,i+l-1);
			r2=dp[i+1][i+l]+a[i]+findnum(i+1,i+l);
			mindp=min(r1,r2);
			for(j=1;j<l-1;j++){
				r3=dp[i][i+j]+dp[i+j+1][i+l]+findnum(i,i+j)+findnum(i+j+1,i+l);
				mindp=min(r3,mindp);
			}
			dp[i][i+l]=mindp;
		}
	cout<<dp[0][n-1]<<endl;
	
	return 0;
}
