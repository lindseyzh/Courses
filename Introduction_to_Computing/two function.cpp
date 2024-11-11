#include <stdio.h>
void reply(void);
int main(void)
{
	int a,b,c;
	a = 3;
	b = 5;
	c = a+b;
	
	printf("hello,this is Mr.%d\n",a);
	reply();
	printf("hello,this is Mr.%d\n",b);
	reply();
	printf("hello,this is Mr.%d\n",c);
	reply();
	
	return 0;
}
void reply(void) //定义一个函数！
{
	printf("Nice to meet you!\n");
}
