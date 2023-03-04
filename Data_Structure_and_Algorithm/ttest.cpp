#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum=0;
    for(int i=0;i<=50000;i++)
        sum+=i;
    cout << sum << endl;
    sum=50000*50001/2;
    cout << sum << endl;
    cout << (1<<22) << endl;
    return 0;
}