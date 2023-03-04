//12.5-01
#include<bits/stdc++.h>
using namespace std;
struct nd{
    int v;
    nd * lf;
    nd * rt;
    nd(){}
    nd(int vv, nd * ll=NULL, nd * rr=NULL):v(vv),lf(ll),rt(rr){}
};
vector<int> vpost,vin;
inline int find_idx(int v){
    int l = vin.size();
    for(int i=0;i<l;i++)
        if(vin[i]==v) return i;
    return -1;
}
nd * buildtree(int lfin,int lfpost,int len){
    int v = vpost[lfpost+len-1];
    if(len<=0) return NULL;
    int rootp=find_idx(v);
    int lflen = rootp-lfin;
    int rtlen = len-lflen-1;
    nd * lf = buildtree(lfin, lfpost, lflen);
    nd * rt = buildtree(rootp+1, lfpost+lflen, rtlen);
    nd * root = new nd(v, lf, rt);
    return root;
}
void preorder(nd * root){
    if(root==NULL) return;
    nd * pointer = root;
    stack<nd*> sn;
    sn.push(NULL);
    bool fir=1;
    while(pointer){
        if(fir) {
            printf("%d",pointer->v);
            fir=0;
        }
        else printf(" %d",pointer->v);
        if(pointer->rt) sn.push(pointer->rt);
        if(pointer->lf) pointer = pointer->lf;
        else {
            pointer = sn.top();
            sn.pop();
        }
    }
    printf("\n");
}
int main(){
    int a;

    //input
    while(cin>>a){
        vin.push_back(a);
        if(getchar()!=' ') break;
    }
    while(cin>>a){
        vpost.push_back(a);
        if(getchar()!=' ') break;
    }
    nd * root = buildtree(0,0,vin.size());
    preorder(root);
    return 0;
}