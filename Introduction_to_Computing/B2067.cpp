//advanced solution
#include <iostream>
using namespace std;
int main(){
	int m,n,a,i,b,s;
	cin>>m>>n;
	s=0;
	b=0;
	for (i=1;i<=n;i++){
		cin>>a;
		s+a>m?b+=1:s+=a;
	}
	cout<<b<<endl;
	return 0;
}

/*#include <iostream>
using namespace std;
int main(){
	int m,n,a[100],i,s,b;
	cin>>m>>n;
	s=0;
	b=0;
	for (i=1;i<=n;i++){
	  cin>>a[i];
	}
	for (i=1;i<=n;i++){
		if (s+a[i]>m) b+=1;
		    else s+=a[i];
	}
	cout<<b<<endl;
	return 0;
}*/
