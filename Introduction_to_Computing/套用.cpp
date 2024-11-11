//Ì×ÍÞ£¡
#include <stdio.h>
void onethree(void);
void two(void);
int main(void)
{
	printf("begin!\n");
	onethree();
	printf("done!");
	return 0;	
}

void onethree(void)
{
	printf("one\n");
	two();
	printf("three\n");
}

void two(void)
{
	printf("two\n");
}
