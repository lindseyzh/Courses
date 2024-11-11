#include <iostream>
using namespace std;
int a[12]{0};
int tryit(int,int);
void qusort(int,int);
int main(){
	int i,n,t;
	cin>>n>>t;
	for(i=1;i<=n;i++)
		cin>>a[i];	
	a[n+1]=0;
	cout<<tryit(t,n+1)<<endl;
}
int tryit(int t,int n){//n:the most expensive one
	int sum,msum=0;
	if(n==1&&t>a[1]) return 0;//fail
	if(a[n]>=t) return a[n];//a possible solution
	for(int i=n-1;i>=1;i--){
		t-=a[n];
		sum=tryit(t,i);
		if(sum>0) {
			if(msum==0) msum=sum;
			else msum=min(sum,msum);
		}
		t+=a[n];
	}
	if(msum==0) return 0;
	return msum+a[n];
}
void qusort(int lf,int rt){
	return;
}
