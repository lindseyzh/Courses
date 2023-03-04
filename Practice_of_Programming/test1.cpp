#include<bits/stdc++.h>
using namespace std;
int main(){
    long long ans=1;
    for(int i=1;i<=9;i++)
        ans*=i;
    cout << ans << endl;
    return 0;
}