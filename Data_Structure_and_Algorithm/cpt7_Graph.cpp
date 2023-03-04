#include<bits/stdc++.h>
using namespace std;


// check circless with DFS
stack<int> a;
set<int> s;
bool vis[N]{0};
void DFS(graph & g, int v){
    a.push(v);
    s.insert(v);//current path set
    vis[v]=1;
    for(int e=FirstEdge(v);G.isEdge(e);e=NextEdge(e)){
        if(vis[toVertice(e)]==0)
            DFS(g, toVertice(e));
        else if(s.count(toVertice(e)>0))
            cout << "circles!" << endl;
        int x=a.top();a.pop();
        s.erase(x);
    }
}



// topological sorting (top-sort)
// 1. BFS with an in-degree table(入度表)
void topsort_BFS(graph &g){
    memset(vis,0, sizeof(vis));
    queue<int> q;
    //initialization
    for(int i=0;i<g.verticeNum;i++){
        if(g.indegree[i]==0)
            q.push(i);
    }
    while(!q.empty()){
        int v=q.top();q.pop();
        printf("%d ",v);
        vis[v]=1;
        for(int e=FirstEdge(v);G.isEdge(e);e=NextEdge(e)){
            indegree[toVertice(e)]--;
            if(indegree(toVertice(e))==0)
                q.push(toVertice(e));     
        }
    }
    for(int i=0;i<g.verticeNum;i++){
        if(!vis[i]){
            cout << "circles!" << endl;
        }
    }
}

// 2. DFS
void topsort_DFS(graph & g){
    memset(vis,0,sizeof(vis));
    int *result = new int[g.vnum];
    int tag=0;
    for(int i=0;i<g.vnum;i++)
        if(vis[i]==0)
            doit(g, i, result, tag);
    for(int i=g.vnum-1;i>=0;i--)
        printf("%d ", result[i]);
}
void doit(graph &g, int v, int *result, int &tag){
    vis[v]=1;
    for(int e=firstEdge(v);g.isEdge(e);e=nextEdge(e))
        if(vis[toV(e)]==0)
            doit(toV(e));
    result[tag++]=v;
    // Note: tag is shared/global
}

int binarysearch(int n, int tar){
    int lf=0,rt=n-1;
    while(lf<=rt){
        md=(lf+rt)/2;
        if(tar==a[md]) return md;
        if(tar<a[md]) rt=md-1;
        else lf=md+1;
    }
    return -1;
}


