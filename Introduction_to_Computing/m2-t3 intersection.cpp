#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int n1=0,n2=0,i,j;
	int a[205]{0},b[205]{0},u[205];
	char aa[205],bb[205];
	cin.getline(aa,205);
	cin.getline(bb,205);
	int l1=strlen(aa);
	int l2=strlen(bb);
	for(i=0;i<l1;i++){
		if (aa[i]==',') n1++;
		else a[n1]=a[n1]*10+(aa[i]-'0');
	}
	n1++;
//	for(i=0;i<n1;i++)
//		cout<<a[i]<<endl;
	for(i=0;i<l2;i++){
		if(bb[i]==',') n2++;
		else b[n2]=b[n2]*10+(bb[i]-'0');
	}
	n2++;
	int nu=0;
	for(i=0;i<n1;i++)
		for(j=0;j<n2;j++)
			if(a[i]==b[j]) {
				u[nu]=a[i];
				nu++;
				break;
			}
	bool bu[205]{0};
	for(i=0;i<nu-1;i++)
		for(j=0;j<nu-1-i;j++)
			if(u[j]>u[j+1]){
				swap(u[j],u[j+1]);
				swap(bu[j],bu[j+1]);
			}
	for(i=0;i<nu;i++){
		if(u[i]==u[i+1])
			bu[i+1]=1;
	}		
//	for(i=0;i<nu;i++)
//		cout<<u[i]<<','<<bu[i]<<endl;
	if(nu==0) cout<<"NULL"<<endl;
	else{
		cout<<u[0];
		for(i=1;i<nu;i++)
			if(!bu[i])
				cout<<','<<u[i];
		cout<<endl;
	}
/*
1,3,5,6,10,6,8,11
2,4,8,6,10,6,12,13
*/
	
	return 0;
}
