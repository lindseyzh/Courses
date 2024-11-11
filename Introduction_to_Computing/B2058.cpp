#include <iostream>
using namespace std;
int main(){
	int i,n,a,b,c,x,y,z,s;
	cin>>n;
	x=0;
	y=0;
	z=0;
	for (i=1;i<=n;i++){
		cin>>a>>b>>c;
		x+=a;
		y+=b;
		z+=c;
	}
	s=x+y+z;
	printf("%d %d %d %d",x,y,z,s);
	return 0;
}
