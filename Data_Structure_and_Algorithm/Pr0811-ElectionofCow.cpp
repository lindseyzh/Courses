//11.26-3
#include<bits/stdc++.h>
using namespace std;
#define N 50050
struct cow{
    int a,b,num;
    cow(){};
    cow(int aa,int bb,int nn):a(aa),b(bb),num(nn){}
};
bool cmp1(const cow & a, const cow & b){
    return a.a>b.a;
}
bool cmp2(const cow & a, const cow & b){
    return a.b>b.b;
}
int n,k;
vector<cow> vc;
int main(){
    cin>>n>>k;
    int a,b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        vc.push_back(cow(a,b,i+1));
    }
    sort(vc.begin(),vc.end(),cmp1);
    sort(vc.begin(),vc.begin()+k,cmp2);
    cout << vc.begin()->num << endl;
    return 0;
}