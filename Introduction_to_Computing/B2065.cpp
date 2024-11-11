//B2065
#include <iostream>
using namespace std;
int main(){
	int n,a,b,s[20],i;
	float x,y,x1,x2;
	cin>>n;
	cin>>a>>b;
	x=1.0*b/a;
	x1=x+0.05;
	x2=x-0.05;
	for (i=2;i<=n;i++){
		cin>>a>>b;
		y=1.0*b/a;
		if (y>x1) s[i]=1;
		  else if (y<x2) s[i]=-1;
		  else s[i]=0;
	}
	for (i=2;i<=n;i++){
		if (s[i]==1) printf("better\n");
		  else if (s[i]==-1) printf("worse\n");
		  else printf("same\n");
	}
	return 0;
}
