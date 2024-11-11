#include <iostream>
using namespace std;
int main(){
	long long a,b,dr,nb;
	cin>>a>>b;
	long long n=0;//total numbers
	while(b>=a){
		nb=b/a;
		n+=nb*a;
		b%=a;
		b+=nb;
	}
	n+=b;
	cout<<n<<endl;
	return 0;
}
