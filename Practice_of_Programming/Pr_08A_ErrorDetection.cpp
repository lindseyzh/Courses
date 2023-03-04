//Jun.22_02
#include<bits/stdc++.h>
using namespace std;
int n;
bool a[110][110];
int col[110]{0},row[110]{0};
int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            row[i]+=a[i][j];
            col[j]+=a[i][j];
        }
    int rn=0,cn=0;
    int r,c;
    for(int i=0;i<n;i++){
        if(row[i]%2) rn++,r=i;
        if(col[i]%2) cn++,c=i;
    }
    if(rn==0 && cn==0){
        cout << "OK" << endl;
        return 0;
    }
    if(rn==1 && cn==1){
        printf("%d %d\n",r+1,c+1);
        return 0;
    }
    cout << "Corrupt" << endl;
    return 0;
}