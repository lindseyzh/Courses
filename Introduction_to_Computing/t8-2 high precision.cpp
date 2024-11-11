#include <iostream>
#include <cstring>
using namespace std;
int main(){
	//input
	char s1[205],s2[205];
	int n,u;
	cin>>n;
	cin.get();
	for(u=0;u<n;u++){
	cin.getline(s1,205);
	cin.getline(s2,205);
	
	int l1=strlen(s1);
	int l2=strlen(s2);
	int i,j,a[205]{0};
	for(i=0;i<=l1-1;i++)
		a[i]=s1[l1-1-i]-'0';
	for(i=0;i<=l2-1;i++){
		a[i]+=s2[l2-1-i]-'0';
		if(a[i]>=10) {
			a[i]-=10;
			a[i+1]++;
		}
	}
	for(i=l2;i<l1;i++){
		if(a[i]>=10) {
					a[i]-=10;
					a[i+1]++;
				}
	}
	int l=max(l1,l2);
	if(a[l]>0) l++;
	while(l>1&&a[l-1]==0)
		l--;
	for(i=l-1;i>=0;i--){
		cout<<a[i];
	}
	cout<<endl;
	}
	return 0;
}
