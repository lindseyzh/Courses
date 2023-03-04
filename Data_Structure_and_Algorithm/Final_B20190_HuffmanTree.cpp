#include<bits/stdc++.h>
using namespace std;
struct nd{
    int v;
    nd * lf=0;
    nd * rt=0;
    nd * parent=0;
    nd(int vv):v(vv){}
    bool operator<(nd*b){
        return v>b->v;
    }
};
struct myless{
    bool operator()(const nd * a, const nd * b){
        return a->v>b->v;
    }
};
int sum;
nd * Union(nd * a,nd * b){
    nd * pa=new nd(a->v+b->v);
    pa->lf=a;
    pa->rt=b;
    sum+=a->v+b->v;
    return pa;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n;
        priority_queue<nd*,vector<nd*>, myless> pq;
        for(int i=0;i<n;i++){
            cin>>a;
            nd * cur=new nd(a);
            pq.push(cur);
        }
        sum=0;
        for(int i=0;i<n-1;i++){
            nd * a = pq.top();
            pq.pop();
            nd * b = pq.top();
            //printf("union %d %d\n",a->v,b->v);
            pq.pop();
            pq.push(Union(a,b));
        }
        cout << sum << endl;
    }

    return 0;  
}