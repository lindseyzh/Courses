#include <iostream>
using namespace std;
int main(){
	int n,i=0;
	char s[50];
	cin>>n;
	n%=26;//不必while
	while (cin>>s[i]){
		if (s[i]+n>'z') s[i]=s[i]+n-26;//这里用while来减会有问题 不知道为什么
		  else s[i]=s[i]+n;
		printf("%c",s[i]);
		i++;
	}
	return 0;
}
