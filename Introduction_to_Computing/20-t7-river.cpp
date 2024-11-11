#include <iostream>
using namespace std;
int n,t,i,j,ti[1002];
int tim(int);
int main(){
	cin>>t;
	for(int k=0;k<t;k++){
		int ts=0;
		cin>>n;
		for(i=0;i<n;i++)
			cin>>ti[i];
		for(i=0;i<n-1;i++)
			for(j=0;j<n-1-i;j++)
				if(ti[j]>ti[j+1]) 
					swap(ti[j],ti[j+1]);
		ts+=tim(n);
		cout<<ts<<endl;
	}
	return 0;
}
int tim(int m){
	if (m<=2) return ti[m-1];//ending
	int w=0,u;
	for(u=1;u<m;u+=2)
		w+=ti[u];
	for(u=0;u<m/2;u++)
		w+=ti[u];
	if(m%2==1) {
		u=(m+1)/2;
		ti[u-1]=ti[m-1];
	}
	return w+tim(u);
}
