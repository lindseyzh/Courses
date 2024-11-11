#include<iostream>
using namespace std;
void color(int,int);
int n,m;
bool photo[105][105]{0};
int mov[5][2]={0,0,0,1,0,-1,1,0,-1,0};
int main(){
	cin>>n>>m;
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>photo[i][j];
	int num=0;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			if(photo[i][j]){
				num++;
				color(i,j);
			}
	cout<<num<<endl;
	return 0;
}
void color(int i,int j){
	photo[i][j]=0;
	int y,x;
	for(int u=1;u<=4;u++){
		y=i+mov[u][0];
		x=j+mov[u][1];
		if(x<0||y<0||y>=n||x>=m) continue;
		if(photo[y][x]){
			color(y,x);
		}
	}
	return;
}
