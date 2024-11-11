#include <iostream>
using namespace std;
int main(){
    long long x1,y1,x2,y2,x3,y3,x4,y4;
	long long w1,w2,w3,w4,w5,w6,w7,w8,w9,w10,w11,w12;
	while (cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4){
		w1=(x2-x1)*(y3-y1)-(x3-x1)*(y2-y1);//B.C-A
		w2=(x2-x4)*(y3-y4)-(x3-x4)*(y2-y4);//B.C-D
		
		w3=(x2-x4)*(y1-y4)-(x1-x4)*(y2-y4);//A.B-D
		w4=(x2-x3)*(y1-y3)-(x1-x3)*(y2-y3);//A.B-C
		
		w5=(x4-x2)*(y1-y2)-(x1-x2)*(y4-y2);//D.A-B
		w6=(x4-x3)*(y1-y3)-(x1-x3)*(y4-y3);//D.A-C
		
		w7=(x3-x1)*(y4-y1)-(x4-x1)*(y3-y1);//C.D-A
		w8=(x3-x2)*(y4-y2)-(x4-x2)*(y3-y2);//C.D-B
		
//		w9=(x3-x2)*(y1-x2)-(x1-x2)*(y3-y2);//A.C-B
//		w10=(x3-x4)*(y1-y4)-(x1-x4)*(y3-y4);//A.C-D
		
//		w11=(x2-x1)*(y4-y1)-(x4-x1)*(y2-y1);//B.D-A
//		w12=(x2-x3)*(y4-y3)-(x4-x3)*(y2-y3);//B.D-C
//		printf("%d,%d,%d,%d\n",w1,w2,w3,w4);
//		printf("%d,%d,%d,%d\n",w5,w6,w7,w8);
//		printf("%d,%d,%d,%d\n",w9,w10,w11,w12);
		if (w1*w2>0&&w3*w4>0&&w5*w6>0&&w7*w8>0) printf("yes\n");
		    else printf("no\n");
	}
	
	return 0;
}
//line2:936 440 700 117 258 811 952 491
//missed ones:
