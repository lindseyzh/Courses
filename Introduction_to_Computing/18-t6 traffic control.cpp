#include <iostream>
using namespace std;
int day();
int n,ye,mo,da;//year-month-day
char c[8],f;//final number
int main(){
	int i,j;
	cin>>n;
	for(i=0;i<n;i++){
		scanf("%d-%d-%d",&ye,&mo,&da);
		cin>>c;
		f=c[5];
		switch(day()){
			case 1:
				if(f=='1'||f=='6') cout<<"yes"<<endl;
				else cout<<"no"<<endl;
				break;
			case 2:
				if(f=='2'||f=='7') cout<<"yes"<<endl;
				else cout<<"no"<<endl;
				break;
			case 3:
				if(f=='3'||f=='8') cout<<"yes"<<endl;
				else cout<<"no"<<endl;
				break;
			case 4:
				if(f=='4'||f=='9') cout<<"yes"<<endl;
				else cout<<"no"<<endl;
				break;
			case 5:
				if(f=='5'||f=='0'||f>='A'&&f<='Z') cout<<"yes"<<endl;
				else cout<<"no"<<endl;
				break;
			case 6:
			case 0:
				cout<<"no"<<endl;
				break;
		}
	}
	return 0;
}
int day(){
	int md[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int d=0;
	int u,v;
	ye-=2000;
	int lasy=ye-1;
	if(ye%4==0&&(ye%100!=0||ye%400==0))
		md[2]++;//leap year
	d+=ye;//365%1==1
	d+=lasy/4-lasy/100+lasy/400;
	for(u=0;u<mo;u++)
		d+=md[u];
	d+=da-1;
	d%=7;
	return d;	
}
