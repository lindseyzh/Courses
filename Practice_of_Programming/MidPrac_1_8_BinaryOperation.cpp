#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,i,j;
    cin>>a>>b>>i>>j;
    int block = ((0xffffffff) << (j+1) )|((1<<i)-1);
    cout << ((a&block)|((~b)&(~block))) << endl;
    return 0;
}