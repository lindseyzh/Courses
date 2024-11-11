#include<iostream>
using namespace std;
int fac[102],ss[102];
int main(){
	int s,i,j;
	cin>>s;
	fac[2]=2;
	ss[2]=2;
	for(i=3;i<s;i++){
		fac[i]=fac[i-1]+i;
		ss[i]=ss[i-1]*i;
		if(fac[i]>s) break;
	}
	int b=i-1;
	int k=s-i*(i-1)/2+1;
	if(k==i-1){
		cout<<'3';
		for(j=4;j<=b;j++)
			cout<<' '<<j;
		cout<<' '<<b+2<<endl;
		return 0;
	}
	if(k==b-1){
		cout<<'3';
		for(j=4;j<=b+1;j++)
			cout<<' '<<j;
		cout<<endl;
		return 0;
	}
	if(k==0){
		cout<<'2';
		for(j=3;j<=b;j++)
			cout<<' '<<j;
		cout<<endl;
		return 0;
	}
	cout<<'2';
	for(j=3;j<=b-k;j++)
		cout<<' '<<j;;
	for(j=b-k+2;j<=b+1;j++)
		cout<<' '<<j;
	cout<<endl;
	return 0;
}

/*
#include<iostream>
using namespace std;
int a[100],dp[1002][1002]{0};
int main(){
	int s,i,j,u,thisdp;
	cin>>s;
	int lb=0;
	while(lb*(lb+1)/2<s) {
		dp[s][lb]=1;//impossible
		lb++;
	}
	for(i=1;i<=s;i++)
		for(j=1;j<=i;j++){
			while(j*(j+1)/2<i) {
				dp[i][j]=1;
				j++;
			}
			thisdp=dp[i][j-1];
			for(u=1;u<min(j,(i+1)/2);u++)
				thisdp=max(thisdp,u*dp[i-u][u-1]);
			dp[i][j]=thisdp;
		}
	cout<<dp[s][s]<<endl;
	
	
	
	return 0;
}
*/

/*
//solution 2:recurrence(timeout)
#include<iostream>
#include<cmath>
using namespace std;
int divideit[1002][1002];
bool used[1002]{0},bestc[1002];
int fac[100];
void divide(int,int);
int num,mul,maxmul=1;
int ss;
int main(){
	cin>>ss;
	mul=1;
	int maxfac=(int)sqrt(4*ss);
	fac[0]=1;
	for(int i=1;i<=maxfac;i++){
		fac[i]=fac[i-1]*i;
	}
		
	divide(ss,maxfac);
//	cout<<maxmul<<endl;
	bool first=0;
	for(int i=1;i<ss;i++)
		if(bestc[i]){
			if(!first) {
				cout<<i;
				first=1;
			}
			else cout<<' '<<i;
		}
	return 0;
}
void divide(int s,int maxf){
	if(s<=1){
		if(mul>maxmul){
		maxmul=mul;
		num=0;
		for(int i=1;i<=ss;i++)
			bestc[i]=used[i];
		}
		return;
	}
	if(maxf>s) maxf=s;
	if(fac[maxf]*mul<=maxmul) return;
	for(int i=maxf;i>=2;i--){
		mul*=i;
		used[i]=1;
		divide(s-i,i-1);
		used[i]=0;
		mul/=i;
	}
	return;
}
*/
