//charcode
#include <stdio.h>
int main(void)
{
	char a,b,c,d;
	a = '\a';
	b = 65;
	c = 'A';
	printf("a:%d,%c\n",a,a);
	printf("b:%d,%c\n",b,b);
	printf("c:%d,%c\n",c,c);
	printf("your char:");
	scanf("%c",&d);
	printf("d:%d,%c",d,d);
	
	return 0 ;
}
