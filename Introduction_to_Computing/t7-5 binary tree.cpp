#include <iostream>
using namespace std;
int find(int,int);
int main(){
	int x,y;
	cin>>x>>y;
	cout<<find(x,y)<<endl;
	
	return 0;
}
int find(int x,int y){
	if(x==y) return x;
	if(x>y) return find(x/2,y);
	if(x<y) return find(x,y/2);
}
