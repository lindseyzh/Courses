#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
int main(){
	int n,i,j;
	int a[27]={0};
	char s[101];
	scanf("%s",s);
	int l=strlen(s);
	for(i=0;i<=l;i++){
	    a[s[i]-96]+=1;
	}
	int M=a[1];
	int m=99;//max and min initializaion
	for (i=2;i<=26;i++){
		if (a[i]>M) M=a[i];
		if (a[i]<m&&a[i]!=0) m=a[i];
	}
	
	int r=M-m;
	int v=(int)floor(sqrt(1.0*r));
	bool b=1;
	for(i=2;i<=v;i++){
		if (r%i==0) {
			b=0;
			break;
		}
	}
	if (r==1||r==0) b=0;
	if (b) printf("Lucky Word\n%d",r);
	  else printf("No Answer\n0");
	return 0;
}
