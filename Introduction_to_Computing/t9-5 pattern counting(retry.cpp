#include<iostream>
using namespace std;
void color(int,int);
char cv[205][205];
int mov[3]={-1,0,1},n,m;
int main(){
	cin>>n>>m;
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>cv[i][j];
	int patternnum=0;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			if(cv[i][j]=='#'){
				patternnum++;
				color(i,j);
			}
	cout<<patternnum<<endl;
	return 0;
}
void color(int i,int j){
	int u,v,x,y;
	cv[i][j]='@';
	for(u=0;u<3;u++)
		for(v=0;v<3;v++){
			y=i+mov[u];
			x=j+mov[v];
			if(x<0||y<0||y>=n||x>=m) continue;
			if(cv[y][x]=='#') color(y,x);
		}
	return;
}
