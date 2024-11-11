#include <iostream>
using namespace std;
int main (){
	int n,m,i,t;
	cin>>n;
	m=0;
	for (i=1;i<=n;i++){
		cin>>t;
		if (t>m) m=t;
	}
	cout<<m<<endl;
	return 0;
}
