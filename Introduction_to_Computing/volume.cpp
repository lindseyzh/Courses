//volume
#include <stdio.h>
int main(void)
{
	float pint,glass,ounce,spoonful;
	
	printf("how many glasses of water have you got?\n");
	scanf("%f",&glass);
	pint= glass*.5;
	ounce= glass*8;
	spoonful = ounce*2;
	printf("%f pints\n",pint);
	printf("%f ounces\n",ounce);
	printf("%f spoonfuls\n",spoonful);
	
	return 0;
}
