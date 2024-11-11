#include <iostream>
using namespace std;
int main(){
	int a,b,j,i;
	char c;
	bool f;
	cin>>a>>b>>c>>f;
	if (f) 
	    for(i=1;i<=a;i++){
	    	for(j=1;j<=b;j++) cout<<c;
			printf("\n");
	    }  
	else {
		for (j=1;j<=b;j++) 
		    printf("%c",c);
		printf("\n");
		for (i=1;i<=a-2;i++){
			cout<<c;
			for (j=1;j<=b-2;j++) cout<<' ';
			cout<<c<<endl;
		}
		for (j=1;j<=b;j++) 
				    printf("%c",c);
				printf("\n");
	}
	return 0;
}
