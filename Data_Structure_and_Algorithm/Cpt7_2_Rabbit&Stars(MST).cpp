//Kruskal Algorithm (It seems that Kruskal Algo is most used)
#include<bits/stdc++.h>
using namespace std;
class Edge{
    public:
        int in=-1,from=-1;
        int weight=0;
        Edge(){}
        Edge(int ii,int ff,int ww):in(ii),from(ff),weight(ww){}
        friend bool operator<(const Edge & a, const Edge & b){
            return a.weight<b.weight;
        };
        friend bool operator>(const Edge & a, const Edge & b){
            return a.weight>b.weight;
        };
};
priority_queue<Edge,vector<Edge>,greater<Edge> > pe;
int p[50];
int parent(int a){
    if(a==p[a]) return a;//root
    int pa=parent(p[a]);
    p[a]=pa;
    return pa;
}
void Union(int a,int b){
    int pa=parent(a);
    int pb=parent(b);
    if(pa==pb) return;
    p[pa]=pb;
}
bool Find(int a,int b){
    return parent(a)==parent(b);
}
int n;
int main(){ 
    cin>>n;
    char c;
    //input
    for(int i=0;i<n;i++)
        p[i]=i;
    for(int i=0;i<n-1;i++){
        cin>>c;
        int m,b;
        cin>>m;
        for(int j=0;j<m;j++){
            int w;
            cin>>c>>w;
            b=c-'A';
            pe.push(Edge(i,b,w));
        }
    }
    int num=n-1,sum=0;
    Edge e;
    while(num--){
        e=pe.top();
        pe.pop();
        while(Find(e.in,e.from)){
            e=pe.top();
            pe.pop();
        }
        //printf("Edge%d-%d\n",e.in,e.from);
        sum+=e.weight;
        Union(e.in,e.from);
    }
    cout << sum << endl;
    return 0;
}