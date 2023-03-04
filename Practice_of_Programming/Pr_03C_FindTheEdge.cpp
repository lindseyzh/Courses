#include<iostream>
using namespace std;
char bd[550][550]{0};
int r,c;
int mov[4][2]={0,1,0,-1,1,0,-1,0};
void color(int x,int y){
    for(int i=0;i<4;i++){
        int xx=x+mov[i][0];
        int yy=y+mov[i][1];
        if(xx<0 || yy<0 || xx==r || yy==c) continue;
        if(bd[xx][yy]!='O') continue;
        bd[xx][yy]='o';
        color(xx,yy);
    }
}
int main(){
    int t;
    cin>>t;
    while(t){
        t--;
        cin>>r>>c;
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                cin>>bd[i][j];
        for(int i=0;i<r;i++){
            if(bd[i][0]=='O'){
                bd[i][0]='o';
                color(i,0);
            }
            if(bd[i][c-1]=='O'){
                bd[i][c-1]='o';
                color(i,c-1);
            }
        }
        for(int j=0;j<c;j++){
            if(bd[0][j]=='O'){
                bd[0][j]='o';
                color(0,j);
            }
            if(bd[r-1][j]=='O'){
                bd[r-1][j]='o';
                color(r-1,j);
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
                if(bd[i][j]=='o') cout << 'O';
                else cout << 'X';
            cout << endl;
        }
        if(t) cout << endl;
    }
    return 0;
}