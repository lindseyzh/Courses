#include<iostream>
using namespace std;
int sq[40];
bool prime[1002]{0};
bool qual(int,int,int);
bool with13[1000]{0};
	int lb,ub;
int main(){
	int i,j,k;
	cin>>lb>>ub;
	for(i=0;i<32;i++)
		sq[i]=i*i;
	for(i=2;i<=500;i++)
		if(!prime[i]){
			for(j=2*i;j<=1000;j+=i)
				prime[j]=1;
		}
	for(i=0;i<1000;i++){
		if(i%100==13) with13[i]=1;
		else if(i/10==13) with13[i]=1;
	}
	int num=0;
	int lbb=lb/1000000-1;
	int ubb=ub/1000000+1;
	for(i=lbb;i<=ubb;i++){
		if(!prime[i])
			if(!with13[i])
			for(j=1;j<32;j++)
				for(k=0;k<1000;k++)
					if(!with13[k])
						if(qual(i,k,sq[j])) {
//							cout<<i<<k<<sq[j]<<endl;
							num++;
						}
						
	}
	cout<<num<<endl;
	return 0;
}
bool qual(int i,int k,int j){
	if(i%10==1&&k/100==3) return 0;
	if(k%10==1&&j/100==3) return 0;
	int num=i;
	num=num*1000+k;
	num=num*1000+j;
	if(num<lb||num>ub) return 0;
	return 1;
}
