#include <iostream>
using namespace std;
char bd[10][10];
bool row[10]{0},col[10]{0};//row&column,available=0;
int n,k,sol=0;//sol=solution
void tryit(int x,int lasr){
	if(x==k){
		sol++;
		return;
	}
	if(lasr==n-1) return;
	for(int i=lasr+1;i<n;i++)
		for(int j=0;j<n;j++){
			if(bd[i][j]=='#'&&!col[j])
				{
					col[j]=1;
					tryit(x+1,i);
					col[j]=0;
				}
			}
	return;
}
int main(){
	int i,j;
	while(1){
	cin>>n>>k;
	if(n==-1) break;
	
	//initialize
	for(i=0;i<n;i++)
		row[i]=0,col[i]=0;
	sol=0;
	
	//input
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>bd[i][j];
	//recurrence
	
	tryit(0,-1);
	cout<<sol<<endl;
	}
	return 0;
}
