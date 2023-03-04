#include<bits/stdc++.h>
using namespace std;
int n,k;
double a[10010];
int main(){
    cin>>n>>k;
    double maxl=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        maxl=max(maxl,a[i]);
    }
    double lb=0,ub=maxl+1;
    while(ub-lb>0.001){
        double mid=(lb+ub)/2;
        int num=0;
        for(int i=0;i<n;i++)
            num+=int(a[i]/mid);
        if(num>=k) lb=mid;
        else ub=mid;
    }
    //use upper bound here!!!!!!!
    if(ub<0.01) ub=0;
    else ub=(int(ub*100))/100.0;
    printf("%.2f\n",ub);
    
    return 0;
}