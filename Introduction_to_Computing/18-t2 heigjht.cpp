#include <iostream>
using namespace std;
int main(){
	int n,h[105],i,j;
	cin>>n;
	do{
		for(i=0;i<n;i++)
			cin>>h[i];
		for(i=0;i<n-1;i++)
			for(j=0;j<n-1-i;j++)
				if(h[j]<h[j+1]) 
					swap(h[j],h[j+1]);
		cout<<h[(n+1)/2-1]<<endl;			
		cin>>n;	
	}while(n>0);
	
	return 0;
}
//tips:bubble sorting,swap a[j] and a[j+1],not a[i]!
