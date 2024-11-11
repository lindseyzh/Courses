#include <iostream>
using namespace std;
int main(){
	int num[1005],n,i,j;
	int sma[1005]{0};//number of smaller ones
	cin>>n;
	for(i=0;i<n;i++){
		cin>>num[i];
		for(j=0;j<i;j++){
			if (num[i]>num[j])
				sma[i]++;
			if(num[i]<num[j])
				sma[j]++;
		}	
	}
	if(n==0) cout<<"None"<<endl;
	else for(i=0;i<n;i++)
		cout<<sma[i]<<'\n';
	
	return 0;
}
