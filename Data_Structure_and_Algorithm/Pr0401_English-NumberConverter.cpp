//11.24-03
#include<bits/stdc++.h>
using namespace std;
string s;
vector<string> vs;
map<string,int> dict;
int cvt(){
    int pos=0;
    bool neg=0;
    int ans=0,cur3=0,cur=0;
    if(vs[0]=="negative")
        neg=1,pos++;
    while(pos<vs.size()){
        if(vs[pos]=="hundred"){
            cur3+=cur*100;
            cur=0;
        }
        else if(vs[pos]=="thousand"){
            ans+=(cur3+cur)*1000;
            cur3=0;cur=0;
        }
        else if(vs[pos]=="million"){
            ans+=(cur3+cur)*1000000;
            cur3=0;cur=0;
        }
        else{
            cur+=dict[vs[pos]];
        }
        pos++;
    }
    ans+=cur3+cur;
    if(neg) ans=-ans;
    return ans;
}
void Init_dict(){
    dict["zero"]=0;
    dict["one"]=1;
    dict["two"]=2;
    dict["three"]=3;
    dict["four"]=4;
    dict["five"]=5;
    dict["six"]=6;
    dict["seven"]=7;
    dict["eight"]=8;
    dict["nine"]=9;
    dict["ten"]=10;
    dict["eleven"]=11;
    dict["twelve"]=12;
    dict["thirteen"]=13;
    dict["fourteen"]=14;
    dict["fifteen"]=15;
    dict["sixteen"]=16;
    dict["seventeen"]=17;
    dict["eighteen"]=18;
    dict["nineteen"]=19;
    dict["twenty"]=20;
    dict["thirty"]=30;
    dict["forty"]=40;
    dict["fifty"]=50;
    dict["sixty"]=60;
    dict["seventy"]=70;
    dict["eighty"]=80;
    dict["ninety"]=90;
    dict["hundred"]=100;
    dict["thousand"]=1000;
    dict["million"]=1000000;
}
int main(){
    Init_dict();
    while(cin>>s){
        vs.push_back(s);
        if(getchar()=='\n'){
            cout << cvt() << endl;
            vs.clear();
        }
    }
    return 0;   
}