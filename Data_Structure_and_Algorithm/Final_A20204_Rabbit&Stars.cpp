#include<bits/stdc++.h>
using namespace std;
int p[30],e[30],en[30];
struct ed{
    int a,b,v;
    ed(){}
    ed(int aa,int bb,int vv):a(aa),b(bb),v(vv){}
    friend bool operator<(const ed & a,const ed & b){
        return a.v>b.v;
    }
};
priority_queue<ed> pe;
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
    return;
}
bool Search(int a, int b){
    int pa=Find(a);
    int pb=Find(b);
    return pa==pb;
}
int main(){
    int n;
    cin>>n;
    char c;
    for(int i=0;i<26;i++)
        p[i]=i;
    for(int i=0;i<n-1;i++){
        int a,e,v;
        cin>>c>>e;
        a=c-'A';
        for(int j=0;j<e;j++){
            cin>>c>>v;
            pe.emplace(a,c-'A',v);
        }
    }
    int sum=0;
    for(int i=0;i<n-1;i++){
        ed e=pe.top();
        pe.pop();
        while(Search(e.a,e.b)){
            e=pe.top();
            pe.pop();
        }
        Union(e.a,e.b);
        sum+=e.v;
        //printf("union %d,%d,   sum=%d\n",e.a,e.b,sum);
    }
    cout << sum << endl;
    return 0;
}