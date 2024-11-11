//while and if
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int i,s,s1,n;
	i=0;
	s=0;
	cin>>n;
	s1=n*(n+1)/2;
	while (i++<=n-1){
		s=s+i;
	}
	cout<<s<<endl;
	if (s==s1) cout<<"yes you are right"<<endl;
	  else printf("wrong calculation\n");
	  
	if (s==s1+1) printf("null");
	  else printf("this is a test!");	
	return 0;
}
