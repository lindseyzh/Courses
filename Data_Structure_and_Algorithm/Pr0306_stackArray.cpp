//1125-1
#include<bits/stdc++.h>
using namespace std;
#define N 1000010
int n,a[N];
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    stack<int> si;
    int i=0,cur=1;
    bool ok=0;
    while(1){
        while(si.empty()||si.top()!=a[i]){
            if(cur==n+1) break;
            si.push(cur++);
        }
        while(!si.empty() && si.top()==a[i]){
            si.pop();
            i++;
        }
        if(i==n) {
            ok=1;
            break;
        }
        if(cur==n+1) break;
    }
    if(!ok)
        cout << "NO" << endl;
    else{
        si=stack<int>();
        int i=0,cur=1;
        while(i<n){
            while(si.empty()||si.top()!=a[i]){
                printf("PUSH %d\n",cur);
                si.push(cur++);
            }
            while(!si.empty() && si.top()==a[i]){
                printf("POP %d\n",si.top());
                si.pop();
                i++;
            }
        }
    }
    
    return 0;
}