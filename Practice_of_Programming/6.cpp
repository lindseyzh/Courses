#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[10010];
inline bool ok(int num){
    for(int i=n-1;i>=num-1;i--){
        int sum=0;
        for(int j=i-1;j>i-num;j++)
            sum+=a[i]-a[j];
        if(sum<=k) return 1;
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int sum=0,mina=1000000;
        //可能要longlong
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            mina=min(mina,a[i]);
        }
        sort(a,a+n);
        for(int i=0;i<n;i++)
            cout << a[i] << endl;
        int lb=0,ub=n;
        while(lb+1<ub){
            int mid=lb+(ub-lb)/2;
            if(ok(mid)) lb=mid;
            else ub=mid; 
        }
        if(ok(ub)) cout << ub << endl;
        else    cout << lb << endl;
    }
    return 0;
}