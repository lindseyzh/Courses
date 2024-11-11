#include<iostream>
using namespace std;
int a[100][100],r,sum[100][100]{0};
bool gotit[100][100]{0};
int tryit(int,int);
int main(){
	cin>>r;
	int i,j;
	for(i=0;i<r;i++)
		for(j=0;j<i+1;j++)
			cin>>a[i][j];
	cout<<tryit(0,0)<<endl;
	
	return 0;
}
int tryit(int n,int i){
	if(n==r-1) return a[n][i];
	if(!gotit[n][i])
		sum[n][i]=a[n][i]+max(tryit(n+1,i),tryit(n+1,i+1));
	gotit[n][i]=1;
	return sum[n][i];
}
