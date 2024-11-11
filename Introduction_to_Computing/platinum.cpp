//platinum
#include <stdio.h>
int main(void)
{
	float w=1.0;
	float value;
	
	printf("Enter your weight:");
	scanf("%f",&w);
	value = 1700.0*w*14.58;
	printf("Your weight in platinum is worth $%.2f.\nThat's not bad!",value);
	
	return 0;
}
