#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int i,j;
	char p[100000];
	cin.getline(p,100000);
	int l=strlen(p);
	int minn=10000000,maxn=0;
	int a=0;
	int n=1;
	for(i=0;i<l;i++){
		if(p[i]!=',') a=a*10+p[i]-'0';
		else {
			n++;
			minn=min(minn,a);
			maxn=max(maxn,a);
			a=0;
		}
	}
	minn=min(minn,a);
	maxn=max(maxn,a);
	cout<<n<<'\n'<<maxn-minn<<endl;
}
