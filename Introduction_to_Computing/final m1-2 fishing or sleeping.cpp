#include<iostream>
using namespace std;
int monthday[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};\
void fishing(int gap){
	if(gap%5<=2) cout<<"fishing"<<endl;
	else cout<<"sleeping"<<endl;
}
int leapyear(int y1,int y2){
	return (y1/4-y1/100+y1/400)-(y2/4-y2/100+y2/400);
}
int main(){
	int year,month,date;
	int gap=0;
	cin>>year>>month>>date;
	gap+=leapyear(year-1,1990-1);
//	cout<<"leapyear num"<<gap<<endl;
	if(year%4==0&&(year%100!=0||year%400==0))
			monthday[2]++;
	for(int m=1;m<month;m++)
		gap+=monthday[m];
	gap+=date;
	fishing(gap-1+5);
//	cout<<gap<<endl;
	return 0;
}

