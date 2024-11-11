#include<iostream>
#include<cmath>
using namespace std;
int n,xx[1005],yy[1005],r[1005];
float dist(int,int,int,int);
int main(){
	int i,j;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>xx[i]>>yy[i]>>r[i];
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++){
			if(dist(xx[i],yy[i],xx[j],yy[j])<r[i]+r[j]){
				cout<<"Yes"<<endl;
				return 0;
			}
		}
	cout<<"No"<<endl;
	return 0;
}
float dist(int xi,int yi,int xj,int yj){
	int dx=xi-xj;
	int dy=yi-yj;
	return sqrt(pow(1.0*dx,2)+pow(1.0*dy,2));
}
