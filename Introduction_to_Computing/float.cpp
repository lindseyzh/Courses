#include <stdio.h>
int main(void)
{
	float a,b,c;
	a = 2.66e+3f;
	b = 3.2e+3f;
	c = 4.567e+4f;
	printf("a=%f\nb=%f\na+b=%f\n",a,b,a+b);
	printf("c=%f\n",c);
	printf("%d\n%d",sizeof(a),sizeof(float));
}
