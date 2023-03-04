#include<bits/stdc++.h>
#define N 50050
using namespace std;
int p[N];
int find(int a){
    if(a==p[a]) return a;
    int ppa = find(p[a]);
    p[a]=ppa;
    return ppa;
}
void Union(int a,int b){
    int pa = find(a);
    int pb = find(b);
    if(pa==pb) return;
    p[pa]=pb;
    return;
}
int main(){
    int n,m;
    int casenum=0;
    while(cin>>n>>m){
        if(n==0&&m==0) return 0;
        casenum++;
        for(int i=1;i<=n;i++)
            p[i]=i;
        int a,b;
        while(m--){
            cin>>a>>b;
            Union(a,b);
        }
        int num=0;
        for(int i=1;i<=n;i++)
            if(p[i]==i) num++;
        printf("Case %d: %d\n",casenum, num);
    }
    return 0;
}


/*
#include<bits/stdc++.h>
#define N 50050
using namespace std;
int p[N]{0};
int Find(int a);
void Union(int a,int b){
    int pa=Find(a);
    int pb=Find(b);
    p[pa]=pb;
    return;
}
//Find with Path conpression
int Find(int a){
    if(p[a]==a) return a;
    int ppa=Find(p[a]);
    p[a]=ppa;
    return ppa;
}
int main(){
    int n,m;
    int c=0;
    while(cin>>n>>m){
        c++;
        if(n==0&&m==0) return 0;
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
        printf("Case %d: %d\n",c,num);
    }
}

*/