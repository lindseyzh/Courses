#include<bits/stdc++.h>
using namespace std;
int inod[70000],postod[70000],len;
bool fir=1;
class nd{
    public:
        nd * lf;
        nd * rt;
        int v;
        nd(){};
        nd(int vv,nd * ll=NULL,nd * rr=NULL):
            v(vv),lf(ll),rt(rr){}
};
nd * buildTree(int in_fir, int post_fir, int l){
    int rootnum=postod[post_fir+l-1];
    int in_proot;
    nd * root;
    if(l<=1) {
        if(l==1) root = new nd(rootnum);
        else root= NULL;
        return root;
    }
    root = new nd(rootnum);
    for(int i=in_fir;i<in_fir+l;i++){
        if(inod[i]==rootnum){
            in_proot=i;
            break;
        }
    }
    int lflen=in_proot-in_fir;
    int rtlen=l-1-lflen;
    root->lf = buildTree(in_fir,post_fir,lflen);
    root->rt = buildTree(in_proot+1,post_fir+lflen,rtlen);
    return root;
}
void preorder(nd * root){
    if(root==NULL) return;
    if(!fir) printf(" %d",root->v);
    else   {
        fir=0;
        printf("%d",root->v);
    }
    preorder(root->lf);
    preorder(root->rt);
}
int main(){
    int i=0;
    while(cin>>inod[i++]){
        if(cin.peek()!=' ')
            break;
    }
    i=0;
    while(cin>>postod[i++]){
        if(cin.get()!=' ')
            break;
    }
    len=i;
    nd * root=buildTree(0,0,len);
    preorder(root);
    return 0;
}