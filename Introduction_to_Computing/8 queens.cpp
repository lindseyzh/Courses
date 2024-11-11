#include<iostream>
using namespace std;
bool diag[20]{0},row[10]{0},ctdiag[20]{0};
bool board[10][10]{0};
int num=0;
int n=8;
void dfs(int);
void printit(){
	int i,j;
	printf("%d\n",num);
	for(i=0;i<8;i++){
		if(board[i][0]) cout<<'*';
		else cout<<'.';
		for(j=1;j<8;j++)
			if(board[i][j]) cout<<" *";
			else cout<<" .";
		cout<<endl;
	}
	return;
}
int main(){
	dfs(0);	
	return 0;
}
void dfs(int j){
	if(j==8){
		num++;
		printit();
		return;
	}
	for(int i=0;i<8;i++)
		if(!board[i][j])
			if(!row[i])
				if(!diag[7-i+j])
					if(!ctdiag[i+j]){
						board[i][j]=row[i]=diag[7-i+j]=ctdiag[i+j]=1;
						dfs(j+1);
						board[i][j]=row[i]=diag[7-i+j]=ctdiag[i+j]=0;
					}
	return;
}
