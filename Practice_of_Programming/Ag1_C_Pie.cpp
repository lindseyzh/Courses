#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
inline double volume(double r){
    return PI*r*r;
}
int main(){
    int n,f;
    double r;
    double v[10002];
    cin>>n>>f;
    f++;//cake for myself
    double maxv=0;
    for(int i=0;i<n;i++){
        cin>>r;
        v[i]=volume(r);
        maxv=max(maxv,v[i]);
    }
    double lb=0, ub=maxv;
    while(lb<=ub){
//        cout << lb << ' ' << ub << endl;
        if(ub-lb<=0.00001) break;
        //0.0001 is not ok
        double mid = (lb+ub)/2;
        int num=0;
        for(int i=n-1;i>=0;i--)
            num+=int(v[i]/mid);
            //note: don't use (int)a/b, that's ((int)a)/b!
        if(num>=f)  lb=mid;
        else ub=mid;
    }
    printf("%.3f\n",lb);
    return 0;
}