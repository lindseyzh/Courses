#include<bits/stdc++.h>
using namespace std;
struct nd{
    int v;
    nd * lf;
    nd * rt;
    nd(){}
    nd(int vv,nd* ll=0,nd* rr=0):v(vv),lf(ll),rt(rr){}
};
struct cmp{
    bool operator()(const nd * a,const nd * b){
        return a->v>b->v;
    }
};
int main(){
    int t;
    cin>>t;
    priority_queue<nd*,vector<nd*>,cmp> qn;
    while(t--){
        int n;
        cin>>n;
        while(n--){
            int a;
            cin>>a;
            nd * cur = new nd(a);
            qn.push(cur);
        }
        int sum=0;
        while(qn.size()>1){
            nd * a=qn.top();qn.pop();
            nd * b=qn.top();qn.pop();
            int d=a->v+b->v;
            sum+=d;
            nd * cur = new nd(d,a,b);
            qn.push(cur);
        }
        printf("%d\n",sum);
        qn.pop();
    }

    return 0;
}