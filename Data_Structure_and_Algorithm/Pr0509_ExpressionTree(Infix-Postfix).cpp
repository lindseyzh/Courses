#include<bits/stdc++.h>
using namespace std;
stack<char> sop;
stack<char> dat;
inline int rankit(char c){
    switch(c){
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '(':
        case ')':
            return 0;
        default:
            return -1;
    }
}
inline int gettopr(){
    if(sop.empty()) return -2;
    return rankit(sop.top());
}
int num[30];
int main(){
    string s;
    cin>>s;
    int len=s.size();

    //trans
    for(int i=0;i<len;i++){
        int r=rankit(s[i]);
        if(r==-1){//s[i] is a variate
            dat.push(s[i]);
        }
        else if(r==0){//bracket
            if(s[i]=='(') sop.push(s[i]);
            else {//')'
                char c=sop.top();sop.pop();
                while(c!='('){
                    dat.push(c);
                    c=sop.top();sop.pop();
                }
            }
        }
        else{//operator
            int sr=gettopr();
            if(r>sr){
                sop.push(s[i]);
            }
            else{
                while(r>sr){
                    char c=sop.top();sop.pop();
                    dat.push(c);
                    sr=gettopr();
                }
                sop.push(s[i]);
            }
        }
        i++;
    }
    for(int i=0;i<len;i++){
        s[i]=dat.top();
        dat.pop();
    }
    cout << s << endl;
    
    return 0;
}