#include <iostream>
using namespace std;
void qusort(int,int);
int n,a[10003],b[10003];
int main(){
	int i,j;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i]>>b[i];
	qusort(0,n-1);
//	for(i=0;i<n;i++)
//		cout<<b[i]<<endl;
	int et=0,nog=0;//et=ending time,nog=number of games
	for(i=0;i<n;i++)
		if(et<=a[i]){
			nog++;
			et=b[i];
		}
	cout<<nog<<endl;
	
	return 0;
}
void qusort(int lf,int rt){
	if(lf>=rt) return;
	int i=lf;
	int j=rt;
	int temp=b[lf],t;
	while(i<j){
		while(b[j]>=temp&&i<j) j--;
		while(b[i]<=temp&&i<j) i++;
		t=b[i];	b[i]=b[j];	b[j]=t;
		t=a[i];a[i]=a[j];a[j]=t;
	}
	b[lf]=b[i];
	b[i]=temp;
	t=a[lf];a[lf]=a[i];a[i]=t;
	qusort(lf,i-1);
	qusort(i+1,rt);
	return;
}
