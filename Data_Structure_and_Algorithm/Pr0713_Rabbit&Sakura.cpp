//12.6-6
/* 
 * Floyd algorithm
 * Ref: https://oi-wiki.org//graph/shortest-path/
 * 
 */ 

#include<bits/stdc++.h>
using namespace std;
#define N 40
#define INF 1<<10
int p,q,r;
map<string,int> s2i;
string s[N];
int d[N][N]{0};
int las[N][N]{0};
void output(int a,int b){
    if(a==b){
        printf("%s",s[a].c_str());
    }
    else{
        output(a,las[a][b]);
        printf("->(%d)->%s",d[a][b]-d[a][las[a][b]],s[b].c_str());
    }
}
int main(){
    cin>>p;
    for(int i=1;i<=p;i++){
        cin>>s[i];
        s2i[s[i]]=i;
    }
    for(int i=1;i<=p;i++)
        for(int j=1;j<=p;j++){
            if(i==j) d[i][j]=0;
            else d[i][j]=INF;
            las[i][j]=i;
        }
    cin>>q;
    string a,b;
    int dd;
    for(int i=0;i<q;i++){
        cin>>a>>b>>dd;
        int aa=s2i[a];
        int bb=s2i[b];
        d[aa][bb]=d[bb][aa]=dd;
    }
    for(int k=1;k<=p;k++)
        for(int i=1;i<=p;i++)
            for(int j=1;j<=p;j++){
                if(d[i][k]==INF || d[k][j]==INF) continue;
                int newd=d[i][k]+d[k][j];
                if(newd<d[i][j]){
                    d[i][j]=newd;
                    las[i][j]=las[k][j];
                }
            }
    cin>>r;
    while(r--){
        cin>>a>>b;
        int aa=s2i[a];
        int bb=s2i[b];
        if(aa==bb){
            printf("%s\n",a.c_str());
            continue;
        }
        output(aa,bb);
        printf("\n");
    }
    return 0;
}