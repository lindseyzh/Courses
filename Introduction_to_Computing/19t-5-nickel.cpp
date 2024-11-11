#include <iostream>
using namespace std;
int main(){
	int n,k;
	int i,j;
	int a[100005];
	cin>>n>>k;
	long long sum0=0;
	for(i=0;i<n;i++){
		cin>>a[i];
		sum0+=a[i];
		}
	long long sum1=0;
	for(i=0;i<n-k;i++)
		sum1+=a[i];
	long long mins=sum1;
	for(i=0;i<k;i++){
		sum1=sum1-a[i]+a[i+n-k];
		if(sum1<mins) mins=sum1; 
	}
	cout<<sum0-mins<<endl;
	return 0;
}

/*
#include  <iostream>
using namespace std;
int main(){
	int n,k;
	int i,j;
	int a[100005];
	cin>>n>>k;
	for(i=0;i<n;i++)
		cin>>a[i];
	int l=1,r=n-1;//l-left,r-right
	int sum=a[0];
	for(i=0;i<k-1;i++){
		if(a[l]>a[r]){
			sum+=a[l];
//			cout<<a[l]<<0;
			l++;
		}
		else {
			sum+=a[r];
//			cout<<a[r]<<0;
			r--;
		}
	}
//	cout<<endl;
	cout<<sum<<endl;
	return 0;
}
*/
