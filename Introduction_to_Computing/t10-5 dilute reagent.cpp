#include<iostream>
#include<cstring>
using namespace std;
int maxsubs(int);
int n;
float a[102];
int len[102];
int findlen(int);
int main(){
	cin>>n;
	int i,j;
	for(i=0;i<n;i++)
		cin>>a[i];
	memset(len,-1,sizeof(len));
	len[n-1]=1;
	int maxlen=1;
	for(i=n-1;i>=0;i--){
		maxlen=max(findlen(i),maxlen);
	}
	cout<<maxlen<<endl;
	return 0;
}
int findlen(int i){
	if(len[i]>=0) return len[i];
	int maxlen=1;
	for(int j=n-1;j>i;j--){
		if(a[j]<=a[i]){
			maxlen=max(maxlen,findlen(j)+1);
		}
	}
	len[i]=maxlen;
	return maxlen;
}
