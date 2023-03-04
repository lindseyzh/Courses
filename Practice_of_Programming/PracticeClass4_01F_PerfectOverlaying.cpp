#include<bits/stdc++.h>
using namespace std;
int c[33]{0};
//f(n)=3f(n-2)+2f(n-4)+2f(n-6)+...+2f(0), f(0)=1
//->f(n)=4f(n-2)-f(n-4)
int rec(int n){
    if(n<0) return 0;
    if(c[n]>0) return c[n];
    int ans=4*rec(n-2)-rec(n-4);
    c[n]=ans;
    return ans;
}
int main(){
    int n;
    c[2]=3;
    c[0]=1;
    while(cin>>n){
        if(n==-1) return 0;
        cout << rec(n) << endl;
    }
    return 0;
}