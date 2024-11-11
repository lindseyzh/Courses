#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,i,p;
	double x,y,t;
	cin>>n;
	t=0;
	for (i=1;i<=n;i++){
		cin>>x>>y>>p;
		t=t+1.5*p+2*sqrt(x*x+y*y)/50;
	}
	printf("%ld",int(ceil(t)));
	return 0;
}
