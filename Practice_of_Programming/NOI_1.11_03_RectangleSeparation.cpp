#include<iostream>
using namespace std;
long long r,n,s[1000020]{0},ss[1000020]{0};
int main(){
    cin>>r>>n;
    int l,t,w,h;
    for(int i=0;i<n;i++){
        cin>>l>>t>>w>>h;
        for(int j=l;j<l+w;j++)
            s[j]+=h;
    }
    for(int i=1;i<=r;i++)
        ss[i]=s[i-1]+ss[i-1];
    int lb=1,ub=r;
    while(lb+1<ub){
        int mid = (lb+ub)/2;
        if(ss[mid]>=ss[r]-ss[mid])//ok
            ub=mid;
        else lb=mid;
    }
    while(s[ub]==0&&ub<r) ub++; 
    //don't forget "ub<r"
    //pay attention to "edge"
    cout << ub << endl;
    return 0;
}