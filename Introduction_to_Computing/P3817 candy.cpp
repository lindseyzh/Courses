#include<iostream>
using namespace std;
int main(){
	int n,x,a[1000],i;
	cin>>n>>x;
	for(i=0;i<n;i++)
		cin>>a[i];
	int eat=0;
	if(a[0]>x) {
		eat+=a[0]-x;
		a[0]=x;
	}
	for(i=1;i<n;i++){
		if(a[i]+a[i-1]>x){
			eat+=a[i-1]+a[i]-x;
			a[i]-=(a[i-1]+a[i]-x);
		}
	}
	cout<<eat<<endl;
	return 0;
}
