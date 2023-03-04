//12.6-5

#include<bits/stdc++.h>
using namespace std;
#define N 100010
int p[N];
bool diff[N];
int find(int a){
    if(a==p[a]) return a;
    int pa=p[a];
    int ppa=find(pa);
    p[a]=ppa;
    diff[a]=(diff[a]+diff[pa])%2;
    return ppa;
}
void Union(int a,int b){
    int pa=find(a);
    int pb=find(b);
    if(pa==pb) return;
    p[pa]=pb;
    diff[pa]=(diff[a]+diff[b]+1)%2;
}

int main(){
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            p[i]=i;
            diff[i]=0;
        }
        char c;
        int a,b;
        while(m--){
            cin>>c>>a>>b;
            if(c=='A')  {
                if(find(a)==find(b)){
                    if(diff[a]==diff[b])
                        printf("In the same gang.\n");
                    else printf("In different gangs.\n");
                } 
                else printf("Not sure yet.\n");
            }
            else{
                Union(a,b);
            }
        }
    }

}