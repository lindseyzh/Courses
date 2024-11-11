#include<iostream>
#include<cstring>
using namespace std;
int a[300],k,l,p[300];
char s[300];
int main(){
	cin.getline(s,300);
	cin>>k;	
	l=strlen(s);
	int i,j,u;
	for(i=0;i<l;i++)
		a[i]=s[i]-'0';
	i=0;
	int t;
	p[0]=-1;
	for(u=1;u<=l-k;u++){
		p[u]=k+u-1;
		t=a[p[u]];
		for(i=k+u-2;i>p[u-1];i--){
			if(a[i]<=t){
				p[u]=i;
				t=a[i];
			}
		}	
	}
	i=1;
	while(a[p[i]]==0) i++;
	if(i>l-k) cout<<0;
	for(i=i;i<=l-k;i++)
		cout<<a[p[i]];
	cout<<endl;
	
	
	return 0;
}
