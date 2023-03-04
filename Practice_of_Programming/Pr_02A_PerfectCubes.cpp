#include<bits/stdc++.h>
using namespace std;
struct nd{
    int a,b,c,d;
    nd(int aa,int bb,int cc,int dd):
        a(aa),b(bb),c(cc),d(dd){}
    bool operator<(nd & n){
        if(a!=n.a) return a<n.a;
        if(d!=n.d) return d<n.d;
        if(c!=n.c) return c<n.c;
        return b<n.b; 
    }
    void op(){
        printf("Cube = %d, Triple = (%d,%d,%d)\n",a,d,c,b);
    }
};
vector<nd> vn;
int a,b,c,d;
int main(){
    int n;
    cin>>n;
    for(a=6;a<=n;a++){
        for(b=2;b<a;b++)
            for(c=2;c<b;c++)
                for(d=2;d<c;d++)
                    if(a*a*a==b*b*b+c*c*c+d*d*d)
                        vn.push_back(nd(a,b,c,d));
    }
    sort(vn.begin(),vn.end());
    vector<nd>::iterator i;
    for(i=vn.begin();i!=vn.end();i++)
        i->op();
    return 0;
}