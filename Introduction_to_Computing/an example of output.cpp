//another example of output
#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
	int n,a;
	cout<<"Please enter three integers:"<<endl;
	a=scanf("%*d,%*d,%d",&n);
	cout<<"the last one:"<<n<<endl;
	printf("the return value of scanf:%d\n",a);
	if (a==0) printf("Wrong input!");
	  else printf("Well done!");
	
	return 0;
}
