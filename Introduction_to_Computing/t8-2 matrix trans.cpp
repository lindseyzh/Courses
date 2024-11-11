#include <iostream>
using namespace std;
void cal(int);
//void opm();
int ma[102][102],sum,n;
bool derow[102],decol[102];
int main(){
	int i,j,u,v;
	cin>>n;
	for(v=0;v<n;v++){
		sum=0;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				cin>>ma[i][j];
		for(i=0;i<n;i++)
			derow[i]=decol[i]=0;
		for(i=n;i>1;i--){
			cal(i);
		}
		cout<<sum<<endl;
	}
	return 0;
}
void cal(int a){
	int i,j;
	int minnum,rowmin,colmin;
	for(i=0;i<n;i++){//row i
		if(!derow[i]){
			rowmin=ma[i][0];
			for(j=1;j<n;j++)
				if(!decol[j])
					rowmin=min(rowmin,ma[i][j]);
			ma[i][0]-=rowmin;
			for(j=n-a+1;j<n;j++)
				ma[i][j]-=rowmin;
		}
	}
	
//	opm();
	
	for(j=0;j<n;j++){//row i
			if(!decol[j]){
				colmin=ma[0][j];
				for(i=n-a+1;i<n;i++)
					if(!derow[i])
						colmin=min(colmin,ma[i][j]);
				ma[0][j]-=colmin;
				for(i=n-a+1;i<n;i++)
					ma[i][j]-=colmin;
			}
		}
	sum+=ma[n-a+1][n-a+1];
	derow[n-a+1]=1;
	decol[n-a+1]=1;
	
//	opm();
	
	return;
}
/*
void opm(){
		cout<<"========"<<endl;
		for(int u=0;u<n;u++){
					for(int j=0;j<n;j++)
						cout<<ma[u][j]<<' ';
					cout<<endl;
				}
}


9
5 56 52 53 47 11 2 1 68
56 44 31 27 42 2 51 53 21
52 72 54 14 39 39 9 52 75
38 28 69 73 65 49 42 35 19
74 39 81 59 67 30 45 8 73
22 59 47 39 33 66 21 12 65
15 11 63 22 71 9 13 10 11
63 39 36 75 44 78 50 68 3
58 67 11 76 71 18 69 9 74
*/
