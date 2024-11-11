#include<iostream>
#include <cmath>
using namespace std;
int main(){
	int n,x[11],y[11],z[11];
	int se[50][2];
	float d[50];
	int i,j,v,m;
	int x1,y1,z1,x2,y2,z2;//for the convenience of output
	cin>>n;
	m=n*(n-1)/2;//the number of lines
	for (i=0;i<n;i++)
		cin>>x[i]>>y[i]>>z[i];//coordinate:0~n-1
	v=0;
	for(i=0;i<n-1;i++)//point i and point j(i<j)
		for(j=i+1;j<n;j++){
			se[v][1]=i;
			se[v][2]=j;
			x1=x[i];
			y1=y[i];
			z1=z[i];
			x2=x[j];
			y2=y[j];
			z2=z[j];
			d[v]=sqrt(pow(x1-x2,2)+pow(y1-y2,2)+pow(z1-z2,2));
			v++;
		}
	for(i=0;i<m-1;i++)
		for(j=0;j<m-i-1;j++)
			if (d[j]<d[j+1]){
				swap(d[j],d[j+1]);
				swap(se[j][1],se[j+1][1]);
				swap(se[j][2],se[j+1][2]);
			}
			
	for(i=0;i<m;i++){
		x1=x[se[i][1]];
		y1=y[se[i][1]];
		z1=z[se[i][1]];
		x2=x[se[i][2]];
		y2=y[se[i][2]];
		z2=z[se[i][2]];
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",x1,y1,z1,x2,y2,z2,d[i]);
	}
	return 0;
}
