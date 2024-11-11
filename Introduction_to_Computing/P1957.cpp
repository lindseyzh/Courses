#include <iostream>//注意：1、数组从s[0]开始，因此要初始化51个
#include <string.h>//2、运算数最多4位，但结果可以8位数，故长度要大
#include <string>//初始化数组的时候还要预留结尾的'\0'，可以适当大一些安全
#include <stdio.h>//注意'\0'和' '不同，前者是字符串终结符，后者是空格
using namespace std;
int main() {
	int b,c,i,j,t,x;
	char a[5],s[51][20];
	cin >> i;          
	x=1;
	for (j = 1; j <= i; j++) {
		cin>>a;
		if (a[0]=='a') {
			x=1;
			cin>>b>>c;
		}
		else if (a[0]=='b') {
			x=2;
			cin>>b>>c;
		}
		else if (a[0]=='c') {//判断要==而非=，经常错
			x=3;
			cin>>b>>c;
		}
		else {
			sscanf(a,"%d",&b);//sscanf从字符串中读取，类似从输入中读取
			cin >> c;
		}
		for (t=0;t<=4;t++)
		switch (x) {
		    case 1:
				sprintf(s[j], "%d+%d=%d", b, c, b + c);
				break;//switch一定要有break！
			case 2:
				sprintf(s[j], "%d-%d=%d", b, c, b - c);
				break;//sprintf把内容打印到字符串里面，会覆盖原有内容
			case 3:
				sprintf(s[j], "%d*%d=%d", b, c, b * c);
				break;
		}
	}
	for (j = 1; j <=i; j++) {
		printf("%s\n", s[j]);//注意对多维字符串数组打印时，遇到'\'才停下
		printf("%d\n",strlen(s[j]));//所以之前内存不够的时候，打印会覆盖上一条内容
	}
	return 0;
	
}
