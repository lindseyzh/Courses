#include <iostream>
#include <cstring>
using namespace std;
char s0[1002][22],s[1002][22],pf[1002][20],pf0[1002][20];//pf=prefix
int num[1002],i,j,n,sl[1002],pl[1002];//strlen,prefixlength
int main(){
	n=0;
	while(cin.getline(s[n],22)){
		n++;
		sl[n]=strlen(s[n]);
		for(i=0;i<sl[n];i++)
			s0[n][i]=s[n][i];
		s0[n][sl[n]]='\0';
		num[n]=n;
	}
	for(i=0;i<n;i++)
		for(j=1;j<n-i;j++)
			if(strcmp(s[j],s[j+1])>0){
				swap(s[j],s[j+1]);
				swap(sl[j],sl[j+1]);
				swap(num[j],num[j+1]);
			}
	for(i=1;i<=n;i++){
		j=0;
		while(1){
			if(s[i][j]!=s[i-1][j])
				break;
			j++;
			if(j==sl[i]) {
				j--;
				break;
			}
		}	
		pl[i]=j;
		while(1){
			if(s[i][j]!=s[i+1][j])
				break;
			j++;
			if(j==sl[i]) {
				j--;
				break;
			}
		}
		pl[i]=max(pl[i],j);
		for(j=0;j<=pl[i];j++)
			pf[i][j]=s[i][j];
		pf[i][pl[i]+1]='\0';
	}
//	for(i=1;i<=n;i++)
//		cout<<s[i]<<' '<<pf[i]<<endl;
//	cout<<endl;
	for(i=1;i<=n;i++)
		strcpy(pf0[num[i]],pf[i]);
	for(i=1;i<=n;i++)
		cout<<s0[i]<<' '<<pf0[i]<<endl;
	return 0;
}
