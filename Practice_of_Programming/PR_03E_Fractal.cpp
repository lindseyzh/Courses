#include<bits/stdc++.h>
using namespace std;
bool bd[2200][2200]{0};
int p3[10];
void box(int n,int x,int y){
    if(n==1) {
        bd[x][y]=1;
        return;
    }
    int d=p3[n-1];
    box(n-1,x,y);
    box(n-1,x,y+2*d);
    box(n-1,x+d,y+d);
    box(n-1,x+2*d,y);
    box(n-1,x+2*d,y+2*d);
}
int main(){
    int n;
    p3[1]=1;
    for(int i=2;i<=8;i++)
        p3[i]=p3[i-1]*3;
    while(cin>>n){
        if(n==-1) return 0;
        memset(bd,0,sizeof(bd));
        box(n,0,0);
        for(int i=0;i<p3[n];i++){
            for(int j=0;j<p3[n];j++)
                printf("%c",bd[i][j]?'X':' ');
            printf("\n");
        }
        cout << '-' << endl;
    }
    return 0;
}