#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double x1,x2,x3,y1,y2,y3,s;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	s=0.5*(x1*y2+x2*y3+x3*y1-x2*y1-x3*y2-x1*y3);
	cout<<fixed<<setprecision(2)<<s<<endl;
	
	return 0;
}
