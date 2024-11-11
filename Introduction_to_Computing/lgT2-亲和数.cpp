#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long n,a,b,i,j,s1,s2,v,u;
	cin>>n;
	for (i=220;i<n;i++){
		s1=0;//for i
		v=(int)floor(sqrt(1.0*i));
		for (j=1;j<v;j++){
			if (i%j==0) {s1=s1+j+i/j;}
		}
		s1-=i;//s1 minus i itself
	    if (v*v==i) s1+=v;
	    if (s1>n) continue;
	    
		s2=0;//for s1
		u=(int)floor(sqrt(1.0*s1));
		for (j=1;j<u;j++){
			if (s1%j==0) {s2=s2+j+s1/j;}
		}
		s2-=s1;//s2 minus s1 itself
		if (u*u==s1) s2+=u;
		
		if (s2==i&&i<s1) printf("%d %d\n",i,s1);//decision

	}
	
	return 0;
}
