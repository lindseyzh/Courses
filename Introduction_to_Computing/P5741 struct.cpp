#include<iostream>
#include<cstring>
using namespace std;
struct student{
	char name[10];
	int a,b,c;
};
student stu[1002];
int main(){
	int n;
	cin>>n;
	int i,j,d1,d2,d3,d;
	for(i=0;i<n;i++)
		cin>>stu[i].name>>stu[i].a>>stu[i].b>>stu[i].c;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++){
			if(i==j) continue;
			d1=stu[i].a-stu[j].a;
			if(d1<-5||d1>5) continue;
			d2=stu[i].b-stu[j].b;
			if(d2<-5||d2>5) continue;
			d3=stu[i].c-stu[j].c;
			if(d3<-5||d3>5) continue;	
			d=d1+d2+d3;
			if(d>10||d<-10) continue;
			cout<<stu[i].name<<' '<<stu[j].name<<endl;					
		}
	
	
	return 0;
}
