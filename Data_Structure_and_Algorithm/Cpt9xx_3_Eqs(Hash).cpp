//solution 1. Naive Hash / bucket sorting(?)
//ref: https://blog.csdn.net/qq_32866009/article/details/51519742

#include<bits/stdc++.h>
using namespace std;
#define maxn 20000000
const int p=-50,q=50;
const int ub=50*50*50*50;
short hhash[maxn]{};//use short to avoid MLE
int main(){
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int num=0;
    int k1,k2,k3;
    for(int i=p;i<=q;i++){
        if(i==0) continue;
        k1=a*i*i*i;
        for(int j=p;j<=q;j++){
            if(j==0) continue;
            k2=k1+b*j*j*j;
            for(int u=p;u<=q;u++){
                if(u==0) continue;
                k3=k2+c*u*u*u;
                if(k3>2*ub||k3<-2*ub) continue;
                if(k3<0) k3+=maxn;
                hhash[k3]++;
            }
        }
    }
    for(int i=p;i<=q;i++){
        if(i==0) continue;
        for(int j=p;j<=q;j++){
            if(j==0) continue;
            int ans=d*i*i*i+e*j*j*j;
            if(ans>0){
                num+=hhash[maxn-ans];
            }
            else num+=hhash[-ans];
        }
    }
    cout << num << endl;
    return 0;
}
