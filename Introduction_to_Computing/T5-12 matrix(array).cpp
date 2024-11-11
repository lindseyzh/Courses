#include <iostream>
using namespace std;
int main(){
	int n,i,j,k;
	
	cin>>n;
	do{
		bool b[105][105]{0};
		bool r=1;
		int row[105]{0},col[105]{0};
		int rn=0,cn=0,rf,cf;//rf&cf:the row&column to change
		for(i=0;i<n;i++){
			for (j=0;j<n;j++){
				cin>>b[i][j];
				row[i]+=b[i][j];
			}
			if (row[i]%2!=0) {
				r=0;
				rf=i;
				rn++;
				}
		}
		for	(j=0;j<n;j++){
			for(i=0;i<n;i++){
				col[j]+=b[i][j];
			}
			if (col[j]%2!=0){
				r=0;
				cf=j;
				cn++;
			}
		}
	if (!r)
		if (cn==1&&rn==1) printf("Change bit (%d,%d)\n",rf+1,cf+1);
			else printf("Corrupt\n");
		else printf("OK\n");
	cin>>n;
	}	while (n!=0);
	return 0;
}
