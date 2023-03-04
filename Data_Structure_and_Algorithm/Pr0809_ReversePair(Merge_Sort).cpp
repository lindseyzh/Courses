//12.6-01

#include<bits/stdc++.h>
using namespace std;
#define N 20020
int a[N],tmp[N];
int merge(int lf,int rt,int md){
    for(int i=lf;i<rt;i++)
        tmp[i]=a[i];
    int i=lf,j=md;
    int cur=lf;
    int t=0,ans=0;
    while(i<md&&j<rt){
        if(tmp[i]<=tmp[j]){
            a[cur++]=tmp[i++];
            ans+=t;
        }
        else {
            a[cur++]=tmp[j++];
            t++;
        }
    }
    while(i<md) {a[cur++]=tmp[i++];ans+=t;}
    while(j<rt) a[cur++]=tmp[j++];
    return ans;
}
int mergesort(int lf,int rt){
    if(lf>=rt-1) return 0;
    int md=(lf+rt)/2;
    int sum=0;
    sum+=mergesort(lf,md);
    sum+=mergesort(md,rt);
    sum+=merge(lf,rt,md);
    return sum;
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