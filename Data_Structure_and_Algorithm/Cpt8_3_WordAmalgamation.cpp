//map
#include<bits/stdc++.h>
using namespace std;
map<string,string> dict;
int main(){
    string s,ss;
    while(cin>>s){
        if(s[0]=='X') break;
        ss=s;
        sort(ss.begin(),ss.end());
        dict.insert(make_pair(s,ss));
    }
    while(cin>>s){
        if(s[0]=='X') break;
        ss=s;
        bool ok=0;
        sort(ss.begin(),ss.end());
        for(auto it=dict.begin();it!=dict.end();it++)
            if(it->second==ss){
                cout << it->first << endl;
                ok=1;
            }
        if(!ok) cout << "NOT A VALID WORD" << endl;
        cout << "******" << endl;
    }
    return 0;
}

//reference: https://blog.csdn.net/Q_M_X_D_D_/article/details/83688796