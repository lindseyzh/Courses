#include <iostream>
using namespace std;
bool win(long long,long long);
int main(){
	long long a,b;
	while(1){
		cin>>a>>b;
		if(a==0&&b==0) break;
		if(win(a,b)) cout<<"win"<<endl;
		else cout<<"lose"<<endl;
	}
	return 0;
}
bool win(long long a,long long b){
	if(a<b) swap(a,b);//make sure a>=b 
	if(a%b==0) return 1;
	if(a>b*2) return 1;
//	cout<<a<<a-b<<endl;
	return !(win(a-b,b));
}
