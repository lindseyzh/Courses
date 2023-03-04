#include<bits/stdc++.h>
using namespace std;
class nd{
    public:
        nd * lfchild=NULL;
        nd * rtmostchild=NULL;
        nd * rtsibling=NULL;
        nd * parent=NULL;        
};
int len,depth_tree,depth_btree;
inline nd * trans(){
    nd * root = new nd;
    nd * las=root;
    nd * cur;
    char c;
    int curdepth=0;
    depth_tree=0;
    while(cin>>c){
        if(c=='#') return NULL;
        if(c=='d'){
            cur=new nd;
            cur->parent=las;
            if(las->lfchild==NULL) {
                las->lfchild=las->rtmostchild=cur;
            }
            else{
                las->rtmostchild->rtsibling=cur;
                las->rtmostchild=cur;
            }
            curdepth++;
            depth_tree=max(curdepth,depth_tree);
            las=cur;
        }
        else{
            las=las->parent;
            curdepth--;
        }
        if(cin.peek()!='u'&&cin.peek()!='d') break;
    }
    return root;
}
int preorder(nd * root){
    if(root==NULL) return 0;
    int d1=preorder(root->lfchild);
    int d2=preorder(root->rtsibling);
    return max(d1,d2)+1;
}
int main(){
    int set=0;
    while(1){
        nd * root=trans();
        if(root==NULL) return 0;
        depth_btree=preorder(root)-1;
        printf("Tree %d: %d => %d\n",++set,depth_tree,depth_btree);
    }
    return 0;
}