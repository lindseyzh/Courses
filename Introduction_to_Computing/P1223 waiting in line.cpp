#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	long long n,t[1005],num[1005],i,j;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>t[i];
		num[i]=i;
		}
		
	//calculate
	for(i=0;i<n-1;i++)
		for(j=1;j<=n-1-i;j++)
			if(t[j]>t[j+1]){
				swap(t[j],t[j+1]);//t1>t2>..>tn
				swap(num[j],num[j+1]);
				}
	long long sumt=0;
	for(i=1;i<=n;i++)
		sumt+=(n-i)*t[i];
	double ave=1.0*sumt/n;
	
	//output
	cout<<num[1];
	for(i=2;i<=n;i++)
		cout<<' '<<num[i];
	cout<<endl;
	cout<<fixed<<setprecision(2)<<ave<<endl;
	
	return 0;
}
