#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int r,c,i,j,v;
int t[11][11]{0};
bool b[11][11];
string s;
int l;//strlen
int p;//1-right,2-down,3-left,4-up;
char a;
void mov();
int main(){
	cin>>r>>c;
	getline(cin,s);
	getline(cin,s);
	l=strlen(s.c_str());
	for (i=0;i<=10;i++)
	    for (j=0;j<=10;j++)
	        b[i][j]=1;
	for (i=1;i<=r;i++)
		for (j=1;j<=c;j++)
			b[i][j]=0;
	//initialization:1=unavailable,0=available
	
	p=1;		
	i=1;
	j=1;
	for (int k=0;k<l;k++){
		if (s[k]==' ') v=0;
		    else v=(int)s[k]-64;
		if (v<=9) {
			t[i][j]=0;
			b[i][j]=1;
			mov();
			t[i][j]=v;
			b[i][j]=1;
			mov();
		}
		    else {
				t[i][j]=v/10;
				b[i][j]=1;
				mov();
				t[i][j]=v%10;
				b[i][j]=1;
				mov();
			}
	}
//	for (i=0;i<=10;i++){
//					for (j=0;j<=10;j++)
//				printf("%d",t[i][j]);
//			printf("\n");
//		}
	for (i=1;i<=r;i++){
		for (j=1;j<=c;j++)
			printf("%d",t[i][j]);
//        printf("\n");
	}
	
	return 0;
}
void mov(){
	switch(p){
		case 1:
			j++;
			if (b[i][j+1]) p=2;
			break;
		case 2:
			i++;
			if (b[i+1][j]) p=3;
			break;
		case 3:
			j--;
			if (b[i][j-1]) p=4;
			break;
		case 4:
			i--;
			if (b[i-1][j]) p=1;
			break;
	}		
}
