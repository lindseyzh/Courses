#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int n,i,j;
	float t;//temperature
	char na[10],nam[100][10];//name
	bool co;//coughing
	cin>>n;
	int m=0;
	for(i=0;i<n;i++){
		cin>>na>>t>>co;
		if(co&&(t>=37.5)){
			strcpy(nam[m],na);
			m++;
		}
	}
	for(i=0;i<m;i++)
		cout<<nam[i]<<'\n';
	cout<<m<<endl;
	return 0;
}
