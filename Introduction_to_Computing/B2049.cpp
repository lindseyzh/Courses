//about <algorithm>
#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	cout<<max(a,max(b,c))<<endl;
	return 0;
}
/*
#include <iostream>
int main(){
	int a,b,c,m;
	std::cin>>a>>b>>c;
	m=a;
	if (b>m) m=b;
	if (c>m) m=c;
	std::cout<<m<<std::endl;
	return 0;
}*/
