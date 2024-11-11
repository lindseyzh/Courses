#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;
int main(){
	int a,b;
	float v,u,z,x,y;//v:the consuming speed;u:the growing speed
	cin>>x>>a>>y>>b;
	v=(b-a)/(a*b*(x-y));
	u=(b*y-a*x)/(a*b*(x-y));
	z=u/v;
	printf("%.2f",z);
		
	return 0;
	
}
