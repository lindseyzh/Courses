//B2071
#include <iostream>
using namespace std;
int main(){
	int i,a,b,c,m;
	cin>>a>>b>>c;
	m=min(a,min(b,c));
	for (i=2;i<=m;i++){
		if (a%i==b%i&&b%i==c%i) {
			printf("%d",i);
			break;
		}
	}
	return 0;
}
