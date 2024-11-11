#include <iostream>
using namespace std;
int main(){
	int n,i;
	float a[100];
	double s,v;
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>a[i];
		s=s+a[i];
	}
	v=s/n;
	printf("%.4f",v);
	return 0;
}
