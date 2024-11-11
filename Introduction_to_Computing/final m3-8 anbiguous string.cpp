//solution 2:
#include<iostream>
#include<cstring>
using namespace std;
char s[102][22];
int l[102],n;
char subs[10][100];
bool used[102];
bool findsub(char* p,int ll,int num){
	for(int i=0;i<n;i++)
		if(i!=num)
		if(strstr(p,s[i])==p){
			if(ll==l[i]) return 1;
			char* p1=p+l[i];
			if(findsub(p1,ll-l[i],n))
				return 1;
		}
	return 0;
}
int main(){
	cin>>n;
	getchar();
	int i,j,u,v,k;
	for(i=0;i<n;i++){
		cin.getline(s[i],22);
		l[i]=strlen(s[i]);
	}
	char p[100];
	char best[100];
	
	//2 words
	int bestl=1000;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(bestl>l[i]+l[j]){
			strcpy(p,s[i]);
			strcat(p,s[j]);
			if(findsub(p,l[i]+l[j],i)){
				bestl=l[i]+l[j];
				strcpy(best,p);
			}
		}
	if(bestl<1000){
		cout<<best<<endl;
		return 0;
	}
	
	//3 words
		bestl=1000;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				for(u=0;u<n;u++)
				if(bestl>l[i]+l[j]+l[u]){
				strcpy(p,s[i]);
				strcat(p,s[j]);
				strcat(p,s[u]);
				int ll=l[i]+l[j]+l[u];
				if(findsub(p,ll,i)){
					bestl=ll;
					strcpy(best,p);
				}
			}
		if(bestl<1000){
			cout<<best<<endl;
			return 0;
		}
	
	//4 words
			bestl=1000;
			int ll;
			for(i=0;i<n;i++)
				for(j=0;j<n;j++)
					for(u=0;u<n;u++)
					for(v=0;v<n;v++)
					if(ll=l[i]+l[j]+l[u]+l[v]<bestl){
					strcpy(p,s[i]);
					strcat(p,s[j]);
					strcat(p,s[u]);
					strcat(p,s[v]);
					if(findsub(p,ll,i)){
						bestl=ll;
						strcpy(best,p);
					}
				}
			if(bestl<1000){
				cout<<best<<endl;
				return 0;
			}
//5 words
			bestl=1000;
			for(i=0;i<n;i++)
				for(j=0;j<n;j++)
					for(u=0;u<n;u++)
					for(v=0;v<n;v++)
					for(k=0;k<n;k++)
					if(ll=l[i]+l[j]+l[u]+l[v]+l[k]<bestl){
					strcpy(p,s[i]);
					strcat(p,s[j]);
					strcat(p,s[u]);
					strcat(p,s[v]);
					strcat(p,s[k]);
					if(findsub(p,ll,i)){
						bestl=ll;
						strcpy(best,p);
					}
				}
			if(bestl<1000){
				cout<<best<<endl;
				return 0;
			}
//6 words
			bestl=1000;
			int t;
			for(i=0;i<n;i++)
				for(j=0;j<n;j++)
					for(u=0;u<n;u++)
					for(v=0;v<n;v++)
					for(k=0;k<n;k++)
					for(t=0;t<n;t++)
					if(ll=l[i]+l[j]+l[u]+l[v]+l[k]+l[t]<bestl){
					strcpy(p,s[i]);
					strcat(p,s[j]);
					strcat(p,s[u]);
					strcat(p,s[v]);
					strcat(p,s[k]);
					strcat(p,s[t]);
					if(findsub(p,ll,i)){
						bestl=ll;
						strcpy(best,p);
					}
				}
			if(bestl<1000){
				cout<<best<<endl;
				return 0;
			}
	return 0;
}
/*
//solution 1:for 2 strings
#include<iostream>
#include<cstring>
using namespace std;
int n;
char s[102][22];
int l[102];
int main(){
	cin>>n;
	getchar();
	int i,j,u,v;
	for(i=0;i<n;i++){
		cin.getline(s[i],22);
		l[i]=strlen(s[i]);
	}
	int f1[1000],f2[1000],en1[1000],en2[1000];
	char ss1[50],ss2[50];
	int bf1,bf2,ben1,ben2;
	char bss[50];
	int bestlen=30;
	int numf=0,numen=0;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++){
			if(s[i][0]==s[j][0])
				if(strstr(s[i],s[j])!=NULL){
					f1[numf]=i;
					f2[numf]=j;
					numf++;				
				}
				else if(strstr(s[j],s[i])!=NULL){
					f1[numf]=j;
					f2[numf]=i;	
					numf++;			
				}
			if(s[i][l[i]-1]==s[j][l[j]-1])
				if(strstr(s[i],s[j])!=NULL){
					en1[numen]=j;
					en2[numen]=i;		
					numen++;		
				}
				else if(strstr(s[j],s[i])!=NULL){
					en1[numen]=i;
					en2[numen]=j;		
					numen++;		
				}
	}
	int thisl,thisl2;
	for(i=0;i<numf;i++)
		for(j=0;j<numen;j++)
			if(thisl=l[f1[i]]+l[en1[j]]==l[f2[i]]+l[en2[j]]){
				if(thisl>=bestlen) 	
					continue;
				memcpy(ss1,s[f1[i]],sizeof(s[f1[i]]));
				strcat(ss1,s[en1[j]]);
				memcpy(ss2,s[f2[i]],sizeof(s[f2[i]]));
				strcat(ss2,s[en2[j]]);
				if(strcmp(ss1,ss2)==0){
					if(thisl<bestlen){
					bestlen=thisl;
					memcpy(bss,ss1,sizeof(ss1));
				}
				}
			}
			else if(thisl==l[f2[i]]){
				memcpy(ss1,s[f1[i]],sizeof(s[f1[i]]));
				strcat(ss1,s[en1[j]]);
				if(strcmp(ss1,s[f2[i]])==0){
					if(thisl<bestlen){
					bestlen=thisl;
					memcpy(bss,ss1,sizeof(ss1));
				}
				}
			}
			else if(thisl=l[f2[i]]+l[en2[j]]==l[f1[i]]){
				memcpy(ss2,s[f2[i]],sizeof(s[f2[i]]));
				strcat(ss2,s[en2[j]]);
				if(strcmp(ss2,s[f1[i]])==0){
					if(thisl<bestlen){
					bestlen=thisl;
					memcpy(bss,ss2,sizeof(ss2));
				}
				}
			}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			for(u=0;u<n;u++)
				if(thisl=l[i]+l[j]==l[u]){
				memcpy(ss1,s[i],sizeof(s[i]));	
				strcat(ss1,s[j]);
				if(strcmp(ss1,s[u])==0){
					if(thisl<bestlen){
					bestlen=thisl;
					memcpy(bss,ss1,sizeof(ss1));
				}
				}
			}
	cout<<bss<<endl;
	return 0;
} 
*/
/*
4
i
is
kill
skill
*/
