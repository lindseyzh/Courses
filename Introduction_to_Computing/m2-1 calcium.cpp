#include <iostream>
using namespace std;
int main(){
	float ca[4]={1.1,1.2,22.5,8.8};
	int gra;
	int n,i;
	float cas=0;
	for(i=0;i<4;i++){
		cin>>gra;
		cas+=gra*ca[i];
	}
	if(cas>1000) cout<<"OVER"<<endl;
	else if(cas<600) cout<<"UNDER"<<endl;
	else cout<<"FINE"<<endl;
	
	return 0;
}
