#include<iostream>
using namespace std;
int findspy(int);
int main(){
	int n,i,m;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>m;
		cout<<findspy(m)<<endl;
	}
	
	return 0;
}
int findspy(int ini){
	bool getit=0;
	int a[5];
	while(1){
		ini++;
		int i=ini;
		int j=0;
		while(i>0){
			a[j]=i%10;
			i/=10;	
			j++;
		}
		getit=1;
		for(int u=0;u<j-1;u++)
			for(int v=u+1;v<j;v++)
				if(a[u]==a[v]){
					getit=0;
					break;
				}		
		if(getit) return ini;
	}
}
