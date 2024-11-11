#include <iostream>
using namespace std;
void read();
void dbsort();
void qusort(int*,int,int);
void merge();
void prin();
int a[100],b[100],na,nb;
int main(){
	read();
	dbsort();
	merge();
	prin();
	return 0;
}
void read(){
	cin>>na>>nb;
	for(int i=0;i<na;i++)
		cin>>a[i];
	for(int i=0;i<nb;i++)
		cin>>b[i];
	return;
}
void dbsort(){
	qusort(a,0,na-1);
	qusort(b,0,nb-1);
	return;
}
void qusort(int * s,int lf,int rt){
	if(lf>=rt) return;
	int i=lf,j=rt;
	int temp=s[lf],t;
	while(i<j){
		while(s[j]>=temp&&i<j) j--;
		while(s[i]<=temp&&i<j) i++;
		t=s[i];
		s[i]=s[j];
		s[j]=t;
	}
	s[lf]=s[i];
	s[i]=temp;
	qusort(s,lf,i-1);
	qusort(s,i+1,rt);
	return;
}
void merge(){
	for(int i=0;i<nb;i++)
		a[na+i]=b[i];
	return;
}
void prin(){
	cout<<a[0];
	for(int i=1;i<na+nb;i++)
		cout<<' '<<a[i];
	cout<<endl;
	return;
}
