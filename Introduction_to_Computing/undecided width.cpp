//undecided width
#include <stdio.h>
int main(){
	int width,num,precision;
	float x;
	
	puts("hello world");
	printf("expected width:\n");
	scanf("%d",&width);
	printf("number:\n");
	scanf("%d",&num);
	printf("precision:\n");
	scanf("%d",&precision);
	printf("float:\n");
	scanf("%f",&x);
	printf("output:\n+%*d+\n+%*.*f+",width,num,width,precision,x);
	
	return 0;
}
