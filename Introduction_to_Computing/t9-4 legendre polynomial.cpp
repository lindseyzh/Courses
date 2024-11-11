#include <iostream>
#include <iomanip>
using namespace std;
float cal(int);
int x;
int main(){
	int n;
	cin>>n>>x;
	cout<<fixed<<setprecision(0)<<cal(n)<<endl;
	return 0;
}
float cal(int n){
	if(n==0) return 1;
	if(n==1) return x;
	return ((2*n-1)*cal(n-1)-(n-1)*cal(n-2))/n;
}
