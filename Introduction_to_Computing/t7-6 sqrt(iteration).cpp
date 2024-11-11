#include<iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double sq(double);
double a;
int main(){
	cin>>a;
	cout<<fixed<<setprecision(7)<<sq(1)<<endl;
	return 0;
}
double sq(double v){
	double vv=(v+a/v)/2;
	if(abs(vv-v)<=1e-5) return vv;
	return sq(vv);
}
