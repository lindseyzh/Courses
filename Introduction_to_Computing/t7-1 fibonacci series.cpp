#include <iostream>
using namespace std;
int fibonacci(int);
int main(){
	int n,a,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a;
		cout<<fibonacci(a)<<endl;
	}
	
	return 0;
}
int fibonacci(int n){
	if(n<=2) return 1;
	return fibonacci(n-1)+fibonacci(n-2);
}
