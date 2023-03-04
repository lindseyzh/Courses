#include<bits/stdc++.h>
using namespace std;
vector<string> vs;
inline int cvt(char c){
    if(c>='A'&&c<='Q') return (c-'A')/3 +2+'0';
    else if(c>='R'&&c<='Z') return (c-'A'-1)/3 +2+'0';
    else return c;
}
inline string stdst(string s){
    int i=0,curl=0;
    char ss[8];
    while(curl<7){
        while(s[i]=='-') i++;
        ss[curl++]=cvt(s[i++]);
    }
    ss[7]='\0';
    return string(ss);
}
map<string,int> ms;
int main(){
    int n;
    cin>>n;
    string s;
    while(n--){
        cin>>s;
        string ss=stdst(s);
        //printf("ss=%s\n",ss.c_str());
        if(ms.find(ss)!=ms.end())
            ms[ss]++;
        else ms[ss]=1;
    }
    bool nod=1;
    for(auto it=ms.begin();it!=ms.end();it++)
        if(it->second>1){
            nod=0;   
            printf("%s-%s %d\n",it->first.substr(0,3).c_str(),it->first.substr(3).c_str(),it->second);
        }
    if(nod) cout << "No duplicates." << endl;
    return 0;
}


/*
case:
12
4873279
ITS-EASY
888-4567
3-10-10-10
888-GLOP
TUT-GLOP
967-11-11
310-GINO
F101010
888-1200
-4-8-7-3-2-7-9-
487-3279
*/