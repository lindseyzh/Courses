#include<bits/stdc++.h>
using namespace std;
int v;
bool ed[100][100]{0},visited[100]{0};
int indegree[100]{0};
vector<int> vi;
int main(){
    int aa,a,b;
    //input
    cin>>v>>aa;
    while(aa--){
        cin>>a>>b;
        ed[a][b]=1;
        indegree[b]++;
    }
    //sorting
    aa=v;
    while(aa--){
        for(int i=1;i<=v;i++)
            if(!visited[i] && indegree[i]==0){
                vi.push_back(i);
                visited[i]=1;
                for(int j=1;j<=v;j++)
                    if(ed[i][j]) indegree[j]--;
                break;
            }
    }
    printf("v%d",vi[0]);
    vector<int>::iterator it;
    for(it=vi.begin()+1;it!=vi.end();it++)
        printf(" v%d",*it);
    printf("\n");
    return 0;
}