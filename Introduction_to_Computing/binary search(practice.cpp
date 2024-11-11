#include<iostream>
using namespace std;
int main(){
	
	
	
	return 0;
}
/*
#include<iostream>
using namespace std;
int a[1002];
int bnsearch(int target,int n){
	int lf=0,rt=n-1,mid;
	while(lf<=rt){
		mid=(lf+rt)/2;
		if(a[mid]==target)
			return mid;
		if(a[mid]<target)
			lf=mid+1;
		else rt=mid-1;
	}
	return -1;
}
int main(){
	int n,target;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<bnsearch(target,n)<<endl;
	
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int a[1000],n;
int bnsearch(int num,int target){
	int lf=1,rt=num,mid;
	while(lf<=rt){
		mid=(lf+rt)/2;
		if(a[mid]==target) {
			while(a[mid]==target&&mid>0) 
				mid--;
			return mid+1;
		}
		else if(target>a[mid])
			lf=mid+1;
		else rt=mid-1;
	}
	return -1;
}
int main(){
	int target;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	cin>>target;;
	cout<<bnsearch(n,target)<<endl;
	return 0;
}
*/
