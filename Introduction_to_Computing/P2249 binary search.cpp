#include<iostream>
using namespace std;
int a[100002];
int binarysearch(int num,int target){
	int lf=0,rt=num-1,mid;
	while(lf<=rt){
		mid=(lf+rt)/2;
		if(a[mid]==target) {
			while(a[mid]==target&&mid>=0) mid--;
			return mid+1;
		}
		else if(a[mid]<target){
			lf=mid+1;
		}
		else{
			rt=mid-1;
		}
	}
	return -1;
}
int main(){
	int n,m,target,p;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	cin>>target;
	p=binarysearch(n,target);
	if(p!=-1)
		cout<<p+1;
	else cout<<-1;
	
	for(int i=1;i<m;i++){
		cin>>target;
		p=binarysearch(n,target);
		if(p!=-1)
				cout<<' '<<p+1;
			else cout<<' '<<-1;
	}
	cout<<endl;
	return 0;
}
