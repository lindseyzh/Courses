//B2011
#include <stdio.h>
#include <iomanip>
#include <iostream>
using namespace std;
int main(){
	int a,b;
	double r;
	scanf("%d%d",&a,&b);
	r=1.0*a/b;
	cout<<fixed<<setprecision(9)<<r<<endl;
	
	return 0;
}
