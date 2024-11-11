//P1102
#include<iostream>
using namespace std;
int a[20002],n,c,num=0;
void qusort(int lf,int rt){
	if(lf<=rt) return;
	int i=lf,j=rt;
	int temp=a[lf],t;
	while(i<j){
		while(a[j]>=temp&&i<j) j--;
		while(a[i]<=temp&&i<j) i++;
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
int main(){
	cin>>n>>c;
	int i,j,lf;
	for(i=0;i<n;i++)
		cin>>a[i];
	if(c<0) c=-c;
	i=j=0;
	for(lf=0;lf<n;lf++){
		while(a[j]-a[lf]<=c&&j<n) j++;//j>c
		while(a[i]-a[lf]<c&&i<n) i++;//i>=c
		if(a[j-1]-a[lf]==c&&a[i]-a[lf]==c) num+=j-i;
	}
	cout<<num<<endl;
	return 0;
}
