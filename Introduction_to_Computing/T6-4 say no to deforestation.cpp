#include <iostream>
using namespace std;
bool sq(int,int,int,int);
int m,n,i,j,u,v,i1,j1,w,l;
bool b[25][25]{0};
int main(){
	cin>>m>>n;
	for (i=1;i<=m;i++)
		for (j=1;j<=n;j++)
		    cin>>b[i][j];//i:row;j:column
	int s1,s=0;//the maximal s
	for (i=1;i<=m;i++)
		for (j=1;j<=n;j++){
			for (u=i;u<=m;u++)
				for (v=j;v<=n;v++)
					if 	(sq(i,j,u,v)){
						s1=(u-i+1)*(v-j+1);
						if (s1>s) s=s1;
					}
		}		
	cout<<s<<endl;	
			
	return 0;
}
bool sq(int x1,int y1,int x2,int y2){
	bool b1=1;
	for (int p=x1;p<=x2;p++)
		for (int q=y1;q<=y2;q++)
			if (b[p][q]) {
				b1=0;
				break;
			}
	return b1;
}
