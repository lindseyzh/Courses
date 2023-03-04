#include<bits/stdc++.h>
using namespace std;
int a[100010];
int n,m;
int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    cin>>m;
    int i=0,j=n-1;
    while(i<j){
        while(a[i]+a[j]>m&&i<j) j--;
        while(a[i]+a[j]<m&&i<j) i++;
        if(i!=j&&a[i]+a[j]==m) {
            cout << a[i]<< ' ' << a[j] << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}