#include<iostream>
#include<cstring>
using namespace std;
int findlen(int,int);
int r,c,h[102][102];
int len[102][102];
int mov[4][2]={0,1,0,-1,1,0,-1,0};
int main(){
	cin>>r>>c;
	int i,j;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			cin>>h[i][j];
	int maxlen=1;
	memset(len,0,sizeof(len));
	for(i=0;i<r;i++)
		for(j=0;j<c;j++){
			maxlen=max(maxlen,findlen(i,j));
		}
	cout<<maxlen<<endl;
	return 0;
}
int findlen(int x,int y){
	if(len[x][y]>0) return len[x][y];
	int maxlen=1;
	int xx,yy;
	for(int i=0;i<4;i++){
		xx=x+mov[i][0];
		yy=y+mov[i][1];
		if(xx<0||xx>=r||yy<0||yy>=c)
			continue;
		if(h[xx][yy]>h[x][y]){
			maxlen=max(maxlen,1+findlen(xx,yy));
		}
	}
	len[x][y]=maxlen;
	return maxlen;
}
