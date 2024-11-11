#include <iostream>
using namespace std;
int main(){
	int n,i;
	double s=1,c=1;
	cin>>n;
	for (i=1;i<=n;i++){
		c*=1.0/i;
		s+=c;
	}
	printf("%.10lf",s);
	return 0;
}
