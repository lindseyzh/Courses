#include <iostream>
using namespace std;
int main(){
	int i=0,w=0;
	char s[5];
	while (cin>>noskipws>>s[i]){
		if (s[i]!=' '&&s[i]!='\n') w++;
		if (i==4) break;
		i++;
	}
	cout<<w<<endl;
	return 0;
}
