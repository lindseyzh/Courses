//template: merge sort
#include<bits/stdc++.h>
#define MAXN 10000
using namespace std;
int a[MAXN],tmp[MAXN];
void merge(int lf,int rt,int md){
    int i=lf,j=md;
    int cur=lf;
    for(int u=lf;u<rt;u++)
        tmp[u]=a[u];
    while(i<md&&j<rt){
        if(tmp[i]<=tmp[j])
            a[cur++]=tmp[i++];
      
        else a[cur++]=tmp[j++];
    }
    while(i<md) a[cur++]=tmp[i++];
    while(j<rt) a[cur++]=tmp[j++];    
}
void mergesort(int lf,int rt){
    if(lf>=rt-1) return;
    int md=(lf+rt)/2;
    mergesort(lf,md);
    mergesort(md,rt);
    merge(lf,rt,md);
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    mergesort(0,n);
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}