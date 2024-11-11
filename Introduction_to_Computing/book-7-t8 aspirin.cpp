#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int n;
	char s[25];
	cin>>n;
	cin.getline(s,25);
	do{
		cin.getline(s,25);
		if (s[0]>='a'&&s[0]<='z')
			s[0]-=32;
		int l=strlen(s);
		for(int i=1;i<l;i++){
			if(s[i]>='A'&&s[i]<='Z')
				s[i]+=32;
		}
		cout<<s<<endl;
		n--;
	}while(n>0);
	return 0;
}
