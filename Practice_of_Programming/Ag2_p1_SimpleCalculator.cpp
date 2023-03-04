#include<bits/stdc++.h>
using namespace std;
int expre_value();
int term_value();
int factor_value();
int expre_value(){
    int ans = factor_value();
    while(1){
        char c=cin.peek();
        if(c=='+'||c=='-'){
            cin.get();
            if(c=='+') ans+=term_value();
            else ans-=term_value();
        }
        else break;
    }
    return ans;
}
int term_value(){
    int ans=factor_value();
    while(1){
        char c=cin.peek();
        if(c=='/'||c=='*'){
            cin.get();
            if(c=='*') ans*=factor_value();
            else ans/=factor_value();
        }
        else break;
    }
    return ans;
}
int factor_value(){
    int ans=0;
    char c=cin.peek();
    if(c=='('){
        cin.get();
        ans=expre_value();
        cin.get();//for ')'
    }
    else while(isdigit(c)){
        ans=ans*10+c-'0';
        cin.get();
        c=cin.peek();
    }
    return ans;
}
int main(){
    cout << expre_value() << endl;
    return 0;
}