#include<iostream>
#include<cstring>
using namespace std;
int albt(int,int);
int alpha,beta;
bool walk();
int mins(int);
class boards{
    public:
        char bd[4][4];
        int xnum,onum,tnum;
        int row[2][4],col[2][4],diag[2],cdiag[2];
        void setpiece(char c,int i,int j){
            bd[i][j]=c;
            if(c=='x') {
                    tnum++;
                    xnum++;
                    row[1][i]++;
                    col[1][j]++;
                    if(i==j) diag[1]++;
                    else if(i+j==3) cdiag[1]++;
                }
                else if(c=='o'){
                    tnum++;
                    onum++;
                    row[0][i]++;
                    col[0][j]++;
                    if(i==j) diag[0]++;
                    else if(i+j==3) cdiag[0]++;
                }
        }

};
boards board,fakeboard[16];
int nx,ny;
bool jud(int dep,int sidetomove){
    int i;
    int t = sidetomove==1?1:0;
    for(i=0;i<4;i++)
        if(fakeboard[dep].col[t][i]==4 || fakeboard[dep].row[t][i]==4) return 1;
    if(fakeboard[dep].diag[t]==4) return 1;    
    if(fakeboard[dep].cdiag[t]==4) return 1;
    return 0;
}
bool walk(){
    int i, j;
    alpha=-2;
    beta=2;
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            if(board.bd[i][j]=='.'){
                fakeboard[0]=board;
                fakeboard[0].setpiece('x',i,j);
                if(mins(1)==1){
                    nx=i;
                    ny=j;
                    return 1;
                }
//                cout << i << ',' << j << ':' << ab << endl;
            }
    return 0;
}
int maxs(int dep){
//    cout << dep << ' ';
    if(jud(dep-1,1)) return 1;
    if(jud(dep-1,-1)) return -1;
    if(fakeboard[dep-1].tnum==16) return 0;
    //if b==0: continue searching
    int i,j,v=-2;
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            if(fakeboard[dep-1].bd[i][j]=='.'){
                fakeboard[dep]=fakeboard[dep-1];
                fakeboard[dep].setpiece('x',i,j);
                v=max(v,mins(dep+1));
                if(v>=beta) return v;
                alpha = max(alpha,v);
            }
    return v;
}
int mins(int dep){
//    cout << dep << ' ';
    if(jud(dep-1,1)) return 1;
    if(jud(dep-1,-1)) return -1;
    if(fakeboard[dep-1].tnum==16) return 0;
    //if b==0: continue searching
    int i,j,v=2;
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            if(fakeboard[dep-1].bd[i][j]=='.'){
                fakeboard[dep]=fakeboard[dep-1];
                fakeboard[dep].setpiece('o',i,j);
                v=min(v,maxs(dep+1));
                if(v!=1) return -1;
                beta=min(beta,v);
            }
    return v;
}
int main(){
    char s;
    int i,j;
    while(1){
        cin>>s;
        if(s == '$') return 0;
        memset(board.row,0,sizeof(board.row));
        memset(board.col,0,sizeof(board.row));
        memset(board.diag,0,sizeof(board.diag));
        memset(board.cdiag,0,sizeof(board.cdiag));
        board.onum=board.xnum=board.tnum=0;
        for(i=0;i<4;i++)
            for(j=0;j<4;j++){
                cin>>s;
                board.setpiece(s,i,j);
            }
        if(walk()) printf("(%d,%d)\n",nx,ny);
        else cout << "#####" << endl;
    }

    return 0;
}