#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int n,l,j,i;
	char s[260];
	cin>>n;
	cin.getline(s,1);
	for(i=0;i<n;i++){
		cin.getline(s,260);
		l=strlen(s);
		for(j=0;j<l;j++){
			switch(s[j]){
				case 'A':
					cout<<'T';
					break;
				case 'T':
					cout<<'A';
					break;
				case 'C':
					cout<<'G';
					break;
				case 'G':
					cout<<'C';
					break;
			}
		}
		cout<<endl;
	}
	
	return 0;
}
