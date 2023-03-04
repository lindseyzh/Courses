#include<iostream>
using namespace std;
int n,m,cost[100010];
int main(){
    cin>>n>>m;
    int  sum=0,maxc=0;
    for(int i=0;i<n;i++){
        cin>>cost[i];
        sum+=cost[i];
        maxc=max(maxc,cost[i]);
        }
    int lb=maxc-1,ub=sum;
    while(lb+1<ub){
        int mid=(lb+ub)/2;
        int num=0,i=0;
        while(i<n){
            int thissum=0;
            while(1){
                if(thissum+cost[i]>mid) break;
                else thissum+=cost[i];
                i++;
                if(i==n) break;
            }
            num++;
        }
        if(num<=m) ub=mid;
        else lb=mid;
    }
    cout << ub << endl;
    return 0;
}