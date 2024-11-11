//set precision
#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	float x;
	cin>>x;
	cout<<x<<endl;
	cout<<setprecision(8)<<x<<endl;
	cout<<x<<endl;
	cout<<setprecision(9)<<x<<endl;
	
	return 0;
}
