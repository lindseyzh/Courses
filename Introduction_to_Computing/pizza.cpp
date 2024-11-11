/*pizza*/
#include <stdio.h>
#define PI 3.141593
int main()
{
	float radius,area,circumference;
	
	printf("the radius of your pizza:\n");
	scanf("%f",&radius);
	area = PI*radius*radius;
	circumference = PI*radius*2;
	printf("area:%f\n",area);
	printf("circumference:%f\n",circumference);
	printf("pi=%f",PI);
	
	return 0;
}
