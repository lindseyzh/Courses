#include <iostream>
using namespace std;
int main(){
	int s[6][6];
	int rmax[6]{0},cmin[6];
	int rmaxp[6]{0},cminp[6]{0};
	int i,j;
	for (i=0;i<5;i++)
		for (j=0;j<5;j++){
			cin>>s[i][j];
			if (rmax[i]<s[i][j]) {
				rmax[i]=s[i][j];
				rmaxp[i]=j;//the maximul element in row i is s[i][j];
			}
		}
	for (j=0;j<5;j++){
		cmin[j]=s[0][j];
		for (i=0;i<5;i++)
			if (cmin[j]>s[i][j]) {
				cmin[j]=s[i][j];
				cminp[j]=i;
			}
	}
//	for (i=0;i<5;i++)
//		printf("%6d,%6d ",rmax[i],rmaxp[i]);
//	cout<<endl;
//	for (j=0;j<5;j++)
//		printf("%6d,%6d ",cmin[j],cminp[j]);
//	cout<<endl;
	bool b=0;
	for (i=0;i<5;i++){
		if (cminp[rmaxp[i]]==i){
			b=1;
			printf("%d %d %d\n",i+1,rmaxp[i]+1,rmax[i]);
		}
	}
	if (!b) cout<<"not found"<<endl;
	return 0;
}
