#include <iostream>//ע�⣺1�������s[0]��ʼ�����Ҫ��ʼ��51��
#include <string.h>//2�����������4λ�����������8λ�����ʳ���Ҫ��
#include <string>//��ʼ�������ʱ��ҪԤ����β��'\0'�������ʵ���һЩ��ȫ
#include <stdio.h>//ע��'\0'��' '��ͬ��ǰ�����ַ����ս���������ǿո�
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
		else if (a[0]=='c') {//�ж�Ҫ==����=��������
			x=3;
			cin>>b>>c;
		}
		else {
			sscanf(a,"%d",&b);//sscanf���ַ����ж�ȡ�����ƴ������ж�ȡ
			cin >> c;
		}
		for (t=0;t<=4;t++)
		switch (x) {
		    case 1:
				sprintf(s[j], "%d+%d=%d", b, c, b + c);
				break;//switchһ��Ҫ��break��
			case 2:
				sprintf(s[j], "%d-%d=%d", b, c, b - c);
				break;//sprintf�����ݴ�ӡ���ַ������棬�Ḳ��ԭ������
			case 3:
				sprintf(s[j], "%d*%d=%d", b, c, b * c);
				break;
		}
	}
	for (j = 1; j <=i; j++) {
		printf("%s\n", s[j]);//ע��Զ�ά�ַ��������ӡʱ������'\'��ͣ��
		printf("%d\n",strlen(s[j]));//����֮ǰ�ڴ治����ʱ�򣬴�ӡ�Ḳ����һ������
	}
	return 0;
	
}
