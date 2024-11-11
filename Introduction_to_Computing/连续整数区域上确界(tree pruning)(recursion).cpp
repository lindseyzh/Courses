#include<iostream>
#include<cstring>
using namespace std;
void take(int,int);
bool num[5000];
bool numtake[5000][20];
int n,k,a[25];
int main(){
	int i;
	scanf("%d,%d",&n,&k);
	while(1){
		for(i=0;i<n;i++)
			cin>>a[i];
		if(a[0]==0) break;
		memset(num,0,sizeof(num));
		memset(numtake,0,sizeof(numtake));
		take(0,0);
		i=1;
		while(num[i]) i++;
		cout<<i-1<<endl;
	}
	return 0;
	
}
void take(int v,int sum){
	if(v==k) return;
	int r;
	for(int i=0;i<n;i++){
		r=sum+a[i];
		if(!numtake[r][v])//important tree pruning
			take(v+1,r);
		num[r]=1;
		numtake[r][v]=1;
	}
	return;
}
