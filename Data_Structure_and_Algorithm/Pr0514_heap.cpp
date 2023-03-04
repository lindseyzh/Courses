//12.6-3
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        priority_queue<int, vector<int>, greater<int> > qi;
        cin>>n;
        int t,a;
        while(n--){
            cin>>t;
            if(t==1){
                cin>>a;
                qi.push(a);
            }
            else{
                a=qi.top();
                qi.pop();
                printf("%d\n",a);
            }
        }
    }

}