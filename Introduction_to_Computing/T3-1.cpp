#include <iostream>
using namespace std;
int main(){
	int z,q,s,l,z1,q1,s1,l1,a[4],i,j;
	char c[4],d;
	for (q=30;q<=50;q+=10){
		for (z=10;z<=50;z+=10){
			for (s=10;s<=50;s+=10){
				for (l=10;l<=50;l+=10){
					if (z+q==s+l&&z+l>s+q&&z+s<q&&z!=q&&z!=s&&z!=l&&q!=s&&q!=l&&s!=l)
					   {z1=z;q1=q;s1=s;l1=l;
					   break;}
					}
				}
			}
		}
	a[1]=z1;c[1]='z';
	a[2]=q1;c[2]='q';
	a[3]=s1;c[3]='s';
	a[4]=l1;c[4]='l';
	for (i=1;i<=3;i++){
		for (j=i+1;j<=4;j++){
			if (a[i]<a[j]) {
				q=a[i];a[i]=a[j];a[j]=q;
				d=c[i];c[i]=c[j];c[j]=d;
			}
		}
	}
	for (i=1;i<=4;i++)	printf("%c %d\n",c[i],a[i]);	
	return 0;
}
