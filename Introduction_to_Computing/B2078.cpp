#include <iostream>
using namespace std;
int main(){
	int k,s=0;
	char c;
	c=getchar();
	cout<<c<<endl;
	while(c!=' '){
		if (c=='3') s++;
		c=getchar();
	}
//getchar()����ո񣬿ո�Ҫ��' ',rather than '\0'
	cin>>k;
	cout<<(s==k?"YES":"NO");
	return 0;
}

/*
//ע��scanf���ַ�����s[0]��ʼ
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int l,k,s=0;
	char m[16];
	scanf("%s",m);
	cin>>k;
	l=strlen(m);
	for (int i=0;i<=l-1;i++){
		if (m[i]=='3') s++;
	}
	if (s==k) puts("YES");
	  else puts("NO");
	return 0;
}*/
