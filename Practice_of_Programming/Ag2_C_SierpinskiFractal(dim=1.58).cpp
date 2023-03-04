#include<bits/stdc++.h>
using namespace std;
char a='/',b='\\',c='_';
char s[3000][3000];
void drawit(int n,int xx,int yy){
    if(n==0) return;
    if(n==1) {
        s[xx][yy+1]=s[xx+1][yy]='/';
        s[xx][yy+2]=s[xx+1][yy+3]='\\';
        s[xx+1][yy+1]=s[xx+1][yy+2]='_';
        return;
    }
    int d=1<<(n-1);
    drawit(n-1,xx,yy+d);
    drawit(n-1,xx+d,yy);
    drawit(n-1,xx+d,yy+2*d);
    return;
}
int main(){
    int n;
    bool fir=1;
    while(cin>>n){
        if(n==0) return 0;
        if(fir) fir=0;
        else cout << endl;
        memset(s,' ',sizeof(s));
        drawit(n,0,0);
        int d=1<<n;
        for(int i=0;i<d;i++){
            for(int j=0;j<1+d+i;j++)
                cout<<s[i][j];
            cout << endl;
        }
    }
    return 0;
}