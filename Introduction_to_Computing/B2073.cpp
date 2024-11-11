#include <iostream>
using namespace std;
int main(){
	int a,b,n,i,v;
	cin>>a>>b>>n;
	for (i=1;i<=n;i++){
		a=a%b;
		a*=10;
	}
	v=a/b;
	printf("%d",v);
	return 0;
}
