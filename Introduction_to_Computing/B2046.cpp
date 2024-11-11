#include <iostream>
using namespace std;
int main(){
	float t1,t2;//cycling or walking
	int s;
	cin>>s;
	t1=50+s/3.0;
	t2=s/1.2;
	if (t1<t2) cout<<"Bike"<<endl;
	  else if (t1>t2) cout<<"Walk"<<endl;
	  else cout<<"All"<<endl;
	return 0;
}
