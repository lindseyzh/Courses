#include<bits/stdc++.h>
using namespace std;
inline int area(int a,int b,int c){
    return 2*(a*b+b*c+c*a);
}
int main(){
    int n;
    cin>>n;
    int lb=int(pow(n,1/3));
    int mins=INT_MAX;
    for(int i=lb;i<=n;i++)
        if(n%i==0){
            int a=n/i;
            int lbba=int(sqrt(a));
            for(int j=lbba;j<=a;j++)
                if(a%j==0){
                    int u=a/j;
                    mins=min(mins,area(i,j,u));
                }
    }
    cout << mins << endl;
    
    return 0;
}