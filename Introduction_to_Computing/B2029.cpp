#include <iostream>
#include <math.h>
using namespace std;
#define S 20000
#define PI 3.1416
int main(){
	int h,r,n;
	float v;
	cin>>h>>r;
	v=PI*r*r*h;
	n=ceil(S/v);
	cout<<n;
	
	return 0;
}
