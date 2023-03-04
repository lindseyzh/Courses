//Reference: https://blog.csdn.net/pku_Coder/article/details/53426071
#include<bits/stdc++.h>
using namespace std;
#define N 100010
int p[N];
bool diff[N];
int findit(int a){
    if(a==p[a]) return a;//root
    int ppa=findit(p[a]);
    diff[a]=diff[p[a]]^diff[a];
    p[a]=ppa;
    return ppa;
}
void Union(int a,int b){
    int pa=findit(a);
    int pb=findit(b);
    p[pa]=pb;
    diff[pa]=1-(diff[a]^diff[b]);//Important!
}
int searchit(int a,int b){
    int pa=findit(a);
    int pb=findit(b);
    if(pa==pb){
        if(diff[a]^diff[b]) return 1;//diff
        return -1;//same
    }
    return 0;//unknown
}
int main(){
    int t,m,n;
    cin>>t;
    while(t--){
    cin>>n>>m;
    for(int i=0;i<=n;i++)
        p[i]=i;
    memset(diff,0,sizeof(diff));
    while(m--){
        char c;
        int a,b;
        cin>>c>>a>>b;
        if(c=='D'){
            Union(a,b);
        }
        else{
            switch(searchit(a,b)){
                case -1:
                    cout << "In the same gang." << endl;
                    break;
                case 1:
                    cout << "In different gangs." << endl;
                    break;
                case 0:
                    cout << "Not sure yet." << endl;
                    break;
            }
        }
    }
    }
    return 0;
}