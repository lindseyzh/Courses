#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	double a,b,c,x1,x2,t,del;
	cin>>a>>b>>c;
	del=b*b-4.0*a*c;
	cout<<fixed<<setprecision(5);
	if (del>0) {
		x1=0.5*(-b-sqrt(del))/a;
		x2=0.5*(-b+sqrt(del))/a;
		if (x1<x2) cout<<"x1="<<x1<<";x2="<<x2<<endl;
		  else cout<<"x1="<<x2<<";x2="<<x1<<endl;
		  }
	  else if (del==0) printf("x1=x2=%0.5lf",-0.5*b/a);
		else cout<<"No answer!"<<endl;
	return 0;
}
