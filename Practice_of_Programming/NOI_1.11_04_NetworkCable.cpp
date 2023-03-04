#include<bits/stdc++.h>
using namespace std;
int n,k;
double l[10010];
int main(){
    cin>>n>>k;
    double maxl=0;
    for(int i=0;i<n;i++){
        cin>>l[i];
        maxl=max(maxl,l[i]);
    }
    double lb=0,ub=maxl+1;
    //ub is not reachable
    while(lb+0.001<ub){
        double mid=(lb+ub)/2;
        int num=0;
        for(int i=0;i<n;i++){
            num+=int(l[i]/mid);
            if(num>=k) break;//this is not necessary here
        }
        if(num>=k) lb=mid;//ok
        else ub=mid;
    }
    //attention: use the ubber bound!
    //the answer should be rounded down.
    if(ub<0.01) cout << "0.00" << endl;
    else {
        int ubb=ub*100;
        ub=ubb/100.0;
        printf("%.2f\n",ub);
    }
    return 0;
}