#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int n,v=0;
	char s[100];
	bool b[100]={0};//reminder:you can only initialize an array all zero
	cin>>n;//Any other numbers should not be initialized in this way
	cin>>s;
	for(int i=0;i<=n-1;i++){
		if (s[i]=='V'&&s[i+1]=='K'){
			v+=1;
			b[i]=1;
			b[i+1]=1;
		}
	}
	for(int i=0;i<=n-1;i++){
		if (!b[i]&&!b[i+1]&&s[i]==s[i+1]){
			v+=1;
			break;
		}
	}
	cout<<v<<endl;
	return 0;
}
