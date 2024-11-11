#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	double a,err;
	while(cin>>a){
		double x1=1,x2;
		int n=0;//the operation time
		do{
			x2=0.5*(x1+a/x1);
			n++;
			err=abs(x2-x1);
			x1=x2;
		}while(err>1e-6);
		cout<<n<<' '<<setprecision(2)<<setiosflags(ios::fixed)<<x1<<endl;
	}
	return 0;
}
