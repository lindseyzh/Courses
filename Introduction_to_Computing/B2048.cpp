#include <iostream>
using namespace std;
int main(){
	int x,m;
	char c;
	cin>>x>>c;
	m=8;
	if (x>1000) m+=((x-1000)/500+1)*4;
	if (c=='y') m+=5;
	printf("%d",m);
	return 0;
}
