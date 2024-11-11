#include <iostream>
using namespace std;
int main(){
	int n,i;
	double s=0;
	cin>>n;
	for (i=1;i<=n;i++){
		s+=i%2==0?-1.0/i:1.0/i;
	}
	printf("%.4lf",s);
	return 0;
}
