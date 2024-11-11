#include <iostream>
using namespace std;
int main(){
	int a,b,c;//the relative appetite of a,b,c
	int aw,bw,cw;//the numbers of correct sentences of a,b,c
	int s[4];//result
	char ch[4];
	bool b1,b2,b3;
	for(a=1;a<=3;a++)
		for(b=1;b<=3;b++)
			for(c=1;c<=3;c++){
				aw=(b>a)+(c==a);
				bw=(a>b)+(a>c);
				cw=(c>b)+(b>a);
				b1=((a-b)*(aw-bw)<0);
				b2=((b-c)*(bw-cw)<0);
				b3=((c-a)*(cw-aw)<0);
				if (b1&&b2&&b3) {
					s[1]=a;
					s[2]=b;
					s[3]=c;
					ch[1]='A';
					ch[2]='B';
					ch[3]='C';
					break;
				} 
			}
	int i,j;
	for (i=1;i<3;i++)
		for(j=i+1;j<=3;j++)
			if(s[i]>s[j]) {
				swap(s[i],s[j]);
				swap(ch[i],ch[j]);
			}
	printf("%c%c%c",ch[1],ch[2],ch[3]);
	
	return 0;
}
