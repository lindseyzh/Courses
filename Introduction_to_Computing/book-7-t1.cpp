#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char s1[505],s2[505];
	float v;
	cin>>v;
	cin.getline(s1,10);
	cin.getline(s1,505);
	cin.getline(s2,505);
	int l1=strlen(s1);
	int l2=strlen(s2);
	int n=0;
	bool b=1;//error?
	if (l1!=l2) b=0;
	if (b)	
		for(int i=0;i<l1;i++){
		if (s1[i]!='A'&&s1[i]!='T'&&s1[i]!='C'&&s1[i]!='G'){
			b=0;
			break;
		}
		if (s2[i]!='A'&&s2[i]!='T'&&s2[i]!='C'&&s2[i]!='G'){
			b=0;
			break;
		}
		if (s1[i]==s2[i]) n++;
	}
	if (b) {
		float v1=n/l1;
		if (v1>=v) cout<<"yes"<<endl;
			else cout<<"no"<<endl;
	}
	else cout<<"error"<<endl;
	return 0;
}
