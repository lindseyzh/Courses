#include<set>
#include<iostream>
#include<string>
using namespace std;
multiset<int> sti;
set<int> added;
int main(){
    string ord;
    int n,a,m;
    set<int>::iterator i1,i2;
    cin>>n;
    while(n){
        n--;
        cin>>ord;
        if(ord=="add"){
            cin>>a;
            sti.insert(a);
            added.insert(a);
            cout << sti.count(a) << endl;
        }
        else if(ord=="del"){
            cin>>a;
            i1=sti.lower_bound(a);
            i2=sti.upper_bound(a);
            cout << sti.count(a) << endl;
            sti.erase(i1,i2);
        }
        else if(ord=="ask"){
            cin>>a;
            m=sti.count(a);
            cout << added.count(a) << ' ' << m << endl;
        }
    }
    return 0;
}