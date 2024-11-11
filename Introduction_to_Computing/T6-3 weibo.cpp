#include <iostream>
using namespace std;
int n,a,b,k,i,j;
int s[105];//s[i]:the referred time of i
bool nam[105][105]{0};//nam[i][j]:the people who refer to i
int main(){
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>a>>k;
		for (j=0;j<k;j++){
			cin>>b;
			s[b]++;
			nam[b][a]=1;
		}
	}
	int nm,M=0;//nm:the target
	for (i=1;i<=100;i++)
		if (s[i]>M){
			M=s[i];
			nm=i;
		}
	cout<<nm<<endl;
	for (j=1;j<=100;j++)
		if (nam[nm][j]) {
			printf("%d",j);
			break;
		}
	for (j=j+1;j<=100;j++)
		if (nam[nm][j]) printf(" %d",j);
	return 0;
}
