#include <iostream>
using namespace std;
int main(){
	int i,n,a[30],f[100],m;
	cin>>n;
	m=0;
	for (i=1;i<=n;i++){
		cin>>a[i];
		if (a[i]>m) m=a[i];
	}
	f[1]=1;
	f[2]=1;
	for (i=3;i<=m;i++){
		f[i]=f[i-1]+f[i-2];
	}
	for (i=1;i<=n;i++){
		printf("%d\n",f[a[i]]);
	}
	return 0;
}
