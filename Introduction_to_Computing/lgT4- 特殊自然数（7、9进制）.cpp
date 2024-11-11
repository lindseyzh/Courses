#include <iostream>
using namespace std;
int main(){
	int a,n,i,j;
	int s7[4]{0},s9[4]{0};
	cin>>a;
	for(i=1;i<=342;i++){//343=7*7*7
		s7[3]=i%7;
		s7[2]=i/7%7;
		s7[1]=i/49%7;
		s9[3]=i%9;
		s9[2]=i/9%9;
		s9[1]=i/81%9;
		if(s7[3]==s9[1]&&s7[2]==s9[2]&&s7[1]==s9[3]){
			switch(a){
				case 1:
					cout<<i<<endl;
					break;
				case 2:
					printf("%d%d%d",s7[1],s7[2],s7[3]);
					break;
				case 3:
					printf("%d%d%d",s9[1],s9[2],s9[3]);
					break;
			}
			break;
		}
	}	
	return 0;
}
