#include <iostream>
using namespace std;
int apple(int);
int k,n,i;
int main(){
	cin>>n>>k;
	int apn;
	i=1;
	while(1){
		apn=apple(n);
		if(apn!=0) break; 	
	}
	cout<<apn<<endl;
	return 0;
}
int apple(int na){//apple(na):the number monkey(n-na+1) sees
	if(na==1) return n*i+k;
	int a=apple(na-1);
	if(a==0) return 0;
	if(a%(n-1)!=0){
		i++;
		return 0;
	}
	return a*n/(n-1)+k;
}
