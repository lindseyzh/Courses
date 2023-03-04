#include<bits/stdc++.h>
using namespace std;
#define N 50050
int p[N];
int Find(int a){
    if(a==p[a]) return a;
    int pa=p[a];
    int ppa=Find(pa);
    p[a]=ppa;
    return ppa;
}
void Union(int a,int b){
    int pa=Find(a);
    int pb=Find(b);
    p[pa]=pb;
}
int main(){
    int n,m;
    int casenum=0;
    while(cin>>n>>m){
        if(n==0&&m==0) return 0;
        casenum++;
        for(int i=1;i<=n;i++)
            p[i]=i;
        while(m--){
            int a,b;
            cin>>a>>b;
            Union(a,b);
        }
        int num=0;
        for(int i=1;i<=n;i++)
            if(p[i]==i) num++;
        printf("Case %d: %d\n",casenum,num);
    }
    return 0;
}