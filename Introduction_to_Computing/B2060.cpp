#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int m,n,s,a,b;
	cin>>m>>n;
	a=int(ceil(m/17));
	b=int(floor(n/17));
	n=b-a+1;
	s=17*(a+b)*n/2;
	cout<<s<<endl;
	return 0;
}
/*
#include <iostream>
using namespace std;
int main(){
	int m,n,s,i;
	s=0;
	cin>>m>>n;
	for (i=m;i<=n;i++){
		if (i%17==0) s=s+i;
	}
	cout<<s<<endl;
	return 0;
}*/
