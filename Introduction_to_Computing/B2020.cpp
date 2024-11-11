#include <iostream>
using namespace std;
int main(){
	int a,b,c,d,e,s;
	cin>>a>>b>>c>>d>>e;
	s=a+b+c+d+e;
	
	a=a/3;b=b+a;e=e+a;
	b=b/3;c=c+b;a=a+b;
	c=c/3;d=d+c;b=b+c;
	d=d/3;e=e+d;c=c+d;
	e=e/3;a=a+e;d=d+e;
	
	printf("%d %d %d %d %d\n",a,b,c,d,e);
	cout<<s-a-b-c-d-e<<endl;
	
	return 0;
}
