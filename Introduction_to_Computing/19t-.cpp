#include <iostream>
using namespace std;
int main(){
	bool b[155]{0};
	int i,j,r;
	for(i=1;i<=150;i++){
		r=i;
		while(r<=150) {
			b[r]=!b[r];
			r+=i;
		}
	}
	int n=0;
	cout<<"N1";
	n++;
	for(i=2;i<=150;i++)
		if (b[i]){
			cout<<" N"<<i;
			n++;
		}
	cout<<endl;
	cout<<n<<endl;
	return 0;
}
