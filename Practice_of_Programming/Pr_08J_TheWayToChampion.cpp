//Jun.23
#include<bits/stdc++.h>
using namespace std;
int n,m,sx,sy,enm=0;
char mz[110][110];
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            cin>>mz[i][j];
            switch(mz[i][j]){
                case 'I':
                    sx=i,sy=j;
                    break;
                case 'w':
                case 's':
                case 'a':
                case 'd':

            }
        }
    return 0;
}