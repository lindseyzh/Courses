#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,v,s=0;
	cin>>a;
	v=(int)floor(sqrt(1.0*v));
	for(int i=2;i<=v;i++){
		if (a%i==0) s+=i,printf("%d,",i);
	}
	printf("\n%d",s);
	return 0;
}
