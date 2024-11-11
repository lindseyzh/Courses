#include<iostream>
#include<cstring>
using namespace std;
int findr(int);
int n,p[3002]{0};
int r[3002]{0};
int main(){
	int i;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>p[i];
	r[1]=p[1];
	for(i=2;i<=n;i++){
		if(r[i]>0) continue;
		int maxr=p[i];
		for(int j=1;j<=i/2;j++){
			maxr=max(maxr,findr(j)+findr(i-j));
		}
		r[i]=maxr;
	}
	cout<<r[n]<<endl;
	return 0;
}
int findr(int i){
	if(r[i]>0) return r[i];
	int maxr=p[i];
	for(int j=1;j<=i/2;j++){
		maxr=max(maxr,findr(j)+findr(i-j));
	}
	r[i]=maxr;
	return maxr;
}
