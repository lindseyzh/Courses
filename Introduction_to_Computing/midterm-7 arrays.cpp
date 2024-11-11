#include<iostream>
using namespace std;
int a[200002],n;
void qusort(int,int);
int main(){
	int m,i,j;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	qusort(1,n);
	cout<<"LOOK"<<endl;
	for(i=1;i<=n;i++)
		cout<<a[i]<<endl;
	cout<<"END"<<endl;
	cin>>m;
	char c,s[15];
	int num;
	for(int u=0;u<m;u++){
		cin>>c;
		if(c=='A'){
			cin>>c;
			cin>>c;
			cin>>num;
			if(n==0){
				a[1]=num;
				n=1;
			}
			else{
			i=n;
			while(a[i]<num&&i>0) i--;
			if(i==n){
				a[n+1]=num;
			}
			else if(i==0){
				for(j=n+1;j>=2;j--)
					a[j]=a[j-1];
				a[1]=num;
			}
			else{
				for(j=n+1;j>i+1;j--)
					a[j]=a[j-1];
				a[i+1]=num;
			}
			n++;
			}
		}
		else {
			cin.getline(s,15);
			if(n==0) cout<<"NULL"<<endl;
			else {
				cout<<a[n]<<endl;
				n--;
			}
		}
	}
	
	return 0;
}

void qusort(int lf,int rt){
	if(lf>=rt) return;
	int i,j,t;
	int temp=a[lf];
	i=lf;
	j=rt;
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
