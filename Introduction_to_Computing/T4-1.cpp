#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
bool primen(int);
int m,k,i;
int main(){
	i=1;
	cin>>m>>k;
	while(i<k){
		m+=1;
		if (primen(m)) {
			printf("%d ",m);
			i++;
		}
	}
	while(1){
			m+=1;
			if (primen(m)) {
				cout<<m<<endl;
				break;
			}
		}
	
	return 0;
}
bool primen(int w){
	int v=(int) floor(sqrt(w));
	bool b=1;
	for (int j=2;j<=v;j++){
		if (w%j==0){
			b=0;
			break;
		}
	}
	return b;
}
