//12.5-2
#include<bits/stdc++.h>
#define N 110
using namespace std;
enum Tag{lf=0,rt};
struct nd{
    char v;
    int d;
    bool tag;
    nd * lf;
    nd * rt;
    nd(){};
    nd(char vv,int dd, bool tt=0 ,nd * ll=0, nd*rr=0):v(vv),d(dd),tag(tt),lf(ll),rt(rr){}
};  
char s[N];
nd * lasone[30];
void preorder(nd * root){
    stack<nd*> sn;
    nd * pointer=root;
    sn.push(NULL);
    while(pointer){
        printf("%c",pointer->v);
        if(pointer->rt) 
            sn.push(pointer->rt);
        if(pointer->lf)
            pointer=pointer->lf;
        else {
            pointer=sn.top();
            sn.pop();
        }
    }
    printf("\n");
}
void inorder(nd * root){
    stack<nd*> sn;
    nd * pointer=root;
    while(pointer||!sn.empty()){
        if(pointer){
            sn.push(pointer);
            pointer=pointer->lf;
        }
        else{
            pointer=sn.top();
            sn.pop();
            printf("%c",pointer->v);
            pointer=pointer->rt;
        }
    }
    printf("\n");
}
struct ndd{
    nd * p;
    Tag tag;
    ndd(){};
    ndd(nd * pp, Tag tt):p(pp),tag(tt){}
};
void postorder(nd * root){
    stack<ndd> sn;
    nd * pointer = root;
    ndd cur;
    while(pointer||!sn.empty()){
        if(pointer){
            sn.emplace(pointer,lf);
            pointer=pointer->lf;
        }
        else{
            cur=sn.top();sn.pop();
            pointer=cur.p;
            if(cur.tag==lf){
                sn.emplace(pointer,rt);
                pointer=pointer->rt;
            }
            else{
                printf("%c",pointer->v);
                pointer=0;
            }
        }
    }
    printf("\n");
}
int main(){
    int n;
    cin>>n;
    while(n--){
        memset(lasone,0,sizeof(lasone));
        char c;
        cin>>c;getchar();
        nd * root = new nd(c,0);
        lasone[0]=root;
        while(cin.getline(s,N)){
            if(s[0]=='0') break;
            int len = strlen(s);
            char v=s[len-1];
            nd * cur;
            if(v=='*') cur=NULL;
            else {
                cur = new nd(v,len-1);
                lasone[len-1]=cur;
            }
            if(len>1){
                nd * parent = lasone[len-2];
                if(!parent->tag) {
                    parent->lf = cur;
                    parent->tag=1;
                }
                else parent->rt = cur;
            }
        }
        preorder(root);
        postorder(root);
        inorder(root);
        if(n) printf("\n");
    }

    return 0;
}