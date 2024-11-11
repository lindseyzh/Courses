//solution 2: recurrence with pruning(timeout))
#include<iostream>
#include<iomanip>
using namespace std;
int n;
double v[102],w[102];
double r[102];
void findit(double,int,double);
void qusort(int lf,int rt){
	if(lf>=rt) return;
	int i=lf,j=rt;
	double temp=r[lf],t;
	while(i<j){
		while(r[j]<=temp&&i<j) j--;
		while(r[i]>=temp&&i<j) i++;
		t=r[i];
		r[i]=r[j];
		r[j]=t;
		t=v[i];
		v[i]=v[j];
		v[j]=t;
		t=w[i];
		w[i]=w[j];
		w[j]=t;
	}
	r[lf]=r[i];
	r[i]=temp;
	t=v[i];
			v[i]=v[lf];
			v[lf]=t;
	t=w[i];
			w[i]=w[lf];
			w[lf]=t;
	qusort(lf,i-1);
	qusort(i+1,rt);
	return;
}
double best=0;
int main(){
	int i,j;
	double m;
	cin>>n>>m;
	for(i=0;i<n;i++){
		cin>>w[i]>>v[i];
		r[i]=v[i]/w[i];
	}
	qusort(0,n-1);
	findit(m,0,0);
	cout<<fixed<<setprecision(5)<<best<<endl;
	return 0;
}
void findit(double m,int i,double value){
	if(i==n) {
		if(best<value) best=value;
		return;
	}
	int j;
	for(j=i;j<n;j++){
		if(m>=w[j]){
			if(best>0&&value+v[j]+r[j]*(m-w[j])<=best) 
				break;//cut
			findit(m-w[j],j+1,value+v[j]);
		}
	}
	findit(m,i+1,value);
	return;
}

/*
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int n,mm;
float m,v[102],w[102];
float dp[102][102];//dp[w][j]
int main(){
	cin>>n>>m;
	int i,j;
	for(i=1;i<=n;i++)
		cin>>w[i]>>v[i];
	memset(dp[0],0,sizeof(dp[0]));
	mm=floor(m);
	float thisdp;
	for(i=1;i<=mm;i++){
		dp[i][0]=0;
		for(j=1;j<=n;j++){
			thisdp=dp[i][j-1];
			if(i+m-mm>=w[j])
				thisdp=max(thisdp,v[j]+dp[int(i+m-mm-w[j])][j-1]);
			dp[i][j]=thisdp;
		}
	}
	printf("%.5f\n",dp[mm][n]);
	return 0;
}
*/
/*
8 15.8222
1.92308    3.66667
0.795455   30.6667
1.15217    8.25
1.61538    29.3333
2.5        31
3.17647    3
9          49
13.6667    2.5

*/
