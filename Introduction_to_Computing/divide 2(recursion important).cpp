#include <iostream>
using namespace std;
int divide(int m,int a);
int main(){
	int a,n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		cout<<divide(a,a)<<endl;
	}
	
	return 0;
}
int divide(int m,int a){
	if(m>a) return divide(a,a);
	if(a==1) return 1;
	if(m==1) return 0;
	if(a%m==0) return divide(m,a/m)+divide(m-1,a);
	if(a%m!=0) return divide(m-1,a);
}
