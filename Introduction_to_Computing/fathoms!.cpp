//this is a transforming program
#include <stdio.h>
int main(void)
{
	int feet,fathoms;
	
	fathoms = 3;
	feet = 6*fathoms;
	printf("fathoms:%d\n",fathoms);
	printf("feet:%d\n",feet);
	printf("Yes,I said %d feet,%d fathoms!",fathoms*6,fathoms);
	
	return 0;
}
