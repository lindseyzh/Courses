#include<iostream>
#include<cstring>
using namespace std;
int n,ma[10][10],minmaxsum,maxsum;//maxsum i:the maxsum of first i rows
int sum[10][10];//sum j u:sum of the first u numbers in column j
void tryit(int);
int main(){
	int i,j;
	while(1){
		cin>>n;
		if(n==-1) return 0;
		memset(ma,0,sizeof(ma));
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				cin>>ma[i][j];
		minmaxsum=0;
		memset(sum,0,sizeof(sum));
		maxsum=0;
		tryit(1);
		cout<<minmaxsum<<endl;
	}
	return 0;
}
void tryit(int u){
	if(u==n+1){
		if(minmaxsum==0) minmaxsum=maxsum;
		else minmaxsum=min(minmaxsum,maxsum);
		return;
	}
	if(minmaxsum>0&&maxsum>minmaxsum) return;
	int v;
	for(int d=0;d<n;d++){//move left for d times
		maxsum=0;
		for(int j=1;j<=n;j++){
			v=(d+j)%n;
			if(v==0) v=n;
			sum[j][u]=sum[j][u-1]+ma[u][v];
			maxsum=max(sum[j][u],maxsum);		
		}
		tryit(u+1);
	}
	return;
}
