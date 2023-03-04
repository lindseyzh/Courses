//Jun.23_04
//Note: Only when all the prerequired courses are learned can a course be choosen
#include<bits/stdc++.h>
using namespace std;
int n,m;
int cp[1010][1010];//course prerequisites
int las[1010][1010];
int lasn[1010];
int lasok[1010];
int cpn[1010];
bool rt[1010];//node i is a "root" of the tree
bool cl[1010];//coloring record
void color(int k){
    for(int i=0;i<cpn[k];i++){
        int nx=cp[k][i];
        lasok[nx]++;
        if(lasok[nx]==lasn[nx]){
            cl[nx]=1;
            color(nx);
        }
    }
}
int main(){ 
    while(cin>>n>>m){
        memset(cpn,0,sizeof(cpn));
        memset(lasn,0,sizeof(lasn));
        memset(lasok,0,sizeof(lasok));
        memset(rt,0,sizeof(rt));
        memset(cl,0,sizeof(cl));
        int a,b;
        for(int i=0;i<m;i++){
            cin>>a>>b;
            rt[a]=1;
            cp[b][cpn[b]]=a;
            cpn[b]++;
            las[a][lasn[a]]=b;
            lasn[a]++;
        }
        for(int i=0;i<n;i++)
            if(!rt[i] && !cl[i]){//is root
                cl[i]=1;
                color(i);
            }
        bool done=1;
        for(int i=0;i<n;i++)
            if(!cl[i]){
                done=0;
                break;
            }
        if(done) cout << "True" << endl;
        else cout << "False" << endl;
    }

    return 0;
}