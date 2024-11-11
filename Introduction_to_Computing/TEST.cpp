#include <iostream>
#include <iomanip>
#include <cmath>
const double PI=3.141592653589793238;
using namespace std;
int main(){
	float a=3.1415926;
	float b;
	double c;
	cout<<fixed<<setprecision(3)<<setw(7)<<PI<<endl;
	b=float(sqrt(a));
	c=sqrt(a);
	return 0;
}
