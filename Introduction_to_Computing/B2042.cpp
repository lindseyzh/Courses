/*
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if ((n%3==0)&&(n%5==0)) printf("YES");
	  else printf("NO");
	return 0;
}*/
//another solution:
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	cout<<(n%15==0?"YES":"NO");
	return 0;
}
