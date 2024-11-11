#include<iostream>
using namespace std;
void color(int,int);
int maze[55][55]{0},m,n,xm,ym,xt,yt;
int mov[5][2]={0,0,0,1,1,0,0,-1,-1,0};
bool getit=0;
int main(){
	cin>>m>>n;
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
			cin>>maze[i][j];
			if(maze[i][j]==2) ym=i,xm=j;
		}
	color(ym,xm);
	if(getit) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}
void color(int y,int x){
	if(maze[y][x]==3) {
		getit=1;
		return;
	}
	maze[y][x]=1;
	int yy,xx;
	for(int i=1;i<=4;i++){
		yy=y+mov[i][0];
		xx=x+mov[i][1];
		if(yy<0||xx<0||yy>=m||xx>=n) continue;
		if(maze[yy][xx]!=1){
			color(yy,xx);
			if(getit) return;
		} 
	}
	return;
}
