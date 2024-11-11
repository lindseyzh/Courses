#include <iostream>
using namespace std;
int n,a[10003];
void qusort(int,int);
int main(){
	int i,j,t;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	qusort(0,n-1);
	int w=0;
	do{
		i=n-1;
		while(a[i]>a[i-1]&&i>=1) {
			t=a[i];
			a[i]=a[i-1];
			a[i-1]=t;
			i--;
		}
//		for(j=0;j<n;j++)
//			cout<<a[j]<<' ';
//		cout<<'*'<<n<<endl;
		w+=a[n-1]+a[n-2];
		a[n-2]+=a[n-1];
		n--;
	}while(n>1);
	cout<<w<<endl;
	return 0;
}
void qusort(int lf,int rt){
	if(lf>=rt) return;
	int i=lf,j=rt;
	int temp=a[lf],t;
	while(i<j){
		while(a[j]<=temp&&i<j) j--;
		while(a[i]>=temp&&i<j) i++;
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	a[lf]=a[i];
	a[i]=temp;
	qusort(lf,i-1);
	qusort(i+1,rt);
	return;
}
