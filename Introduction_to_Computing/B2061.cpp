#include <iostream>
using namespace std;
int main(){
	int k,i,m,a,b,c;
	cin>>k;
	a=0;
	b=0;
	c=0;
	for (i=1;i<=k;i++){
		scanf("%d",&m);
		switch(m){
			case 1:
				a+=1;
				break;
			case 5:
				b+=1;
				break;
			case 10:
				c+=1;
				break;
		}
	}
	printf("%d\n%d\n%d",a,b,c);
	return 0;
}
