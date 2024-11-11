#include <iostream>
using namespace std;
int main(){
	int i,n,a;
	long s;
	double v;
	cin>>n;
	s=0;
	for (i=1;i<=n;i++){
		scanf("%d",&a);
		s+=a;
	}
	v=1.0*s/n;
	printf("%d %.5f",s,v);
	return 0;
}
