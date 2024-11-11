#include <iostream>
using namespace std;
int main(){
	int n;
	double s=1,a=1;
	float x;
	cin>>x>>n;
	for (int i=1;i<=n;i++){
		a*=x;
		s+=a;
	}
	printf("%.2lf",s);
	return 0;
}
