#include <iostream>
int main(){
	int a,b,c;
	std::cin>>a>>b>>c;
	if (int(a>=60)+int(b>=60)+int(c>=60)==2) std::cout<<1<<std::endl;
	  else std::cout<<0<<std::endl;
	return 0;
}
