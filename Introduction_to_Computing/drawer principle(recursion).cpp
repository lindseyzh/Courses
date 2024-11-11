#include <iostream>
using namespace std;
int divide(int,int);
int main(){
	int t,i,m,n;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>m>>n;
		cout<<divide(m,n)<<endl;
	}
	return 0;
}
int divide(int m,int n){
	if(n<=1) return 1;
	if(m<n) return divide(m,m);
	return divide(m,n-1)+divide(m-n,n);
	//(m,n-1):some are empty
	//(m-n,n):no empty plates
	
}



/*
#include <iostream>
using namespace std;
int divide(int,int);
int main(){
	int m,n;
	cin>>m>>n;
	cout<<divide(m,n)<<endl;
	return 0;
}

int divide(int x,int y){
	if(x==0||y==1) return 1;
	if(x<y) return divide(x,x);
	if(x>=y) return divide(x,y-1)+divide(x-y,y);
}
*/
