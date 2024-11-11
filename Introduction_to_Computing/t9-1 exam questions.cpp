#include<iostream>
using namespace std;
int main(){
	int m,n,i,j;
	int a[1005]{0},t[1005]{0};
	cin>>m>>n;
	for(i=0;i<m;i++)
		scanf("%d,%d",&a[i],&t[i]);
	i=j=0;
	int tims=0,totaltim=0,firsti=0;
	int sum=0,maxsum=0;
	while(1){
		while(tims+t[j]<=n&&j<m) {
			tims+=t[j];
			sum+=a[j];
			j++;
		}
		if(sum>maxsum) {
			maxsum=sum;
			totaltim=tims;
			firsti=i;
		}
		if(sum==maxsum&&tims<totaltim){
			totaltim=tims;
			firsti=i;
		} 
		i++;
		j=i;
		tims=sum=0;
		if(j==m) break;
	}
	printf("%d:%d;%d\n",firsti+1,maxsum,totaltim);
		
	
	return 0;
}
