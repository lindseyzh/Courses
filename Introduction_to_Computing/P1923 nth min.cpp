#include <iostream>
using namespace std;
void quicksort(int,int);
int n,a[200],k,i,j;
int main(){
	cin>>n>>k;
	for(i=0;i<n;i++)
		cin>>a[i];
	quicksort(0,k);
	cout<<a[k]<<endl;
	for(i=0;i<n;i++)
		cout<<a[i]<<endl;	
	return 0;
}
void quicksort(int lf,int rt){
	if(lf>=rt) return;
	int i=lf,j=rt,t;
	int temp=a[lf];
	while(i!=j){
		while(a[j]>=temp&&i<j) j--;
		while(a[i]<=temp&&i<j) i++;
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	a[lf]=a[i];
	a[i]=temp;
	if(k==i) return;
	if(k<i) quicksort(lf,i-1);
	if(k>i) quicksort(i+1,rt);
	return;
}
