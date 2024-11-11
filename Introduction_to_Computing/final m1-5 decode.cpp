#include<iostream>
#include<cstring>
using namespace std;
void decode();
char s[1000],ss[1000];
int classi[1000];
int a,b,c;
int main(){
	while(1){
		cin>>a>>b>>c;
		if(a==0&&b==0&&c==0)
			return 0;
		getchar();
		cin.getline(s,100);
		memset(ss,'\0',sizeof(ss));
		decode();
	}
}
void decode(){
	int l=strlen(s),i,j;
	char aa[100],bb[100],cc[100];
	int numa=0,numb=0,numc=0;
	int pla[100],plb[100],plc[100];
	for(i=0;i<l;i++){
		if(s[i]>='a'&&s[i]<='i'){
			classi[i]=1;
			aa[numa]=s[i];
			pla[numa]=i;
			numa++;
			continue;
		}
		if(s[i]>='j'&&s[i]<='r'){
			classi[i]=2;
			bb[numb]=s[i];
			plb[numb]=i;
			numb++;
			continue;
		}
		else{
			classi[i]=3;
			cc[numc]=s[i];
			plc[numc]=i;
			numc++;
		}
	}
	if(numa>0){
		a%=numa;
		for(i=0;i<numa;i++){
			j=(i-a+numa)%numa;
			ss[pla[i]]=aa[j];
		}
	}
	if(numb>0){
		b%=numb;
	for(i=0;i<numb;i++){
		j=(i-b+numb)%numb;
		ss[plb[i]]=bb[j];
	}
	}
	if(numc>0){
		c%=numc;
	for(i=0;i<numc;i++){
		j=(i-c+numc)%numc;
		ss[plc[i]]=cc[j];
	}
	}
	ss[l]='\0';
	cout<<ss<<endl;
	return;
}
