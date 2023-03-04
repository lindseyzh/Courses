//Jun.23_05
//Enumeration
#include<bits/stdc++.h>
using namespace std;
int bd[10][10];
int ans[10][10];
bool finish=0;
bool col[10][10],row[10][10],blk[3][3][10];
void dfs(int x,int y){
    bool done=0;
    int nxx=-1,nxy=-1;
    for(int nx=1;nx<=9;nx++){
        if(row[x][nx] || col[y][nx] || blk[x/3][y/3][nx]) continue;
        row[x][nx]=col[y][nx]=blk[x/3][y/3][nx]=1;
        bd[x][y]=nx;
        if(done==0){
            for(int i=0;i<9;i++){
                for(int j=0;j<9;j++)
                    if(bd[i][j]==0){
                        nxx=i,nxy=j;
                        done=1;
                        break;
                    }     
                if(done) break;
            }
            if(done==0){
                finish=1;
                for(int i=0;i<9;i++)
                    for(int j=0;j<9;j++)
                        ans[i][j]=bd[i][j];
                return;
            }
        }
        dfs(nxx,nxy);
        row[x][nx]=col[y][nx]=blk[x/3][y/3][nx]=0;
        bd[x][y]=0;
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        memset(col,0,sizeof(col));
        memset(row,0,sizeof(row));
        memset(blk,0,sizeof(blk));
        char c;
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++){
                cin>>c;
                bd[i][j]=c-'0';
                if(bd[i][j]>0){
                    row[i][bd[i][j]]=1;
                    col[j][bd[i][j]]=1;
                    blk[i/3][j/3][bd[i][j]]=1;
                }
            }
        bool done=0;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++)
                if(bd[i][j]==0){
                    dfs(i,j);
                    done=1;
                    break;
                } 
            if(done) break;
        }
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++)
                cout << ans[i][j];
            cout << endl;
        }
    }
    return 0;
}