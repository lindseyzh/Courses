//1125-01

//Note: Number orders of prefix/infix expression are the same.
//ref:
//https://blog.csdn.net/jjaw2013/article/details/11838559
//https://www.luogu.com.cn/problem/solution/P1175
#include<bits/stdc++.h>
using namespace std;
stack<char> sop;
stack<int> snum;
string s;
inline int cal(int a, int b, char c){
    switch(c){
        case '+':
            return a+b;
        case '-':
            return b-a;
            //ATTENTION: not a-b !! 
        case '*':
            return a*b;
        case '/':
            return b/a;
            //ATTENTION: not a/b !! 
    }
    return 0;
}
inline int rankit(char c){
    switch(c){
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case ')':
        case '(':
            return 0;
        default:
            return -1;
    }
}
int main(){
    int len,n;
    cin>>n;
    while(n--){
        cin>>s;
        len=s.size();
        int i=0;
        while(i<len){
            int r=rankit(s[i]);
            if(r==-1){
                r=0;
                while(isdigit(s[i])){
                    r=r*10+s[i]-'0';
                    i++;
                }
                snum.push(r);
                // printf("snum push%d\n",r);
            }
            else if(r==0){
                if(s[i]=='(') sop.push(s[i]);
                else {
                    char c=sop.top();sop.pop();
                    while(c!='('){
                        int a=snum.top();snum.pop();
                        int b=snum.top();snum.pop();
                        // printf("cal %d%c%d=%d\n",a,c,b,cal(a,b,c));
                        snum.push(cal(a,b,c));
                        c=sop.top();sop.pop();
                    }
                }
                i++;
            }
            else{
                int stopr;
                if(sop.empty()) stopr=-2;
                else stopr=rankit(sop.top());
                if(r>stopr)
                    sop.push(s[i]);
                else{
                    while(r<=stopr){
                        int a=snum.top();snum.pop();
                        int b=snum.top();snum.pop();
                        snum.push(cal(a,b,sop.top()));
                        sop.pop();
                        if(sop.empty()) stopr=-2;
                        else stopr=rankit(sop.top());
                    }
                    sop.push(s[i]);
                }
                i++;
            }
        }
        while(!sop.empty()){
            int a=snum.top();snum.pop();
            int b=snum.top();snum.pop();
            snum.push(cal(a,b,sop.top()));
            sop.pop();
        }
        printf("%d\n",snum.top());
        snum.pop();
    }
    return 0;
}