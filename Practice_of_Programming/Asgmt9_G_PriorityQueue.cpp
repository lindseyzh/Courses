#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> Pair;
deque<Pair> pri;
int FindPrimeFactor(int a){
    int num=0,i;
    int aa=a/2;
    for(i=2;i<=aa;i++){
        if(a<i) break;
        if(a%i!=0) continue;
        num++;
        while(a%i==0) a/=i; 
    }
    return num;
}
bool cmp(Pair & a, Pair & b){
    if(a.second==b.second) return a.first<b.first;
    return a.second<b.second;
}
int main(){
    int num,a;
    cin>>num;
    while(num){
        num--;
        for(int i=0;i<10;i++){
            cin>>a;
            pri.push_back(make_pair(a,FindPrimeFactor(a)));
        }
        sort(pri.begin(),pri.end(),cmp);
        cout << pri.rbegin()->first << ' ' << pri.begin()->first << endl;
        pri.pop_back();
        pri.pop_front();
    }
    return 0;
}