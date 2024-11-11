#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int n,m[105],v[105],t;
	float q[105];
	int i,j;
	cin>>n>>t;
	for(i=0;i<n;i++){
		cin>>m[i]>>v[i];
		q[i]=1.0*v[i]/m[i];
	}
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++){
			if(q[j]<q[j+1]){
				swap(q[j+1],q[j]);
				swap(m[j+1],m[j]);
				swap(v[j+1],v[j]);
			}
			if(q[j+1]==q[j]&&m[j+1]<m[j]){
				swap(m[j+1],m[j]);
				swap(v[j+1],v[j]);
			}
		}
	int bag=0;
	float val=0;//total value
	i=0;
	bool dvd=0;//devide
	while(1){
		bag+=m[i];
		if(bag>t)	{
			bag-=m[i],dvd=1;
			break;
		}
		val+=v[i];
//		cout<<m[i]<<','<<v[i]<<endl;
		if(bag==t) 
			break;
		i++;
		if(i==n) 
			break;
	}
	if(dvd)
		val+=1.0*v[i]*(t-bag)/m[i];
	
	cout<<fixed<<setprecision(2)<<val<<endl;
	return 0;
}
