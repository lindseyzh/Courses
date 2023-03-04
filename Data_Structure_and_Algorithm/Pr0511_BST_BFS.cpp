//12.6-4 
#include<bits/stdc++.h>
using namespace std;
struct nd{
    int v;
    nd * lf;
    nd * rt;
    nd(){}
    nd(int vv,nd * ll=0,nd*rr=0):v(vv),lf(ll),rt(rr){}
};
void bfs(nd * root){
    queue<nd*> qn;
    qn.push(root);
    nd * cur;
    bool fir=1;
    while(!qn.empty()){
        cur=qn.front();qn.pop();
        if(cur->lf) qn.push(cur->lf);
        if(cur->rt) qn.push(cur->rt);
        if(fir) {printf("%d",cur->v);fir=0;}
        else printf(" %d",cur->v);
    }
    printf("\n");
}
int main(){
    int a;
    cin>>a;
    nd * root=new nd(a);
    nd * cur;
    while(cin>>a){
        cur=root;
        while(1){
            if(a==cur->v) break;//do nothing
            if(a<cur->v){
                //go left
                if(cur->lf==0) {
                    cur->lf=new nd(a);
                    break;
                }
                else cur=cur->lf;
            }
            else{
                if(cur->rt==0) {
                    cur->rt=new nd(a);
                    break;
                }
                else cur=cur->rt;
            }
        }
    }
    bfs(root);
    return 0;
}