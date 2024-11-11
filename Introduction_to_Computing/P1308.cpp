#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int main(){
	string a,s;
	int n=0,w=0,i;
	getline(cin,a);
	getline(cin,s);
	int l=strlen(a.c_str());
	int ls=strlen(s.c_str());
	for(i=0;i<l;i++){
		if (a[i]>='a') a[i]-=32;
	}
	a=a+' ';
	l++;//a+' 'result in l++
	i=0;
	bool b=1;
    for(int j=0;j<l;j++){
	 	if (s[i+j]!=a[j]&&s[i+j]!=a[j]+32) {
		  	b=0;
		    break;
		}
    }
   	if (b) {
	   	n+=1;
	   	w=1;
	   }
	a=' '+a;
	l++;
	for(i=1;i<=ls-l;i++){
		b=1;
		for(int j=0;j<l;j++){
			if (s[i+j]!=a[j]&&s[i+j]!=a[j]+32) {
				b=0;
				break;
			}
		}
		if (b) {
			n+=1;
			if (n==1) w=i+2;
		}
	}
	if (n>0) cout<<n<<' '<<w<<endl;
	    else cout<<"-1"<<endl;
	
	return 0;
}
