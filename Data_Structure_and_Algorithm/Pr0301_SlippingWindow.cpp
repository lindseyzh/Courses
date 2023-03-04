//11.24-04
//priority_queue
//ref: https://blog.csdn.net/qq_51767234/article/details/122659193
#include<bits/stdc++.h>
using namespace std;
class mypair{
    public:
        int v,p;
        mypair(int vv=0, int pp=-1):v(vv),p(pp){}
        friend bool operator<(const mypair & a, const mypair & b){
            if(a.v==b.v) return a.p<b.p;
            return a.v<b.v;
        }
        friend bool operator>(const mypair & a, const mypair & b){
            if(a.v==b.v) return a.p<b.p;
            return a.v>b.v;
        }
};
vector<int> va,vb;
int main(){
    int n,k;
    cin>>n>>k;
    priority_queue<mypair, vector<mypair>, less<mypair>> qa;
    priority_queue<mypair, vector<mypair>, greater<mypair>> qb; 
    int a;
    for(int i=0;i<k;i++){
        cin>>a;
        qa.push(mypair(a,i));
        qb.push(mypair(a,i));
    }
    va.push_back(qa.top().v);
    vb.push_back(qb.top().v);
    for(int i=k;i<n;i++){
        cin>>a;
        qa.push(mypair(a,i));
        qb.push(mypair(a,i));        
        while(qa.top().p<=i-k) qa.pop();
        while(qb.top().p<=i-k) qb.pop();
        vb.push_back(qb.top().v);
        va.push_back(qa.top().v);
    }
    printf("%d",vb[0]);
    for(int i=1;i<=n-k;i++)
        printf(" %d",vb[i]);
    printf("\n");
    printf("%d",va[0]);
    for(int i=1;i<=n-k;i++)
        printf(" %d",va[i]);
    printf("\n");
    return 0;
}