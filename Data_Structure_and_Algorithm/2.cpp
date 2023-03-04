#include<bits/stdc++.h>
using namespace std;
#define N 20020
int a[N],tmp[N];
int merge(int lf,int rt,int md){
    int i=lf,j=md;
    int cur=lf;
    int ans=0,k=0;
    for(int u=lf;u<rt;u++)
        tmp[u]=a[u];
    while(i<md&&j<rt){
        if(tmp[i]<=tmp[j]){
            a[cur++]=tmp[i++];
            ans+=k;
        }
        else {
            a[cur++]=tmp[j++];
            k++;
        }
    }
    while(i<md){
        a[cur++]=tmp[i++];
        ans+=k;
    }
    while(j<rt){
        a[cur++]=tmp[j++];
    }
    return ans;
}
int mergesort(int lf,int rt){
    if(lf>=rt-1) return 0;
    int ans=0;
    int md=(lf+rt)/2;
    ans+=mergesort(lf,md);
    ans+=mergesort(md,rt);
    ans+=merge(lf,rt,md);
    return ans;
}
int main(){
    int n;
    while(cin>>n){
        if(n==0) return 0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        int ans=mergesort(0,n);
        printf("%d\n",ans);
    }

    return 0;
}