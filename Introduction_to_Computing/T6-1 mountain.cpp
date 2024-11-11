#include <iostream>
using namespace std;
bool ye(int,int);
int m,n,i,j;
long long a[25][25]{0};
int main(){
	cin>>m>>n;
	for (i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	for (i=0;i<m;i++)
			for(j=0;j<n;j++)
				if (ye(i,j)) cout<<i<<' '<<j<<endl;
	return 0;
}
bool ye(int x,int y){
	long long s=a[x][y];
	bool b=1;
	if (x>0)
		if (a[x-1][y]>s) b=0;
	if (y>0)
		if (a[x][y-1]>s) b=0;
	if (a[x][y+1]>s) b=0;
	if (a[x+1][y]>s) b=0;
	return b;
}
