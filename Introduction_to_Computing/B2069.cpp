#include <iostream>
using namespace std;
int main(){
	int i,n,a[32];
	float s=0;
	cin>>n;
	a[1]=1;
	a[2]=2;
	for (i=2;i<=n+1;i++){
		a[i+1]=a[i]+a[i-1];
		s+=1.0*a[i]/a[i-1];
	}
	printf("%.4f",s);
	return 0;
}
