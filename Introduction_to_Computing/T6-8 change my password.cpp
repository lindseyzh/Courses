#include <iostream>
#include <string>
#include <string.h>
void trans();
using namespace std;
string em,nam,pw,em1;//em=email,nam=usernam,pw=password
int n;
bool b=0;//empty?
int main(){
	cin>>em;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>nam>>pw>>em1;
		if (em1==em) trans();
	}
	if (!b) cout<<"empty"<<endl;
	return 0;
}
void trans(){
	b=1;
	int l=strlen(pw.c_str());
	for(int j=0;j<l;j++){
		if (pw[j]>='a'&&pw[j]<='z') pw[j]-=32;
			else if (pw[j]>='A'&&pw[j]<='Z') pw[j]+=32;
	}
	printf("%s %s\n",nam.c_str(),pw.c_str());
}
