#include<iostream>
#include<cstring>
using namespace std;
char s1[102],s2[102];
int dp[102][102];
int l1,l2;
int main(){
	cin.getline(s1,102);
	cin.getline(s2,102);
	l1=strlen(s1);
	l2=strlen(s2);
	int i,j,k;
	i=0;
	while(i<l1){
		if(s1[i]==s2[0]) break;
		dp[i][0]=0;
		i++;
	}
	if(i<l1){//find a matched char in s1
		for(j=i;j<l1;j++)
			dp[j][0]=1;
	}
	i=0;
		while(i<l2){
			if(s2[i]==s1[0]) break;
			dp[0][i]=0;
			i++;
		}
		if(i<l2){//find a matched char in s2
			for(j=i;j<l2;j++)
				dp[0][j]=1;
		}
	int r1,r2,u,v;
	for(i=1;i<l1;i++)
		for(j=1;j<l2;j++){
			r1=r2=0;
			k=i;
			while(k>=0){
				if(s1[k]==s2[j]) break;
				k--;
			}
			if(k>0){
				r1=1+dp[k-1][j-1];
			}
			else if(k==0)
				r1=1;
			k=j;
			while(k>=0){
				if(s2[k]==s1[i]) break;
				k--;
			}
			if(k>0){
				r2=1+dp[i-1][k-1];
			}
			else if(k==0)
				r2=1;
			dp[i][j]=max(max(dp[i-1][j],dp[i][j-1]),max(r1,r2));
		}
	cout<<dp[l1-1][l2-1]<<endl;
	
	return 0;
}
