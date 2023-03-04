#include<bits/stdc++.h>
using namespace std;
char s[102],ss[102];
int l,p;
bool expre_value();
bool term_value();
bool factor_value();
bool expre_value(){
    bool ans=term_value();
    if(p==l) return ans;
    while(1){    
        char c=s[p];
        if(c=='|') {
            p++;
            ans=ans|term_value();
        }
        else break;
    }
    return ans;
}
bool term_value(){
    bool ans=factor_value();
    if(p==l) return ans; 
    while(1){
        char c=s[p];
        if(c=='&'){
            p++;
            ans=ans&factor_value();
        }
        else break;
    }
    return ans;
}
bool factor_value(){
    bool ans=1;
    if(p==l)  return ans;
    switch(s[p]){
        case '!':
            p++;
            ans=!factor_value();
            break;
        case '(':
            p++;
            ans=expre_value();
            p++;//for ')'
            break;
        case 'V':
            p++;
            ans=1;
            break;
        case 'F':
            p++;
            ans=0;
            break;
    }
    return ans;
}
int main(){
    int i=0;
    while(1){
        cin.getline(ss,102);
        i++;
        l=strlen(ss);
        int u=0;
        for(int j=0;j<l;j++){
            if(ss[j]!=' '){
                s[u]=ss[j];
                u++;
            }
        }
        l=u;
        if(l==0) return 0;
        p=0;
        printf("Expression %d: ",i);
        if(expre_value()) cout << 'V' << endl;
        else cout << 'F' << endl;
    }

    return 0;
}