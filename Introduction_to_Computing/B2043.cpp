/*
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	if (x%3==0) printf("3 ");
	if (x%5==0) printf("5 ");
	if (x%7==0) printf("7");
	return 0;
}*/
//solution 2
#include <iostream>
int main(){
	int x,i;
	std::cin>>x;
	for(i=3;i<=7;i=i+2) 
	  if (x%i==0) std::cout<<i<<" ";
	std::cout<<std::endl;
	return 0;
}
