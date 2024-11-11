//b2075
#include <iostream>
using namespace std;
int main(){
	int a,b,s;
	cin>>a>>b;
	s=1;
	for (int i=1;i<=b;i++){
		s*=a;
	    if (s>=1000) s%=1000;	
	}
	if (s==0) cout<<"000"<<endl;
	  else if (s<10) cout<<"00"<<s<<endl;
	  else if (s<100) cout<<"0"<<s<<endl;
	  else cout<<s<<endl;
	return 0;
}
