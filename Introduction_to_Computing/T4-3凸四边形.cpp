#include <iostream>
using namespace std;
int main(){
	//WA.the "lgT1" code is Ac.
	//the decision is required for every line
	long long x1,y1,x2,y2,x3,y3,x4,y4;
	long long w1,w2,w3,w4;
	while(cin>>x1){
		cin>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
		w1=(x3-x1)*(y3-y2)-(y3-y1)*(x3-x2);//A,B-C;
		w2=(x4-x1)*(y4-y2)-(y4-y1)*(x4-x2);//A,B-D;
		w3=(x2-x1)*(y2-y4)-(y2-y1)*(x2-x4);//A,D-B;
		w4=(x3-x1)*(y3-y4)-(y3-y1)*(x3-x4);//A,D-C;
		if(w1*w2>0&&w3*w4>0) cout<<"yes"<<endl;
			else cout<<"no"<<endl;
	}
	return 0;
}
