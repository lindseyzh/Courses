//sol 2.monotonous queue
//reference: https://blog.csdn.net/weixin_45637770/article/details/109011204
#include<bits/stdc++.h>
using namespace std;
deque<int> dqa,dqb;
int a[1000010],smax[1000010],smin[10000010];
int n,k,t;
int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];

    //max
    for(int i=0;i<n;i++){
        if(!dqa.empty() && dqa.front()==i-k) 
            dqa.pop_front();
        while(!dqa.empty() && a[dqa.back()]<=a[i])
            dqa.pop_back();//useless
        dqa.push_back(i);
        if(i>=k-1) smax[i]=a[dqa.front()]; 
    }

    //min
    for(int i=0;i<n;i++){
        if(!dqb.empty() && dqb.front()==i-k)
            dqb.pop_front();
        while(!dqb.empty() && a[dqb.back()]>=a[i])
            dqb.pop_back();
        dqb.push_back(i);
        if(i>=k-1) smin[i]=a[dqb.front()];
    }

    printf("%d",smin[k-1]);
    for(int i=k;i<n;i++)
        printf(" %d",smin[i]);
    printf("\n");
    
    printf("%d",smax[k-1]);
    for(int i=k;i<n;i++)
        printf(" %d",smax[i]);
    printf("\n");

    return 0;
}


//sol 1.dynamic programming(TLE)
/*
#include<bits/stdc++.h>
using namespace std;
int n,k,a[1000010],aa;
int smin[1000010]{},smax[1000010]{};
int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
        smin[i]=smax[i]=a[i];
    }
    for(int l=1;l<k;l++){
        for(int i=0;i<n-l;i++){
            smin[i]=min(smin[i],a[i+l]);
            smax[i]=max(smax[i],a[i+l]);
        }
    }

    printf("%d",smin[0]);
    for(int i=1;i<n-k+1;i++)
        printf(" %d",smin[i]);
    printf("\n");
    printf("%d",smax[0]);
    for(int i=1;i<n-k+1;i++)
        printf(" %d",smax[i]);
    printf("\n");
    return 0;
}
*/