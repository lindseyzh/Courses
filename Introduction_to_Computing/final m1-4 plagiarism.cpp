#include<iostream>
#include<cstring>
using namespace std;
int num[5][2]{0};
char ss[4][10]={"if ","switch","while","for"};
int l[]={3,6,5,3};
int main(){
	int n,m;
	char aline[1000];
	char *p,*q;
	cin>>n;
	getchar();
	for(int i=0;i<n;i++){
		cin.getline(aline,1000);
		for(int j=0;j<4;j++){
		p=strstr(aline,ss[j]);
		while(p!=NULL){
			num[j][1]++;
			p=strstr(p+l[j],ss[j]);
		}
		}
	}
	cin>>m;
	getchar();
	for(int i=0;i<m;i++){
			cin.getline(aline,1000);
			for(int j=0;j<4;j++){
			p=strstr(aline,ss[j]);
			while(p!=NULL){
				num[j][2]++;
				p=strstr(p+l[j],ss[j]);
			}
			}
	}
//	for(int i=0;i<4;i++)
//		cout<<num[i][1]<<' '<<num[i][2]<<endl;
	if(num[0][1]+num[1][1]==num[0][2]+num[1][2]
		&&num[2][1]+num[3][1]==num[2][2]+num[3][2])
		cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	return 0;
}
