#include <iostream>
using namespace std;
long long hanoi(long long);
int main(){
	long long n;
	cin>>n;
	cout<<hanoi(n)<<endl;
	return 0;
}
long long hanoi(long long n){
	if(n==1) return 1;
	return 2*hanoi(n-1)+1;
}
