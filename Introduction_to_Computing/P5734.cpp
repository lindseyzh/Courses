#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int q,k,a,b,c;
	string s,w;
	cin>>q>>s;
	for(int i=1;i<=q;i++){
		cin>>k;
		switch(k){
			case 1:
				cin>>w;
				s=s+w;
				cout<<s<<endl;
				break;
			case 2:
				cin>>a>>b;
				s.erase(a+b,s.npos);
				s.erase(0,a);
				cout<<s<<endl;
				break;
			case 3:
				cin>>a>>w;
				s.insert(a,w);
				cout<<s<<endl;
				break;
			case 4:
				cin>>w;
				a=s.find(w);
				if (a==s.npos) cout<<-1<<endl;
				    else cout<<a<<endl;
				break;
		}
	}
	
	return 0;
}
