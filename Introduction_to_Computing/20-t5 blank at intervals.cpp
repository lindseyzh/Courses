#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char t[1005],w[1000][1000];
	int n=0,i,j,p,bl=0;//n-num of words;bl-blanks
	cin.getline(t,1005);
	int l=strlen(t);
	i=l-1;
	int blf=0;
	while(t[i]==' '){
		i--;
		blf++;
	}
	i=0;
	do{
		while(t[i]==' '){
			i++;
			bl++;
		}
		p=0;
		while(t[i]!=' '){
			w[n][p]=t[i];
			i++;
			p++;
		}
		w[n][p]='\0';
		n++;
	}while(i<l-blf);
	bl+=blf;
	if(n==1){
		cout<<w[0];
		for(i=0;i<bl;i++)
			cout<<' ';
	}
	else{
	int bl1=bl/(n-1);
	for(i=0;i<n-1;i++){
		cout<<w[i];
		for(j=0;j<bl1;j++)
			cout<<' ';
	}
	cout<<w[n-1];
	blf=bl%(n-1);
	for(j=0;j<blf;j++)
		cout<<' ';
	}
	cout<<endl;
	return 0;
}
