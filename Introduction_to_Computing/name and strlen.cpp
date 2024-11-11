#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
	char name[10],surn[10];
	int a,b;
	cout<<"your name:"<<endl;
	scanf("%s",name);
	cout<<"your family name"<<endl;
	scanf("%s",surn);
	a=strlen(name);
	b=strlen(surn);
	
	cout<<"Output 1:\n"<<endl;
	printf("%s%*s\n",name,b+1,surn);
	printf("%*d%*d\n",a,a,b+1,b);//数字在右边的形式
	
	printf("Output 2:\n");
	printf("%s%*s\n",name,b+1,surn);
	printf("%-*d%-*d",a+1,a,b,b);
	
	return 0;
	}
