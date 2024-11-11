#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;
int main(){
	char a;
	int num[1000]{0},top=0;;
	while(1){
		cin>>a;
		if(a=='@') break;
		switch(a){
			case'+':
				num[top-1]=num[top-1]+num[top];
				num[top]=0;
				top--;
				break;
			case'-':
				num[top-1]-=num[top];
				num[top]=0;
				top--;
				break;
			case '*':
				num[top-1]*=num[top];
				num[top]=0;
				top--;
				break;
			case '/':
				num[top-1]/=num[top];
				num[top]=0;
				top--;
				break;
			default:
				top++;
				do{
					num[top]=num[top]*10+a-'0';
					cin>>a;
				}while(a!='.');
		}
	}
	cout<<num[top]<<endl;
	return 0;
}
