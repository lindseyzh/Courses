//Reference: https://blog.csdn.net/weixin_59966536/article/details/127642229?app_version=5.10.0&code=app_1562916241&csdn_share_tail=%7B%22type%22%3A%22blog%22%2C%22rType%22%3A%22article%22%2C%22rId%22%3A%22127642229%22%2C%22source%22%3A%22weixin_59966536%22%7D&uLinkId=usr1mkqgl919blen&utm_source=app
#include<bits/stdc++.h>
using namespace std;
char mycin(){
    char c=getchar();
    while(c==' '||c=='\n') c=getchar(); 
    return c;
}
bool ok;
int tar;
bool traverse(int s){
    //if(ok) return 1;//this may result in input error
    char c=' ';
    c=mycin();    
    c=mycin();
    if(c==')')  {
        return 0;
    }
    //get int
    int v=0;
    bool neg=0;
    if(c=='-') {
        neg=1;
        c=getchar();
    }
    while(c<='9'&&c>='0'){
        v=v*10+c-'0';
        c=getchar();
    }
    ungetc(c,stdin);
    if(neg) v=-v;
    s+=v;
    //printf("new node with value %d\n",v);
    bool a1=traverse(s);
    bool a2=traverse(s);
    if(s==tar && !a1 && !a2) ok=1;
    c=mycin();
    return 1;
}
int main(){
    while(cin>>tar){
        ok=0;
        traverse(0);
        if(ok) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}