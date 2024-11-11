#include <iostream>
using namespace std;
int main(){
	int n,m,i,j,k,a[1002]{0};
	cin>>n>>m;
	for(i=0;i<m;i++){
		cin>>k;
		a[k]++;
	}
	bool b=1;
	for(i=1;i<=n;i++)
		if(a[i]>0)
			if(b) {
				cout<<i;
				for(j=1;j<a[i];j++)
					cout<<' '<<i;
				b=0;
			}
			else for(j=0;j<a[i];j++)
				cout<<' '<<i;
	cout<<endl;	
	
	return 0;
}
