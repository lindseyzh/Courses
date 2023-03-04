//11.27-4
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<char> sc;
    char c;
    int num=0;
    while(cin>>c){
        switch(c){
            case '<':
            case '{':
            case '[':
            case '(':
                sc.push(c);
                break;
            default:
                if(!sc.empty()){
                    char a=sc.top();
                    switch(a){
                        case '<':
                            if(c!='>') num++;
                            sc.pop();
                            break;
                        case '{':
                            if(c!='}') num++;
                            sc.pop();
                            break;
                        case '[':
                            if(c!=']') num++;
                            sc.pop();
                            break;
                        case '(':
                            if(c!=')') num++;
                            sc.pop();
                            break;
                    }
                }
                else{
                    cout << "Impossible" << endl;
                    return 0;
                }
        }
    }
    if(!sc.empty()) cout << "Impossible" << endl;
    else cout << num << endl;
    return 0;
}