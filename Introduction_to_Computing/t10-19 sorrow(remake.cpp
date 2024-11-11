#include<iostream>
#include<cstring>
using namespace std;
int s[5][5],d,l1,l2;
char A[1002],B[1002];
int a[1002],b[1002];
void trans(char*,int*,int);
int dp[1002][1002];
int main(){
	int m,n,i,j;
	cin>>m;
	for(int o=1;o<=m;o++){
		printf("Case #%d\n",o);
		for(i=0;i<4;i++)
			for(j=0;j<4;j++)
				cin>>s[i][j];
		cin>>d>>n;
		getchar();
		for(int u=0;u<n;u++){
		cin.getline(A,1002);
		cin.getline(B,1002);
		l1=strlen(A);
		l2=strlen(B);
		trans(A,a,l1);
		trans(B,b,l2);
		dp[0][0]=0;
		for(i=1;i<=l1;i++)
			dp[i][0]=i*d;
		for(j=1;j<=l2;j++)
			dp[0][j]=j*d;
		for(i=1;i<=l1;i++)
			for(j=1;j<=l2;j++){
				dp[i][j]=max(dp[i][j-1]+d,dp[i-1][j]+d);
				dp[i][j]=max(dp[i][j],dp[i-1][j-1]+s[a[i]][b[j]]);
			}
		cout<<dp[l1][l2]<<endl;
		}
	}
	
	return 0;
}
void trans(char*s,int*num,int l){
	for(int i=1;i<=l;i++)
		switch(s[i-1]){
			case 'A':
				num[i]=0;
				break;
			case 'G':
				num[i]=1;
				break;
			case 'C':
				num[i]=2;
				break;
			case 'T':
				num[i]=3;
				break;
		}
	return;
}
/*
1
10 -1 -3 -4
-1 7 -5	 -3
-3 -5 9 	0
-4 -3 0 	8
-5
2
AGACTAGTTAC
CGAGACGT
A
A
*/
