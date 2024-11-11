#include<iostream>
#define INF 500000;
using namespace std;
int d[502],m,n,best[502][502];
int os[502][502];
//os[i][j]  :the best result when building one school between i and j
int main(){
	cin>>m>>n;
	int i,j,dd;
	d[1]=0;
	for(i=2;i<=m;i++){
		cin>>dd;
		d[i]=d[i-1]+dd;//d[i]:distance between village i and i+1
	}
	int lastone[502][502],thisd,lastd,u,v;
	for(i=1;i<m;i++)
		for(j=i+1;j<=m;j++)
			os[i][j]=os[i][j-1]+d[j]-d[(i+j)/2];
/*	for(i=1;i<=m;i++){
		os[i][i]=0;
		lastone[i][i]=i;
		for(j=i+1;j<=m;j++){
			lastd=os[i][j-1]+d[j]-d[lastone[i][j-1]];
			thisd=0;
			for(u=i;u<j;u++)
				thisd+=d[j]-d[u];
			if(thisd>=lastd){
						os[i][j]=thisd;
						lastone[i][j]=i;
				}
			else{
				os[i][j]=lastd;
				lastone[i][j]=lastone[i][j-1];
			}
		}
	}
*/
	for(i=1;i<=m;i++)
		best[i][1]=os[1][i];
	for(i=1;i<=m;i++){
		for(j=2;j<=n&&j<=i;j++){
			best[i][j]=INF;
			for(int k=j-1;k<=i;k++){
				best[i][j]=min(best[i][j],best[k][j-1]+os[k+1][i]);
			}
		}		
	}
	cout<<best[m][n]<<endl;
	
	return 0;
}

/*
//wrong answer:the choice might affect the previous school arrange

#include<iostream>
using namespace std;
int d[502],m,n;
int best[502][502]{0};
int main(){
	cin>>m>>n;
	int i,j,dd;
	d[1]=0;
	for(i=2;i<=m;i++){
		cin>>dd;
		d[i]=d[i-1]+dd;//d[i]:distance between village i and i+1
	}
	int lastone[502][502]{0};
	int thisd,lastd,u;
	best[1][1]=0;
	lastone[1][1]=1;
	for(i=2;i<=m;i++){
		lastd=best[i-1][1]+d[i]-d[lastone[i-1][1]];
		thisd=0;
		for(j=1;j<i;j++){
			thisd+=d[i]-d[j];
		}
		if(thisd>=lastd){
			best[i][1]=thisd;
			lastone[i][1]=i;
		}
		else{
			best[i][1]=lastd;
			lastone[i][1]=lastone[i-1][1];
		}
	}
	
	for(j=2;j<=n;j++){
		lastone[j][j]=j;
		best[j][j]=0;
		for(i=j+1;i<=m;i++){
			lastd=best[i-1][j]+d[i]-d[lastone[i-1][j]];
			thisd=best[i-1][j-1];
			u=i-1;
			while(d[u]-d[lastone[i-1][j-1]]>d[i]-d[u]){
				thisd-=d[u]-d[lastone[i-1][j-1]];
				thisd+=d[i]-d[u];
				u--;
			}
			if(lastd>=thisd){
				//to build a new one in village i is better
				best[i][j]=thisd;
				lastone[i][j]=i;
			}
			else {
				best[i][j]=lastd;
				lastone[i][j]=lastone[i-1][j];
			}
		}
	}
	cout<<best[m][n]<<endl;
	return 0;
}
*/
