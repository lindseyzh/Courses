#include <iostream>
using namespace std;
int stair[500][500]{0};
void walk(int);
int main(){
	int n;
	cin>>n;
	stair[1][0]=1;
	stair[2][0]=2;
	int l=1;
	for(int j=3;j<=n;j++){
		for(int i=0;i<l;i++){
		stair[j][i]+=stair[j-1][i]+stair[j-2][i];
		if(stair[j][i]>=10) 
			stair[j][i]-=10,stair[j][i+1]+=1;
		}
		if(stair[j][l]>0) l++;
	}
	for(int i=l-1;i>=0;i--)
		cout<<stair[n][i];
	cout<<endl;
	return 0;
}
