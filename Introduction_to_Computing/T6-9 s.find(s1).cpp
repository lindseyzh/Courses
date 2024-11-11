#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	int l1=strlen(s1.c_str());
	int l2=strlen(s2.c_str());
	if (l1<l2){
		int p=s2.find(s1);
		if (p==s2.npos) cout<<"No substring"<<endl;
			else cout<<s1<<" is substring of "<<s2<<endl;
	}
		else {
			int p=s1.find(s2);
			if (p==s1.npos) cout<<"No substring"<<endl;
				else cout<<s2<<" is substring of "<<s1<<endl;
		}

	return 0;
}
