#include <iostream>
using namespace std;
int main(){
	int n,i,j,s,b,a[4];
	cin>>n;
	s=0;
	for (i=1;i<=n;i++){
		cin>>b;
		for (j=4;j>=1;j--){
			a[j]=b%10;
			b=b/10;
		}
		if (a[4]-a[1]-a[2]-a[3]>0) s+=1;
	}
	cout<<s<<endl;
	
	return 0;
}
