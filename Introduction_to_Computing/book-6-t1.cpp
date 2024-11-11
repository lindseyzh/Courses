#include <iostream>
using namespace std;
int main(){
	int g,k,m,n;
	int i,j,r,v;
	cin>>g;
	for(r=1;r<=g;r++){
		int a[102][102]{0},b[102][102]{0},c[102][102]{0};
	//to initialize,sweep away the last result
		cin>>n>>m>>k;
		for (i=0;i<n;i++) 
			for (j=0;j<m;j++)
				cin>>a[i][j];
		for (i=0;i<m;i++) 
			for (j=0;j<k;j++)
				cin>>b[i][j];
		for (i=0;i<n;i++) 
			for (j=0;j<k;j++)
			    for (v=0;v<m;v++)
				c[i][j]+=a[i][v]*b[v][j];
		for (i=0;i<n;i++) {
			printf("%d",c[i][0]);
			for(j=1;j<k;j++)
			    printf(" %d",c[i][j]);
			printf("\n");
		}
	}
	return 0;
}
