//"limit and float"
#include <stdio.h>
#include <limits.h>
#include <float.h>
#define PI 3.14159
#define P 314159
#define A "the lord of mysteries"
int main(void)
{
	printf("int:%d and %d\n",INT_MAX,INT_MIN);
	printf("longlong:%d and %d\n",LONG_MAX,LONG_MIN);
	printf("double:%e and %e\n",DBL_MAX,DBL_MIN);
	printf("float precision:%e\n",FLT_DIG);
	printf("%c\n%c\n",'$','%');
	
	printf("%f\n%+.6f\n",PI,PI,PI);
	
	printf("*%-8d*\n*%8d*\n*%6d*\n",P,P,P);
	
	printf("*%24s*\n*%-24s*\n*%24.5s*\n*%-24.5s*\n%c",A,A,A,A,A);
	
	return 0;
}
