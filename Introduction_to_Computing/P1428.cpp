#include <iostream>
using namespace std;
int main(){
	int n,a[101],b[101],j;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=0;
		for (j=1;j<=i-1;j++){
			if (a[j]<a[i]) b[i]++;
		}
	}
	for (int i=1;i<=n-1;i++){
		printf("%d ",b[i]);
	}
	printf("%d",b[n]);
	return 0;
}
