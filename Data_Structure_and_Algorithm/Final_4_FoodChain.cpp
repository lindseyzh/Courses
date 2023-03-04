
//Ref: https://blog.csdn.net/u014391294/article/details/50221077

#include<bits/stdc++.h>
using namespace std;
#define N 50040
int n,p[N]{0};
int r[N]{0};//0- a=pa; 1-pa eats a; 2-a eats pa
int Find(int a){
    if(a==p[a]) return a;
    int pa=p[a];
    int ppa=Find(p[a]);
    p[a]=ppa;
    r[a]=(r[pa]+r[a])%3;
    return ppa;
}
void Union(int a,int b,int d){
    int pa=Find(a);
    int pb=Find(b);
    p[pb]=pa;
    if(d==1) r[pb]=(r[a]-r[b]+3)%3;
    else r[pb]=(r[a]-r[b]+4)%3;
    //don't forget +3!!
}
int main(){
    int k,d,x,y;
    cin>>n>>k;
    int num=0;
    for(int i=1;i<=n;i++)
        p[i]=i;
    while(k--){
        cin>>d>>x>>y;
        if(x>n||y>n||(d==2&&x==y)) {
            num++;
            continue;
        }
        int px=Find(x);
        int py=Find(y);
        if(px!=py) Union(x,y,d);//don't use "Union(px,py,d)"
        else{
            if(d==1 && (r[x]-r[y])%3!=0) num++;
            else if(d==2 && (r[y]-r[x]+3)%3!=1) num++;
        }
    }
    cout << num << endl;
    return 0;
}