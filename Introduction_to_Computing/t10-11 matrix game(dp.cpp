#include<iostream>
#include<cstring>
using namespace std;
int n,m;
int a[82][82],maxscore[82][82]{0};
int findmax(int*,int,int,int);
int main(){
	int i,j;
	cin>>n>>m;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>a[i][j];
	int score=0;
	for(i=0;i<n;i++){
		memset(maxscore,0,sizeof(maxscore));
		score+=findmax(a[i],0,m-1,1);
	}
	cout<<score<<endl;
	return 0;
}
int findmax(int* s,int lf,int rt,int tms){
	if(maxscore[lf][rt]>0) 
		return maxscore[lf][rt];
	if(lf==rt) return tms*s[lf];
	maxscore[lf][rt]=max(s[lf]*tms+findmax(s,lf+1,rt,tms+1),
		s[rt]*tms+findmax(s,lf,rt-1,tms+1));
	return maxscore[lf][rt];
}
