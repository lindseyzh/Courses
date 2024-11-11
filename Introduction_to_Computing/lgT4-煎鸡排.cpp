#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,k,t=0;//n:dishes;k:the maximal dish number a pan can cook in a time
	int r;
	cin>>n>>k;
	if (k>=n) t=2;
	    else{
			t+=n/k;
			r=n+n%k;
			t+=(int)ceil(1.0*r/k);
		}
	cout<<t<<endl;
	return 0;
}
