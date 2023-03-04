//12.6-02
#include<bits/stdc++.h>
using namespace std;
inline int cal(int a,int b,char c){
    switch(c){
        case '+':
            return b+a;
        case '-':
            return b-a;
        case '*':
            return b*a;
        case '/':
            return b/a;
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
        case '(':
        case ')':
            return 0;
        default:
            return -1;
    }
    return -1;
}
stack<char> sop;
stack<int> snum;
inline int getstopr(){
    if(sop.empty()) return -2;
    return rankit(sop.top());
}
int main(){
    int n;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        int len=s.size();
        int i=0;
        while(i<len){
            char c=s[i++];
            int r=rankit(c);

            if(r==-1){//is digit
                int a=c-'0';
                while(isdigit(s[i])){
                    a=a*10+s[i]-'0';
                    i++;
                }
                snum.push(a);
                // printf("put %d\n",a);
                continue;
            }   

            if(r==0){
                if(c=='(') sop.push(c);
                else{
                    while(sop.top()!='('){
                        c=sop.top();sop.pop();
                        int a=snum.top();snum.pop();
                        int b=snum.top();snum.pop();    
                        // printf("put %d\n",cal(a,b,c));       
                        snum.push(cal(a,b,c));
                    }
                    sop.pop();//pop out '('
                }
                continue;
            }  
            int stopr=getstopr();
            if(stopr<r){
                sop.push(c);
            }
            else{
                while(getstopr()>=r){
                    char op=sop.top();sop.pop();
                    int a=snum.top();snum.pop();
                    int b=snum.top();snum.pop();
                    snum.push(cal(a,b,op));
                    // printf("put %d\n",cal(a,b,c));       
                }
                sop.push(c);
            }
        }
        while(!sop.empty()){
            char c=sop.top();sop.pop();
            int a=snum.top();snum.pop();
            int b=snum.top();snum.pop();
            snum.push(cal(a,b,c));
        }
                    // printf("put %d\n",cal(a,b,c));       
        printf("%d\n",snum.top());
        snum.pop();
    }

    return 0;
}