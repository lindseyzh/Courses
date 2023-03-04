#include<bits/stdc++.h>
using namespace std;
priority_queue<int,vector<int>, greater<int> > * hp;
//Note: 
// Default: priority_queue<T,vector<T>,less<T> >;
// Example: prioirty_queue<T, greater<T> >   ---- x
//          priority_queue<T, deque<T>, greater<T> >  ----ok
// pq.pop() returns the biggest element
int main(){ 
    int tt,nn,a;
    cin>>tt;
    while(tt--){
    cin>>nn;
    delete hp;
    hp = new priority_queue<int, vector<int>,greater<int> >;
    while(nn--){
        cin>>a;
        if(a==1){
            cin>>a;
            hp->push(a);
        }
        else {
            a=hp->top();
            hp->pop();
            printf("%d\n",a);
        }
    }
    }
    return 0;
}