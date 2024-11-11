#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int l=strlen(s.c_str());
	bool b=1;
	for(int i=0;i<l/2;i++){
		if (s[i]!=s[l-1-i]) {
			b=0;
			break;
		}
	}
	if (b) cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	return 0;
}
