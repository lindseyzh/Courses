//B2074
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b,n,i,s;
	cin>>a>>b;
	s=1;
	for (i=1;i<=b;i++){
		s*=a;
		s=s%7;
	}
	switch(s){
		case 0:
			cout<<"Sunday"<<endl;
			break;
		case 1:
			cout<<"Monday"<<endl;
			break;
		case 2:
			cout<<"Tuesday"<<endl;
			break;
		case 3:
			cout<<"Wednesday"<<endl;
			break;
		case 4:
			cout<<"Thursday"<<endl;
			break;
		case 5:
			cout<<"Friday"<<endl;
			break;
		case 6:
			cout<<"Saturday"<<endl;
			break;
	}
	
}
