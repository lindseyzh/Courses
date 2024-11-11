#include <iostream>
using namespace std;
int main(){
	int l,r,i,j,a;
	char c[4];
	cin>>l>>r;
	int s=0;
	for (i=l;i<=r;i++){
		a=i;
	    for (j=1;j<=4;j++){
		    if (a%10==2) s++;
			a/=10;	
		}
	}
	cout<<s<<endl;
	return 0;
}
