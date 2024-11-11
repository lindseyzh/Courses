#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,a;
	float money;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		money+=0.1*(ceil(1.0*a/70));
	}
	printf("%.1f",money);
	return 0;
}
