#include<iostream>
using namespace std;
int factor(int a, int b){
    if(a%b==0) return b;
    else return factor(b,a%b);
}
int main(){
    int a,b;
    cin>>a>>b;
    if(a<b) swap(a,b);
    cout << factor(a,b) << endl;
    return 0;
}