#include <iostream>
using namespace std;
int main(){
	int n,i=0;
	char s[50];
	cin>>n;
	n%=26;//����while
	while (cin>>s[i]){
		if (s[i]+n>'z') s[i]=s[i]+n-26;//������while������������ ��֪��Ϊʲô
		  else s[i]=s[i]+n;
		printf("%c",s[i]);
		i++;
	}
	return 0;
}
