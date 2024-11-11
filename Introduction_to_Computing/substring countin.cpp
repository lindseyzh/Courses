#include <iostream>
#include <cstring>
using namespace std;
bool fin(int);
	int i,ls,lss;
	char s[100];
	char ss[20];
int main(){
	cin.getline(s,100);
	cin.getline(ss,20);
	ls=strlen(s);
	lss=strlen(ss);
	int n=0;
	i=0;
	do{
		if(s[i]==ss[0])
			if(fin(i)){
				n++;
				i+=lss;
				continue;
			}
		i++;
	}while(i<ls-lss);
	cout<<n;
	return 0;
}
bool fin(int j){
	int u;
	for(u=0;u<lss;u++){
		if(s[u+j]!=ss[u])
			return 0;
	}
	return 1;
}
