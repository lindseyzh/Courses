#include<iostream>
#include<cstring>
using namespace std;
char s1[22],s2[22];
int l1,l2;
bool match(int,int);
int main(){
	cin.getline(s1,22);
	cin.getline(s2,22);
	l1=strlen(s1);
	l2=strlen(s2);
	if(match(0,0)) cout<<"matched"<<endl;
	else cout<<"not matched"<<endl;
	return 0;
}
bool match(int i,int j){
	if(i==l1&&j==l2) return 1;
	if(s1[i]=='?'||s2[j]=='?') 
		return match(i+1,j+1);
	if(s1[i]=='*'){
		if(i==l1-1) return 1;
		bool fine=0;
		for(int u=j;u<l2;u++)
			if(match(i+1,u)){
				fine=1;
				break;
			}
		if(fine) return 1;
		else return 0;
	}
	if(s2[j]=='*'){
			if(j==l2-1) return 1;
			bool fine=0;
			for(int v=i;v<l1;v++)
				if(match(v,j+1)){
					fine=1;
					break;
				}
			if(fine) return 1;
			else return 0;
		}
		if(i==l1||j==l2) return 0;
	if(s1[i]==s2[j]) 
		return match(i+1,j+1);
	else return 0;
}

/*
1*456?
11111114567
*/
