//solution 1
/*#include <iostream>
using namespace std;
int main(){
	char a,b,c;
	cin>>a>>b>>c;
	cout<<c<<b<<a<<endl;
	return 0;
}*/

//solution 2
#include <iostream>
using namespace std;
int main(){
	int x,a,b,c;
	cin>>x;
	a=x/100;
	b=x/10%10;
	c=x%10;
	cout<<c<<b<<a<<endl;
	
	return 0;
}
