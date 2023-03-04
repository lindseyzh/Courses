//Merge Sorting

#include<bits/stdc++.h>
using namespace std;
#define MAXN 20020
int a[MAXN]{},n,tmp[MAXN];
int mergeit(int lf, int rt, int md){
    for(int i=lf;i<=rt;i++)
        tmp[i]=a[i];
    int idx1=lf,idx2=md+1,i=lf;
    int k=0,ans=0;
    while(idx1<=md && idx2<=rt){
        if(tmp[idx1]<=tmp[idx2]){
            a[i++]=tmp[idx1++];
            ans+=k;
        }
        else {
            a[i++]=tmp[idx2++];
            k++;
        }
    }
    while(idx1<=md) a[i++]=tmp[idx1++],ans+=k;
    while(idx2<=rt) a[i++]=tmp[idx2++];
    return ans;
}
int msort(int lf, int rt){
    if(lf>=rt) return 0;
    int md=(lf+rt)/2;
    int ans=0;
    ans+=msort(lf,md);
    ans+=msort(md+1,rt);
    ans+=mergeit(lf,rt,md);
    return ans;
}
int main(){
    while(cin>>n){
        if(n==0) return 0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout << msort(0,n-1) << endl;
    }
    return 0;
}