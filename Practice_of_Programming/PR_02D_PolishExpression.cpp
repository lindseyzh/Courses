#include<iostream>
#include<stack>
#include<cmath>
#include<string>
using namespace std;
//"float" results in WA 
double rec(){
    string op;
    cin>>op;
    if('0'<=op[0] && op[0]<='9'){
        return atof(op.c_str());
    }
    switch(op[0]){
        case '+':
            return rec()+rec();
        case '-':
            return rec()-rec();
        case '*':
            return rec()*rec();
        case '/':
            return rec()/rec();
    }
    return 0;
}
int main(){
    double ans=rec();
    printf("%f\n",ans);
    return 0;
}