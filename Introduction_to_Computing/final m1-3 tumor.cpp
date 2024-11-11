#include<iostream>
using namespace std;
int pic[1002][1002],n;
int main(){
	int i,j;
	cin>>n;
	int sx,sy,nx,ny;
	bool finds=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			cin>>pic[i][j];
			if(pic[i][j]==0&&!finds){
				sx=i;
				sy=j;
				finds=1;
			}
		}
	i=sx;
	while(i<n){
		i++;
		if(pic[i][sy]!=0)
			break;
	}
	nx=i-1;
	j=sy;
		while(j<n){
			j++;
			if(pic[sx][j]!=0)
				break;
		}
	ny=j-1;
//	cout<<sx<<' '<<sy<<' '<<nx<<' '<<ny<<endl;
	cout<<(nx-sx-1)*(ny-sy-1)<<endl;	
	return 0;
}
