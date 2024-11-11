#include <iostream>
using namespace std;
int main(){
	int i,j,n,cb[22];//cb=chessboard
	bool b[22]{0};
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>cb[i];
	cb[0]=1;
	i=0;
	int step=0;
	do{
		step++;
		if(b[i]) {
			step++;
			i++;
		}
		else b[i]=1,i+=cb[i];
		if(i<0) i=0;
	}while(i<=n);
	cout<<step<<endl;
	
	return 0;
}
