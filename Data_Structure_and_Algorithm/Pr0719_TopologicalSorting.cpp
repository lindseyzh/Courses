//12.6-7
#include<bits/stdc++.h>
using namespace std;
#define N 10010
vector<int> inv[N];
int ind[N];
int v;
priority_queue<int,vector<int>,greater<int>> qi;
int main(){
    int k;
    cin>>v>>k;
    int a,b;
    for(int i=0;i<k;i++){
        cin>>a>>b;
        ind[b]++;
        inv[a].push_back(b);
    }
    for(int i=1;i<=v;i++){
        if(ind[i]==0) qi.push(i);
    }
    bool fir=1;
    while(!qi.empty()){
        int cur=qi.top();qi.pop();
        if(fir){
            fir=0;
            printf("v%d",cur);
        }
        else printf(" v%d",cur);
        for(auto i=inv[cur].begin();i!=inv[cur].end();i++){
            ind[*i]--;
            if(ind[*i]==0) qi.push(*i);
        }
    }
    printf("\n");

    return 0;
}