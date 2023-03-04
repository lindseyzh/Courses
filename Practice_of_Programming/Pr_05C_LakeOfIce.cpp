//Jun.16_02
//note: sometimes "F6" might result in exit status, while "F5" is ok
//If CE for no reason, submit the program to POJ and see the result
#include<bits/stdc++.h>
using namespace std;
int n,m;
char lk[110][110];
int mov[8][2]={0,1,0,-1,1,0,-1,0,1,1,1,-1,-1,1,-1,-1};
void color(int x,int y){
    for(int i=0;i<8;i++){
        int xx=x+mov[i][0];
        int yy=y+mov[i][1];
        if(xx<0||yy<0||xx==n||yy==m) continue;
        if(lk[xx][yy]=='@'){
            lk[xx][yy]='!';
            color(xx,yy);
        }
    }
}
int main(){
    while(cin>>n>>m){
        if(n==0) return 0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                cin>>lk[i][j];
        int num=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(lk[i][j]=='@'){
                    num++;
                    lk[i][j]='!';
                    color(i,j);
                } 
        cout << num << endl;
    }
    return 0;
}