#include<iostream>
using namespace std;
int a[610];
//if TLE, it's of some help to use an array "ggcd" to record gcd(i,j)
int gcd(int a,int b){
    if(a<b) {//swap(a,b);
        a^=b;
        b^=a;
        a^=b;
    }
    if(a%b==0) return b;
    else return gcd(b,a%b);
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ans=0;
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(gcd(a[i],a[j])==1) ans++;
    cout << ans << endl;

    return 0;
}