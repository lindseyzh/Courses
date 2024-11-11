#include<iostream>
using namespace std;
int s[20],n;
bool getit=0;
void tryit(int,int);
int main(){
	int t,nn,a;
	cin>>t>>nn;
	n=0;
	while(nn){
		cin>>a;
		if(a==t) getit=1;
		if(a>=2&&t%a==0){
			s[n]=a;
			n++;
		}
		nn--;
	}
	tryit(n-1,t);
	
	if(getit) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}

void tryit(int i,int t){
	if(s[i]==t) {
		getit=1;
		return;
	}
	for(int j=i;j>=0;j--)
		if(t%s[j]==0){
			tryit(j-1,t/s[j]);
			if(getit) return;	
		}
	return;
}
