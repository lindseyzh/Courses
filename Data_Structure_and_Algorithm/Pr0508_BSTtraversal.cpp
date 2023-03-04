//11.27-1
#include<bits/stdc++.h>
using namespace std;
struct nd{
    int v;
    nd * lf;
    nd * rt;
    nd(){};
    nd(int vv,nd * ll=0, nd*rr=0):v(vv),lf(ll),rt(rr){};
};
void preorder(nd * root){
    stack<nd*> aStack;
    nd * pointer=root;
    aStack.push(NULL);
    while(pointer){
        if(pointer!=root) printf(" ");
        printf("%d", pointer->v);
        if(pointer->rt) aStack.push(pointer->rt);
        if(pointer->lf) pointer=pointer->lf;
        else {
            pointer=aStack.top();
            aStack.pop();
        } 
    }
    printf("\n");
}
int main(){
    int a;
    cin>>a;
    nd * root = new nd(a);
    while(cin>>a){
        stack<nd*> aStack;
        nd * pointer=root;
        while(pointer||!aStack.empty()){
            if(pointer){
                if(a==pointer->v) break;
                if(a<pointer->v){
                    if(pointer->lf) pointer=pointer->lf;
                    else pointer->lf=new nd(a);
                }
                else{
                    if(pointer->rt) pointer=pointer->rt;
                    else pointer->rt=new nd(a);
                }
            }
        }
    }
    preorder(root);
    return 0;
}