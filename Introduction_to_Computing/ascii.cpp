//char and float
#include <stdio.h>
int main(){
	char a;
	int num;
	float b=3.141e+5;
	double d=3.14159e-5;
	
	printf("the ASCII number:\n");
	scanf("%d",&num);
	a = num;
	printf("the Char:%c\n",a);
	
	printf("%.4f can also be written %.4e\n",b,b);
	printf("%f can also be written %e\n",d,d);
	printf("it's %a in hexadecimal!\n",d);
	
	return 0;
}
	
