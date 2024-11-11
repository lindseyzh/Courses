#include <iostream>
using namespace std;
int r,c,i,j,a[105][105]{0};
bool b[105][105]{0};
int p;
void mov();
int main(){
	cin>>r>>c;
	for (i=1;i<=r;i++)
		for (j=1;j<=c;j++){
			cin>>a[i][j];
			b[i][j]=1;
		}
	i=1;
	j=1;
	if (c==1) p=2;
		else p=1;//1-right,2-down,3-left,4-up
	int s=r*c;
	do{
		printf("%d\n",a[i][j]);
		b[i][j]=0;
		mov();
		s--;
	}while (s>0);
	return 0;
}
void mov(){
	switch(p){
		case 1:
			j++;
			if (!b[i][j+1]) p=2;
			break;
		case 2:
			i++;
			if (!b[i+1][j]) p=3;
			break;
		case 3:
			j--;
			if (!b[i][j-1]) p=4;
			break;
		case 4:
			i--;
			if (!b[i-1][j]) p=1;
			break;
	}
}
