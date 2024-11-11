#include <iostream>
using namespace std;
#include <string>
#include <string.h>
int cn(char);
int main(){
	int n,i,j,l,k;
	char a;
	string s;
	cin>>n;
	getline(cin,s);
	for (i=1;i<=n;i++){
		getline(cin,s);
		k=0;
		l=strlen(s.c_str());
		for (j=0;j<l;j++){
			a=s[j];
			if (a<='9'&&a>='0') {
				cout<<a;
				k++;
				if (k==3) cout<<'-';
			}
				else if(a>='A'&&a<='Z') {
					cout<<cn(a);
					k++;
					if (k==3) cout<<'-';
				}
		}
		cout<<endl;
	}
	
	return 0;
}
int cn(char c){
	int r;
	if (c<='P') r=(c-'A'+6)/3;
		else switch(c){
			case 'R':
			case 'S':
				r=7;
				break;
			case 'T':
			case 'U':
			case 'V':
				r=8;
				break;
			case 'W':
			case 'X':
			case 'Y':
				r=9;
				break;
		}
	return r;
}
