#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long n,a,b,m;
	cin>>n;
	m=(int)sqrt(n);
	for(int i=2;i<=m;i++){
		if (n%i==0) {
			a=i;
			break;
		}
	}
	b=n/a;
	cout<<b<<endl;
	return 0;
}
