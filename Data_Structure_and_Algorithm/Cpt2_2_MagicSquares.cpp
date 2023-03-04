#include<bits/stdc++.h>
using namespace std;
int n,a[50][50]{0};
int main(){
    cin>>n;
    int l = 2*n-1;
    int i = 0;
    int j = n-1;
    int num = 1;
    while(num<=l*l){
        if(a[i][j]){
            i = (i+2)%l;
            j = (j+l-1)%l;
            continue;
        }
        a[i][j] = num;
        i = (i+l-1)%l;
        j = (j+1)%l;
        num++;
    }
    for(int i=0;i<l;i++){
        cout << a[i][0];
        for(int j=1;j<l;j++)
            cout << ' ' << a[i][j];
        cout << endl;
    }
    return 0;
}