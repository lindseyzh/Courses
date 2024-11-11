//lg
#include <iostream>
using namespace std;
int main(){
	int m,n,k;
	int s[36][5000]={0};
	int p[5000]={0},t;
	int a,b,c,d,v;
	scanf("%d,%d,%d",&m,&n,&k);
	for(int i=m+1;i<n;i++){
		d=i%10;
		c=i/10%10;
		b=i/100%10;
		a=i/1000%10;
		v=a+b+c+d;
		if (v%k==0) {		
			t=v/k;//t:the group number of i
			p[t]+=1;//
			s[t][p[t]]=i;
		}
	}
	for(int i=1;i<=5000;i++){
		if (p[i]!=0){
			for(int j=1;j<=p[i]-1;j++){
				printf("%d,",s[i][j]);
			}
			printf("%d\n",s[i][p[i]]);
		}
	}
	return 0;
}
