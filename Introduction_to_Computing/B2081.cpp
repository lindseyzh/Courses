#include <iostream>
using namespace std;
int main(){
	int n,s=0,j,i;
	bool b;
	char c[3];
	cin>>n;
	for (i=1;i<=n;i++){
		b=0;
		if (i%7==0) 
		    b=1;
		sprintf(c,"%d",i);
		for (j=0;j<=2;j++){
			if (c[j]=='7') 
		  	    b=1;	
		}
		if (!b) s+=i*i;
	}
	cout<<s<<endl;
	
	return 0;
}
