#include<iostream>
#include<cstring>
using namespace std;
int a[2002],b[2002],r[4002]{0};
char s[2002];
int l1,l2;
int main(){
	cin.getline(s,2002);
	l1=strlen(s);
	int i,j;
	for(i=0;i<l1;i++)
		a[i]=s[i]-'0';
	cin.getline(s,2002);
	l2=strlen(s);
	for(i=0;i<l2;i++)
			b[i]=s[i]-'0';
	for(i=l1-1;i>=0;i--)
		for(j=l2-1;j>=0;j--)
			r[l1+l2-2-i-j]+=a[i]*b[j];	
	int l=0;
	while(1){
		r[l+1]+=r[l]/10;
		r[l]%=10;
		l++;
		if(r[l]==0) break;
	}
	for(i=l-1;i>=0;i--)
		cout<<r[i];
	cout<<endl;
	return 0;
}
