#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	double x,a,e;
	cin>>x>>a>>e;
	n=int(ceil(log(abs(x/e))/log(a)));
	if (x==0) n=1;
	if (x/pow(a,n)>=e) n+=1;
	cout<<n-1<<endl;
	return 0;
}
