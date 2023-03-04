//Jun.15-06
#include<bits/stdc++.h>
using namespace std;
int n,m;
int w[1100]{0};
int main(){
    cin>>n>>m;
    int lb=0,ub=0;
    for(int i=0;i<n;i++){
        cin>>w[i];
        ub=max(ub,w[i]);
    }
    while(lb+1<ub){//don't forget "+1"
        int mid = (lb+ub)/2;
        int num=0;
        for(int i=0;i<n;i++){
            num+=(w[i]+mid-1)/mid;
            if(num>m) break;
        }
        if(num>m) lb=mid;
        else ub=mid;
    }
    cout << ub << endl;
    return 0;
}