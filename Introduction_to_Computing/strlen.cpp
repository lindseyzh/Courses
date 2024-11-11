//weight and volume,name
#include <stdio.h>
#include <string.h>
#define DENSITY 62.4
int main()
{
	float w,v;
	int size,letters;
	char name[20];
	
	printf("your first name:\n");
	scanf("%s",name);
	printf("And your weight in pounds?\n");
	scanf("%f",&w);
	
	v = w/DENSITY;
	size = sizeof(name);
	letters = strlen(name);
	
	printf("%s,your volume:%f cubic feet\n",name,v);
	printf("namelength:%d instead of %d\n",letters,size);
	printf("%d memory cells occupied",size);
	
	return 0;
	
}
