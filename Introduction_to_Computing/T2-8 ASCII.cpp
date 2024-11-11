#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char a[50];
	int i,n;
	cin.get(a,50);
	i=0;
	while(a[i]%2!=0){
		i+=1;
	  }
	if (a[i]=='\0') cout<<"NO"<<endl;
	  else {
	  	printf("%d",a[i]);
		while(a[i]!='\0'){
			i++;
	  	  if (a[i]%2==0&&a[i]!=0) printf(",%d",a[i]);
	  }
	  }
	return 0;
}
