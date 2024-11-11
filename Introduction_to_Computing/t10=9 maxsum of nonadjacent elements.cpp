//t10-9
#include<iostream>
#include<cstring>
using namespace std;
int n,a[10002];
int len[10002];
int main(){
	cin>>n;
	int i,j;
	for(i=0;i<n;i++)
		cin>>a[i];
	len[0]=a[0];
	len[1]=max(a[0],a[1]);
	int maxlen=0;
	for(i=2;i<n;i++){
		len[i]=max(len[i-1],len[i-2]+a[i]);
		maxlen=max(maxlen,len[i]);
	}
	cout<<maxlen<<endl;
	return 0;
}
