#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char s[15];
	cin.getline(s,15);
	int l=strlen(s);
	int i;
	bool b=1;
	for(i=0;i<=l/2;i++)
		if(s[i]!=s[l-i-1]){
			b=0;
			break;
		}
	if(b) cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	return 0;
}
