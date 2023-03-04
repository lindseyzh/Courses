#include<iostream>
#include<cstring>
using namespace std;
int board[10][10]{0}, ans[10][10];
bool ava[10][10][10]{0},col[10][10],row[10][10];
int digitnum[10]{0};
bool finish[10]{0},found;
bool sq[3][3][10];
inline void markit(int i, int j, int m){
    board[i][j]=m;
    sq[i/3][j/3][m]=row[i][m]=col[j][m]=1;
    return;
}
inline void demarkit(int i, int j, int m){
    board[i][j]=0;
    sq[i/3][j/3][m]=row[i][m]=col[j][m]=0;
    // for(int u=0; u<9;u++)
    //     ava[i][u][m]=ava[u][j][m]=0;
    return;

}
void dfs(int i, int j){
    if(found) return;
    while(board[i][j]){
        j++;
        if(j==9){
            i++;
            j=0;
        }
        if(i==9){
            found = 1;
            memcpy(ans,board,sizeof(board));
            return;
        }
    }
    for(int m=1;m<=9;m++){
        if(row[i][m] || col[j][m] || sq[i/3][j/3][m])
            continue;
        markit(i,j,m);
        int ni=i,nj=j+1;
        if(nj==9) {
            ni++;
            nj=0;
    }
    if(ni==9){
        found=1;
        memcpy(ans,board,sizeof(board));
        return;
    }
    dfs(ni,nj);
    demarkit(i,j,m);
    }
}
/*
void dfs(int m){
    if(found) return;
    if(m==10){
        found=1;
        memcpy(ans, board, sizeof(board));
        return;
    }
    if(digitnum[m]==9) {
        dfs(m+1);
        return;
    }
    int i,j;
    for(i=0;i<9;i++)
        for(j=0;j<9;j++)
            if(board[i][j]==0 && !row[i][m] && !col[j][m] && !sq[i/3][j/3][m]){
                mark(i,j,m);
                dfs(m);
                demark(i,j,m);
                if(found) return;
            }
}
*/
int main(){
    int t, i, j, a, u;
    char s[12];
    cin >> t;
    getchar();
    while(t){
        t--;
        found=0;
        memset(digitnum, 0, sizeof(digitnum));
        memset(row,0,sizeof(row));
        memset(col,0,sizeof(col));
        memset(sq, 0,sizeof(sq));
//        memset(ava, 0, sizeof(ava));
        //input
        for(i=0;i<9;i++){
            cin.getline(s,12);
            for(j = 0; j < 9; j++){
                a = s[j] - '0';
                board[i][j] = a;
                if(a==0) continue;
                digitnum[a]++;
                sq[i/3][j/3][a]=1;
                row[i][a]=col[j][a]=1;
            }
        }
        dfs(0, 0);
        for(i=0;i<9;i++){
            for(j=0;j<9;j++)
                cout<<ans[i][j];
            cout << endl;
        }
    }
    
    return 0;
}