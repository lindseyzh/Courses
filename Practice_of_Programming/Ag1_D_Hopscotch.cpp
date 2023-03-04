#include<bits/stdc++.h>
using namespace std;
int l,n,m;
int p[50005];
int main(){ 
    cin>>l>>n>>m;
    int mind=INT_MAX;
    p[0]=0;
    for(int i=1;i<=n;i++){
        cin>>p[i];      
        mind=min(mind,p[i]-p[i-1]);
    }
    p[n+1]=l;
    mind=min(mind,p[n+1]-p[n]);
    int lb=mind,ub=l/(n-m+1);
    while(lb+1<ub){
        //note: if use "while(lb<ub)" here
        //      and "lb = mid else ub = mid-1"
        //      ->TLE
        int num=0,mid=(lb+ub)/2;
        int i=1,lastp=0;
        bool ok;
        while(1){
            while(p[i]-p[lastp]<mid&&i<n+1){ 
                i++;
            };
            if(i==n+1){
                if(p[n+1]-p[lastp]>=mid){
                    num++;
                }
                break;
            }//注意边界特判
            num++;lastp=i;i++;
        }
        if(num>=n-m+1) lb=mid;
        else ub=mid;
    }
    cout << lb << endl;
    return 0;
}