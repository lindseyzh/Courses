#include<iostream>
using namespace std;
int masum[15][15][15][15];
int n,matrix[100][100];
bool havecal[15][15][15][15]{0};
int x1,y1,x2,y2,maxsum;
int calit(int,int,int,int);
int main(){
	cin>>n;
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			cin>>matrix[i][j];
			masum[i][j][i][j]=matrix[i][j];
			havecal[i][j][i][j]=1;
		}
	maxsum=matrix[0][0];
	x1=x2=y1=y2=0;
	maxsum=calit(0,0,n-1,n-1);
	for(i=x1;i<=x2;i++){
		cout<<matrix[i][y1];
		for(j=y1+1;j<=y2;j++){
			cout<<' '<<matrix[i][j];
		}
		cout<<endl;
	}
	cout<<maxsum<<endl;
	return 0;
}
int calit(int sx,int sy,int nx,int ny){
	if(havecal[sx][sy][nx][ny]) 
		return masum[sx][sy][nx][ny];
	int m=0;
	if(sx==nx) 
		for(int i=sy;i<=ny;i++)
			m+=matrix[sx][i];
	else m=calit(sx,sy,nx-1,ny)
		+calit(nx,sy,nx,ny);
	masum[sx][sy][nx][ny]=m;
	if(m>maxsum){
		x1=sx;
		y1=sy;
		x2=nx;
		y2=ny;
		maxsum=m;
	}
	return m;
}
