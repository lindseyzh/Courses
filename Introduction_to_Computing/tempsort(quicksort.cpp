#include <iostream>
using namespace std;
void tempsort(int,int);
void insertsort(int,int);
int n,a[100];
int main(){
	int i;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	tempsort(0,n-1);
	
	cout<<a[0];
	for(i=1;i<n;i++)
		cout<<' '<<a[i];
	cout<<endl;
	
	return 0;
}
void tempsort(int lf,int rt){
	if(lf>=rt) return;
//	if(rt-lf<10){
//		insertsort(lf,rt);
//		return;
//	}
	int i=lf,t;
	int j=rt;
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
	tempsort(lf,i-1);
	tempsort(i+1,rt);
	return;
}
void insertsort(int lf,int rt){
	if(lf==rt) return;
	int i,j,t;
	for(i=lf+1;i<=rt;i++){
		j=i;
		while(a[j]<a[j-1]&&j>lf){
			t=a[j];a[j]=a[j-1];a[j-1]=t;
			j--;
		}
	}
	return;
}
