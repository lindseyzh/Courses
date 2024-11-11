#include<iostream>
#include<cstring>
using namespace std;
void submerge(int,int,int);
int m,n,h[205][205];
bool wa[205][205];
int wl[205][205];//water level
int cx,cy;//the position of command
int mov[5][2]={0,0,0,1,0,-1,1,0,-1,0};
bool succeed;
int main(){
	int k,p,i,j,wx,wy;
	cin>>k;
	while(k){
	k--;
		cin>>m>>n;
		memset(h,0,sizeof(h));
		memset(wl,0,sizeof(wl));
		memset(wa,0,sizeof(wa));
		for(i=1;i<=m;i++)
			for(j=1;j<=n;j++)
				cin>>h[i][j];
		cin>>cx>>cy;
		cin>>p;
		succeed=0;
		for(i=0;i<p;i++){
			cin>>wx>>wy;
			submerge(wx,wy,h[wx][wy]);
		}
		if(succeed) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	
	return 0;
}
void submerge(int wx,int wy,int wh){
	if(succeed) return;
	wl[wx][wy]=wh;
	wa[wx][wy]=1;
	int x,y;
	for(int i=1;i<=4;i++){
		x=wx+mov[i][0];
		y=wy+mov[i][1];
		if(x<=0||y<=0||x>m||y>n) continue;
		if(h[x][y]>wh) continue;
		if(wa[x][y]&&wl[x][y]>=wh) continue;
		if(x==cx&&y==cy){
			succeed=1;
			return;
		}
		submerge(x,y,wh);
		if(succeed) return;
	}
	return ;
}
