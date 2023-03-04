#include<bits/stdc++.h>
using namespace std;
#define N 1010000
struct nd{
    nd * lfc=0;//left child
    nd * rts=0;//right sibling
    nd * rtmost=0;//right most child
    nd * parent=0;//parent
    int d=0;
    nd(){}
    nd(nd * pp,int dd=0):parent(pp),d(dd){};
};
char c[N];
int main(){ 
    int v=0;
    while(cin.getline(c,N)){
        if(c[0]=='#') return 0;
        v++;
        nd * root = new nd;
        int l=strlen(c);
        nd * pointer=root;
        nd * cur;
        int h=0,maxh1=0,maxh2=0;
        //construction
        for(int i=0;i<l;i++)
            if(c[i]=='d'){
                h++;
                maxh1=max(h,maxh1);
                if(pointer->lfc==NULL){
                    int curd=pointer->d+1;
                    cur = new nd(pointer,curd);
                    maxh2=max(maxh2,curd);
                    pointer->lfc = cur;
                    pointer->rtmost = cur;
                    pointer=cur;
                }
                else {
                    int curd=pointer->rtmost->d+1;
                    cur = new nd(pointer,curd);
                    maxh2=max(maxh2,curd);
                    pointer->rtmost->rts=cur;
                    pointer->rtmost = cur;
                    pointer=cur;
                }
            }
            else{
                h--;
                pointer=pointer->parent;
            }
        
        //transfer
        printf("Tree %d: %d => %d\n",v,maxh1,maxh2);
    }
    return 0;
}