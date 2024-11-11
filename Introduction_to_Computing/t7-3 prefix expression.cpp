#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdlib>
using namespace std;
double a[1000]{0};
char s[10000],ss[1000][20];
int ls[1000]{0};
int na=0,ns=0;
int main(){
	int i,j,u;
	
	//input
	cin.getline(s,10000);
	int l=strlen(s);
	i=0;
	do{
		j=i;
		while(s[j]!=' '&&j<l) j++;
		ls[ns]=j-i;
		for(u=0;u<ls[ns];u++)
			ss[ns][u]=s[u+i];
		ss[ns][ls[ns]]='\0';
		ns++;
		i=j+1;
	}while(i<l);
//	for(i=0;i<ns;i++)
//		cout<<ss[i]<<endl;
	
	
	for(i=ns-1;i>=0;i--){
		if(ls[i]==1&&(ss[i][0]<'0'||ss[i][0]>'9')){
			switch(ss[i][0]){
				case'+':
					a[na-2]=a[na-1]+a[na-2];
					break;
				case'-':
					a[na-2]=a[na-1]-a[na-2];
					break;
				case'*':
					a[na-2]=a[na-1]*a[na-2];
					break;
				case'/':
					a[na-2]=a[na-1]/a[na-2];
					break;
			}
			na--;
		}
		else {
			a[na]=atof(ss[i]);
			na++;
		}
	}
	printf("%f\n",a[0]);
	return 0;
}
