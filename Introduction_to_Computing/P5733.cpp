#include <iostream>
using namespace std;
int main(){
	int i,v;
	char a[100];
	i=0;
	v='A'-'a';
	while (cin>>a[i]){
		if (a[i]>='a'&&a[i]<='z') 
		  a[i]+=v;
		printf("%c",a[i]);
		i++;
	}
	return 0;
}
