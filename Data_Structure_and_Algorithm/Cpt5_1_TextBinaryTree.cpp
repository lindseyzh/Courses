#include<bits/stdc++.h>
using namespace std;
class nd{
    public:
        char c;
        int tier=-2;
        nd * lf=NULL;
        nd * rt=NULL;
        nd(){};
        nd(char cc, int tt, nd*llf=NULL,nd*rrt=NULL):c(cc),tier(tt),lf(llf),rt(rrt){}
};
void preorder(nd*p){
    if(p==NULL) return;
    printf("%c",p->c);
    preorder(p->lf);
    preorder(p->rt);
}
void inorder(nd*p){
    if(p==NULL) return;
    inorder(p->lf);
    printf("%c",p->c);
    inorder(p->rt);
}
void postorder(nd*p){
    if(p==NULL) return;
    postorder(p->lf);
    postorder(p->rt);
    printf("%c",p->c);
}
int main(){
    int v;
    char s[100];
    cin>>v;
    while(v--){
        nd * lasone[110];
        cin>>s;
        nd * root = new nd;
        root->c=s[0];root->tier=0;
        nd * lasnd=root;
        nd * cur;
        lasone[0]=root;
        bool lasstar=0;
    //inpue
    while(cin>>s){
        if(s[0]=='0') break;
        int tier=strlen(s)-1;
        char c=s[tier];
        if(c=='*') {
            lasstar=1;
            continue;
        }
        cur = new nd;
        cur->c=c;
        cur->tier=tier;
        if(lasnd->tier==tier-1&&!lasstar){
            lasnd->lf=cur;
        }
        else {
            lasone[tier-1]->rt = cur;
        }
        lasone[tier]=cur;
        lasnd=cur;
        lasstar=0;
    }
    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    if(v) printf("\n");
    }
    return 0;
}