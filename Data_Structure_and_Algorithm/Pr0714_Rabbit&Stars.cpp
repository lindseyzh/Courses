#include<bits/stdc++.h>
using namespace std;
struct ed{
    int a,b;
    int v;
    ed(){}
    ed(int aa,int bb,int vv):a(aa),b(bb),v(vv){}
    friend bool operator<(const ed & a, const ed & b){
        return a.v>b.v;
    }
};
priority_queue<ed> pe;
int p[30];
int find(int a){
    if(a==p[a]) return a;
    int ppa=find(p[a]);
    p[a]=ppa;
    return ppa;
}
void Union(int a,int b){
    int pa=find(a);
    int pb=find(b);
    if(pa==pb) return;
    p[pa]=pb;
    return; 
}
bool diff(int a,int b){
    return find(a)!=find(b);
}
int main(){
    int n;
    cin>>n;
    char c;
    int a,b,num;

    for(int i=0;i<n-1;i++){
        cin>>c>>num;
        char s;
        while(num--){
            cin>>s>>a;
            pe.emplace(c-'A',s-'A',a);
        }
    }

    for(int i=0;i<n;i++)
        p[i]=i;
    ed cur;
    int sum=0;
    for(int i=0;i<n-1;i++){
        while(1){
            cur = pe.top();
            pe.pop();
            if(diff(cur.a, cur.b))
                break;
        }
        Union(cur.a,cur.b);
        sum+=cur.v;
    }
    printf("%d\n",sum);
    return 0;
}