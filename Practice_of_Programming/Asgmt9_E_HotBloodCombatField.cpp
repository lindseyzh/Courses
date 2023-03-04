#include<bits/stdc++.h>
using namespace std;
typedef map<int,int> Member;
Member members;
int main(){
    int n,id,attack,a1,a2,id1,id2;
    Member::iterator i1,i2,i;
    members.insert(Member::value_type(1000000000,1));
    cin>>n;
    while(n){
        n--;
        cin>>id>>attack;
        members.insert(Member::value_type(attack,id));
        i=members.lower_bound(attack);
        if(i==members.begin()){
            i++;
            cout << id << ' ' << i->second << endl;
            continue;
        }
        i1=i2=i;
        i1--;i2++;
        if(i2==members.end()){
            cout << id << ' ' << i1->second << endl;
            continue;  
        }
        a1=i1->first;
        a2=i2->first;
        id1=i1->second;
        id2=i2->second;
        cout << id << ' ' << (attack-a1<=a2-attack?id1:id2) << endl;
    }
    return 0;
}