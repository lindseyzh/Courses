#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int bestl=INT_MAX;
int ansa=-1,ansb=-1;
enum oper {afill=0,adrop,apour,bfill,bdrop,bpour};
string s[6]={
    "FILL(1)","DROP(1)","POUR(1,2)","FILL(2)","DROP(2)","POUR(2,1)"
};
struct nd{
    int a,b;
    int la,lb;
    int op=-1;
    int len=0;
    nd(){}
    nd(int aa,int bb,int l=-1,int ll=-1,int o=-1,int le=0):
        a(aa),b(bb),la(l),lb(ll),op(o),len(le){};
};
queue<nd> qn;
bool cs[102][102]{0};
nd stat[102][102];
void bfs(){
    qn.push(nd(0,0));
    while(1){
        if(qn.empty()) break;
        nd f = qn.front();
        if(f.a==c || f.b==c){
            if(f.len<bestl){
                ansa=f.a;
                ansb=f.b;
                bestl=f.len;
            }
            break;
        }
        if(f.a!=a) {
            if(!cs[a][f.b]){
                cs[a][f.b]=1;
                stat[a][f.b]=nd(a,f.b,f.a,f.b,afill,f.len+1);
                qn.push(stat[a][f.b]);
            }
        }
        if(f.a>0 && !cs[0][f.b]){
            cs[0][f.b]=1;
            stat[0][f.b]=nd(0,f.b,f.a,f.b,adrop,f.len+1);
            qn.push(stat[0][f.b]);
        }
        if(f.a>0 && f.b!=b){
            if(f.a>=b-f.b){
                int aa=f.a-(b-f.b);
                if(!cs[aa][b]) {
                cs[aa][b]=1;
                stat[aa][b]=nd(aa,b,f.a,f.b,apour,f.len+1);
                qn.push(stat[aa][b]);
                }
            }
            else{
                if(!cs[0][f.a+f.b]){
                    cs[0][f.a+f.b]=1;
                    stat[0][f.a+f.b]=nd(0,f.a+f.b,f.a,f.b,apour,f.len+1);
                    qn.push(stat[0][f.a+f.b]);
                }
            }
        }
        if(f.b!=b) {
            if(!cs[f.a][b]){
                cs[f.a][b]=1;
                stat[f.a][b]=nd(f.a,b,f.a,f.b,bfill,f.len+1);
                qn.push(stat[f.a][b]);
            }
        }
        if(f.b>0 && !cs[f.a][0]){
            cs[f.a][0]=1;
            stat[f.a][0]=nd(f.a,0,f.a,f.b,bdrop,f.len+1);
            qn.push(stat[f.a][0]);
        }
        if(f.b>0 && f.a!=a){
            if(f.b>=a-f.a){
                int bb=f.b-(a-f.a);
                if(!cs[a][bb]) {
                cs[a][bb]=1;
                stat[a][bb]=nd(a,bb,f.a,f.b,bpour,f.len+1);
                qn.push(stat[a][bb]);
                }
            }
            else{
                if(!cs[f.a+f.b][0]){
                    cs[f.a+f.b][0]=1;
                    stat[f.a+f.b][0]=nd(f.a+f.b,0,f.a,f.b,bpour,f.len+1);
                    qn.push(stat[f.a+f.b][0]);
                }
            }
        }
        qn.pop();
    }   
    

}
int main(){
    cin>>a>>b>>c;
    
    bfs();
    if(ansa==-1)
        cout << "impossible" << endl;
    else{
        cout << bestl << endl;
        vector<int> ans;
        int l=bestl;
        int aa=ansa,bb=ansb;
        while(l){
            l--;
            nd & thisn=stat[aa][bb];
            ans.push_back(thisn.op);
            aa=thisn.la;
            bb=thisn.lb;
        }
        for(int i=bestl-1;i>=0;i--)
            cout << s[ans[i]] << endl;
    }
    
    return 0;
}