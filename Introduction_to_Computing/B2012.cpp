/*B2012*/
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a,b;
	float r;
	
	scanf("%d%d",&a,&b);
	r=100.0*b/a;
	cout<<fixed<<setprecision(3)<<r<<"%"<<endl;
	
	return 0;
}
