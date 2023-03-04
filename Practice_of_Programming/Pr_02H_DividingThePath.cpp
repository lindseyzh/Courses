#include<bits/stdc++.h>
using namespace std;
int n,l,a,b;
int cows[1000010]{0},mark[1000010]{0};
int dp[1000010]{0};
struct nd{
    int p=0,n=0;
    nd(){}
    nd(int pp,int nn):
        p(pp),n(nn){}
    bool operator<(const nd &d) const{
        return n>d.n;
    }
};
priority_queue<nd> pq;
int main(){
    cin>>n>>l>>b;
    a*=2;b*=2;
    int s,e;
    for(int i=0;i<n;i++){
        cin>>s>>e;
        mark[s+1]+=1;
        mark[e]+=-1;
    }
    int thism=0;
    for(int i=0;i<=l;i++){
        thism+=mark[i];
        cows[i]=thism;
    }
    for(int i=0;i<=l;i+=2){
        if(cows[i] || i<a) {
            dp[i]=INT_MAX;
        }
        else if(i<=b) {
            dp[i]=1;
        }
        else {
            dp[i]=INT_MAX;
            nd las;
            bool emp=0;
            while(1){
                if(pq.empty()) {
                    emp=1;
                    break;
                }
                las=pq.top();
                //Don't pop here! The data is reusable
                if(las.p>=i-b) break;//ok
                else pq.pop();
            }
            if (!emp) 
                dp[i]=las.n+1;
        }
        if(i-a+2>0)
            if(dp[i-a+2]!=INT_MAX) 
                pq.push(nd(i-a+2,dp[i-a+2]));
        
    }
    if(dp[l]==INT_MAX) cout << -1 << endl;
    else    cout << dp[l] << endl;

    return 0;
}