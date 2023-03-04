//Jun.16_06
#include<bits/stdc++.h>
using namespace std;
int a[5][5];
bool rowmax[5][5]{0},colmax[5][5]{0};
int main(){
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            cin>>a[i][j];
    for(int i=0;i<5;i++){
        int maxj=0,rmax=a[i][0];
        for(int j=1;j<5;j++)
            if(a[i][j]>rmax){
                maxj=j;
                rmax=a[i][j];
            }
        rowmax[i][maxj]=1;
    }
    for(int i=0;i<5;i++){
        int minj=0,cmin=a[0][i];
        for(int j=1;j<5;j++)
            if(a[j][i]<cmin){
                minj=j;
                cmin=a[j][i];
            }
        colmax[minj][i]=1;
    }
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            if(colmax[i][j]&&rowmax[i][j]){
                printf("%d %d %d\n",i+1,j+1,a[i][j]);
                return 0;
            }
    cout << "not found" << endl;
    return 0;
}