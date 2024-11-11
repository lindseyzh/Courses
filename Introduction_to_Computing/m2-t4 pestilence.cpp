#include <iostream>
using namespace std;
int r[102][102]{0};
int n,m,i,j,d;
void infect();
int main(){
	char c;
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++){
			cin>>c;
			switch(c){
				case '.':
					r[i][j]=1;//healthy inhabitant
					break;
				case '#':
					r[i][j]=0;//empty
					break;
				case '@':
					r[i][j]=2;//infective inhabitant
					break;	
			}
		}
	cin>>m;
	for(d=1;d<m;d++){
		infect();
	}
//	for(i=1;i<=n;i++){
//		for(j=1;j<=n;j++)
//			cout<<r[i][j]<<' ';
//		cout<<endl;
//	}
	int inf=0;//number of infected ones
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++){
			if(r[i][j]==2) inf++;
		}
	cout<<inf<<endl;
	return 0;
}

void infect(){
	int u,v;
	int tmr[102][102]{0};
	for(u=1;u<=n;u++)
		for(v=1;v<=n;v++)
			tmr[u][v]=r[u][v];
	for(u=1;u<=n;u++)
		for(v=1;v<=n;v++)
			if(r[u][v]==2){
				tmr[u][v]=2;
				if(r[u-1][v]==1) tmr[u-1][v]=2;
				if(r[u+1][v]==1) tmr[u+1][v]=2;
				if(r[u][v-1]==1) tmr[u][v-1]=2;
				if(r[u][v+1]==1) tmr[u][v+1]=2;
			}
	for(u=1;u<=n;u++)
		for(v=1;v<=n;v++){
			r[u][v]=tmr[u][v];
		}			
	return;
}
