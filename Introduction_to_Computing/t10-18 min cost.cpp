//t10-18
#include<iostream>
using namespace std;
int p[102][102],best[102][102]{0};
int n;
int findit(int,int);
int main(){
	cin>>n;
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>p[i][j];
	best[n-1][n-1]=p[n-1][n-1];
	cout<<findit(0,0)<<endl;
	return 0;
}
int findit(int i,int j){
	if(best[i][j]>0) return best[i][j];
	if(i==n-1) best[i][j]=findit(i,j+1)+p[i][j];
	else if(j==n-1) best[i][j]=findit(i+1,j)+p[i][j];
	else best[i][j]=min(findit(i+1,j),findit(i,j+1))+p[i][j];	
	return best[i][j];
}
