#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,i,j;
	int prime[1000]{0};
	bool check[10000]{0};
	cin>>n;
	int pos=0;//position
	for(i=2;i<=n;i++){
		if(!check[i]){//i is a prime number
			prime[pos]=i;
			pos++;
		}
		for(j=0;j<pos&&i*prime[j]<=n;j++){
			check[i*prime[j]]=1;
			if(i%prime[j]==0) 
			break;//multiple of prime[j] have been flagged as composite number
		}
	}
	for(i=0;i<pos;i++)
		cout<<prime[i]<<endl;
	return 0;
}
