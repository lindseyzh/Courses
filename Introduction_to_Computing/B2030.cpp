#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
	double x1,y1,x2,y2,l;
	cin>>x1>>y1>>x2>>y2;
	l=pow((pow(x1-x2,2)+pow(y1-y2,2)),0.5);
	cout<<fixed<<setprecision(3)<<l<<endl;
	return 0;
}
