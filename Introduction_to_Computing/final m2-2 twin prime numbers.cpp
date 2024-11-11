#include<iostream>
using namespace std;
bool cnum[10002]{0};//composite number
int main(){
	int i,j,m;
	cin>>m;
	for(i=2;i<=m/2;i++){
		if(!cnum[i])
			for(j=2*i;j<=m;j+=i)
				cnum[j]=1;
	}
	int num=0;
	int twin[4];
	for(i=m;i>=2;i--)
		if(!cnum[i]&&!cnum[i-2])
			break;
	cout<<i-2<<' '<<i<<endl;
	return 0;
}
