#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main(){
	char c,b;
	string s;
	getline(cin,s);
	int l=strlen(s.c_str());
	b=s[0];
	if (b>='a') b-=32;
	int i=1,n=1;
	do{
		c=s[i];
		if (c>='a') c-=32;
		if (c==b) {
			n++;
		}
			else {
				printf("(%c,%d)",b,n);
				b=c;
				n=1;
			}
		i++;
	}while (i<l);
	if (l>1) printf("(%c,%d)",b,n);
	return 0;
}
