#include<bits/stdc++.h>
using namespace std;
typedef multimap<int,int> Member;
Member members;
inline int findMinId(Member::iterator fir,Member::iterator las){
    int id=fir->second;
    fir++;
    for(;fir!=las;fir++)
        id=min(id,fir->second);
    return id;
}
int main(){
    int n,id,attack,a1,a2,id1,id2;
    Member::iterator i1,i2,i,lb,ub;
    members.insert(Member::value_type(1000000000,1));
    cin>>n;
    while(n){
        n--;
        cin>>id>>attack;
        lb=members.lower_bound(attack);
        ub=members.upper_bound(attack);
        if(lb!=ub){
            cout << id << ' ' << findMinId(lb,ub) << endl;
            members.insert(Member::value_type(attack,id));
            continue;
        }
        members.insert(Member::value_type(attack,id));
        i=members.lower_bound(attack);
        if(i==members.begin()){
            i++;
            a1=i->first;
            lb=members.lower_bound(a1);
            ub=members.upper_bound(a1);
            cout << id << ' ' << findMinId(lb,ub) << endl;
            continue;
        }
        i1=i2=i;
        i1--;i2++;
        if(i2==members.end()){
            a1=i1->first;
            lb=members.lower_bound(a1);
            ub=members.upper_bound(a1);
            cout << id << ' ' << findMinId(lb,ub) << endl;
            continue;
        }
        a1=i1->first;
        a2=i2->first;
        id1=i1->second;
        id2=i2->second;
        int opn;
        if(attack-a1<a2-attack) {
            lb=members.lower_bound(a1);
            ub=members.upper_bound(a1);
            cout << id << ' ' << findMinId(lb,ub) << endl;
            continue;

        }
        else if(attack-a1>a2-attack) {
            lb=members.lower_bound(a2);
            ub=members.upper_bound(a2);
            cout << id << ' ' << findMinId(lb,ub) << endl;
            continue;

        }
        else {
            lb=members.lower_bound(a1);
            ub=members.upper_bound(a1);
            opn=findMinId(lb,ub);
            lb=members.lower_bound(a2);
            ub=members.upper_bound(a2);
            opn=min(opn,findMinId(lb,ub));
            cout << id << ' ' << opn<< endl;
            continue;
        }
    }
    return 0;
}