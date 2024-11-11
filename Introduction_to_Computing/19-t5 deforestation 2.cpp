#include <iostream>
using namespace std;
bool emp();
	int m,n,s=0,ss,i,j,u,v,uu,vv;
	bool b[22][22];
int main(){
	cin>>m>>n;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>b[i][j];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		if(!b[i][j]){
			for(u=i;u<m;u++)
				for(v=j;v<n;v++)
				if(emp()) s=max(s,(v-j+1)*(u-i+1));
		}
	cout<<s<<endl;
	return 0;
}
bool emp(){
	bool b1=1;
	int p,q;
	for(p=i;p<=u;p++)
		for(q=j;q<=v;q++)
		if(b[p][q]){
			b1=0;
			break;
		}
	return b1;
}
