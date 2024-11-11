#include <iostream>
using namespace std;
int main(){
	int m,n,i,j,u,v;
	bool b[105][105],b1[105][105]{0};
	cin>>m>>n;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>b[i][j];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		b1[i][j]=1;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(!b[i][j]){
				for(u=0;u<m;u++)
					b1[u][j]=0;
				for(v=0;v<n;v++)
					b1[i][v]=0;
			}
	for(i=0;i<m;i++){
		cout<<b1[i][0];
		for(j=1;j<n;j++)
			cout<<' '<<b1[i][j];
		cout<<endl;
	}	
	
	return 0;
}
