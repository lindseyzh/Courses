#include <iostream>
#include <cstring>
#include <string>
using namespace std;
bool comp();
int n,i,j;
char s[505],ss1[5],ss[250][5];//ss:substring
int ts[250]{0};//times of one substring repeating
int main(){
	cin>>n;
	cin.getline(s,1);
	cin.getline(s,505);
	int l=strlen(s);
	int noss=0;//number of individual substrings
	for(i=0;i<l-n+1;i++){
		for(j=0;j<n;j++)
			ss1[j]=s[i+j];
		bool b=1;
		for(j=0;j<noss;j++)
			if (comp()){
				b=0;
				ts[j]++;
				break;
			}
		if(b){
			strcpy(ss[noss],ss1);
			ts[noss]++;
			noss++;
		}
	}
//	for(i=0;i<noss;i++)
//		cout<<ts[i];
//	cout<<endl;
	int tsmax=0;
	for(i=0;i<noss;i++)
		if(ts[i]>tsmax)
			tsmax=ts[i];
	int r[500];
	int p=0;
	if (tsmax!=1){
		for(i=0;i<noss;i++){
			if(ts[i]==tsmax){
				r[p]=i;
				p++;
			}
		}
		cout<<tsmax<<endl;
		for(i=0;i<p;i++)
			cout<<ss[r[i]]<<endl;
	}
	else cout<<"NO"<<endl;
	
	return 0;
}
bool comp(){
	bool b1=1;
	for(int k=0;k<n;k++)
		if (ss[j][k]!=ss1[k])	{
			b1=0;
			break;
		}
	return b1;
}
