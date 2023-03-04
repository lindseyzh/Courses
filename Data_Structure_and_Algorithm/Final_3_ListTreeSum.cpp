
//Note: don't construct the tree (MLE)
#include<bits/stdc++.h>
using namespace std;
char mycin(){
    char c=getchar();
    while(c==' '|| c=='\n') c=getchar();
    return c;
}
char c;
bool ok=0;
bool gettree(int s){
    c=mycin();
    c=mycin();
    if(c==')') return 0;//no subtree
    int neg=1,a=0;
    if(c=='-') neg=-1;
    else a=c-'0';
    c=getchar();
    while(c>='0'&&c<='9') {
        a=a*10+c-'0';
        c=getchar();
    }
    a*=neg;
    ungetc(c,stdin);
    s-=a;
    bool lf=gettree(s);
    bool rt=gettree(s);
    if(s==0&&!lf&&!rt) ok=1;
    mycin();
    return 1;
}
int main(){
    int a;

    while(cin>>a){
        ok=0;
        gettree(a);
        if(ok) cout << "yes" << endl;
        else cout << "no" <<endl;
    }
    return 0;
}


//Note: don't construct the tree (MLE)
/*
g#include<bits/stdc++.h>
using namespace std;
struct nd{
    int v;
    nd * lf;
    nd * rt;
    nd(){}
    nd(int vv,nd * ll, nd*rr):v(vv),lf(ll),rt(rr){}
};
char mycin(){
    char c=getchar();
    while(c==' '|| c=='\n') c=getchar();
    return c;
}
char c;
nd * gettree(){
    c=mycin();
    c=mycin();
    if(c==')') return NULL;
    int neg=1,a=0;
    if(c=='-') neg=-1;
    else a=c-'0';
    c=getchar();
    while(c>='0'&&c<='9') {
        a=a*10+c-'0';
        c=getchar();
    }
    a*=neg;
    ungetc(c,stdin);
    nd * lf=gettree();
    nd * rt=gettree();
    mycin();
    nd * ans = new nd(a, lf,rt);
    return ans;
}
bool ok=0;
bool trav(nd * root,int s){
    if(ok) return 1;
    s-=root->v;
    if(root->lf==NULL&&root->rt==NULL){
        if(s==0) return 1;
        return 0;
    }
    if(root->lf && trav(root->lf,s)) return 1;
    if(root->rt && trav(root->rt,s)) return 1;
    return 0;
}
int main(){
    int a;

    while(cin>>a){
        nd * root = gettree();
        if(root && trav(root,a)) cout << "yes" << endl;
        else cout << "no" <<endl;
    }
    return 0;
}
*/