#include <iostream>
using namespace std;
int main(){
	int n,h[20005],i,j,lb,rb;//left bound&right bound
	bool b;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>h[i];
	int smax=0;
	for(i=0;i<n;i++){
		b=1;
		for(j=i;j>=0;j--)
			if(h[j]<h[i]) {
				b=0;
				break;
			}
		if(!b) lb=j+1;
		else lb=0; 
		b=1;
		for(j=i;j<n;j++)
			if(h[j]<h[i]){
				b=0;
				break;
			}
		if(!b) rb=j-1;
		else rb=n-1;
		smax=max(smax,(rb-lb+1)*h[i]);
	}
	cout<<smax<<endl;
	return 0;
}
