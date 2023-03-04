#include<bits/stdc++.h>
using namespace std;
set<string> dict;
vector<string> vs;
inline bool cmp(string a, string b){
    int la=a.size();
    int lb=b.size();
    if(la==lb){
        bool ok=1,used=0;
        for(int i=0;i<la;i++)
            if(a[i]!=b[i]){
                if(!used) {
                    used=1;
                }
                else {
                    ok=0;break;
                }
            }
        return ok;
    }
    else if(la==lb+1){
        bool used=0,ok=1;
        for(int i=0;i<la;i++)
            if(a[i]!=b[i-used]){
                if(used==0) used=1;
                else {
                    ok=0;break;
                }
            }
        return ok;
    }
    else if(la+1==lb){
        bool used=0,ok=1;
        for(int i=0;i<lb;i++)
            if(a[i-used]!=b[i]){
                if(used==0) used=1;
                else {
                    ok=0;break;
                }
            }
        return ok;
    }
    return 0;
}
int main(){
    string s;
    while(cin>>s){
        if(s[0]=='#') break;
        dict.insert(s);
        vs.push_back(s);
    }
    while(cin>>s){
        if(s[0]=='#') break;
        if(dict.count(s)) 
            printf("%s is correct\n",s.c_str());
        else{
            vector<string>::iterator is;
            printf("%s:",s.c_str());
            for(is=vs.begin();is!=vs.end();is++){
                if(cmp(s,*is))
                    printf(" %s",is->c_str());
            }
        printf("\n");
        }
    }
    return 0;
}