#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	double a[100],b[100],c[100],x1,x2,x11,del;
	int n,i;
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>a[i]>>b[i]>>c[i];
	}
	cout<<fixed<<setprecision(5);
	for (i=1;i<=n;i++){
		del=b[i]*b[i]-4*a[i]*c[i];
	if (del>0) {
		x1=0.5*(-b[i]+sqrt(del))/a[i];
		x2=0.5*(-b[i]-sqrt(del))/a[i];
		if (x1==0) x1=abs(x1);
		if (x2==0) x2=abs(x2);
		printf("x1=%.5f;x2=%.5f\n",x1,x2);
	  }
	if (del==0) printf("x1=x2=%.5f\n",-0.5*b[i]/a[i]);
	if (del<0) {
		x1=-0.5*b[i]/a[i];
		x11=abs(0.5*sqrt(-del)/a[i]);
	    if (x1==0) x1=abs(x1);
		printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",x1,x11,x1,x11);
	  }
	}
	return 0;
}
