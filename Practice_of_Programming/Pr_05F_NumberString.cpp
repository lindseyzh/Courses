//Jun.16_4
#include<bits/stdc++.h>
using namespace std;
#define INF 1000000
int a[5]={1,2,3,4,5};
bool cs[100010][4][3]{0};
int ok[100010];
struct nd{
    int a[5],num=0;
    int op,op2,op3;
    nd(){}
    nd(int * aa,int o,int o2=0,int o3=0):op(o),op2(o2),op3(o3){
        num=0;
        for(int i=0;i<5;i++){
            a[i]=aa[i];
            num=num*10+a[i];
        }
    }
    int & operator[](int p){
        return a[p];
    }
};
queue<nd> qn;
void swapit(nd fr){
    int op2=fr.op2,op3=fr.op3,op=fr.op;
    int b[5];
    for(int i=0;i<5;i++)
        b[i]=fr[i];
    for(int i=0;i<4;i++){
        b[i]^=b[i+1];b[i+1]^=b[i];b[i]^=b[i+1];
        nd nx(b,op+1,op2,op3);
        if(!cs[nx.num][op2][op3]){
            cs[nx.num][op2][op3]=1;
            ok[nx.num]=min(ok[nx.num],op+1);
            qn.push(nx);
        }
        b[i]^=b[i+1];b[i+1]^=b[i];b[i]^=b[i+1];
    }
}
void bfs(){
    ok[12345]=0;
    cs[12345][0][0]=1;
    nd ini(a,0);
    qn.push(ini);
    while(1){
        if(qn.empty()) break;
        nd fr=qn.front();
        qn.pop();
        int op2=fr.op2,op3=fr.op3,op=fr.op;
        int b[5];
        for(int i=0;i<5;i++)
            b[i]=fr[i];
        //1:swap
        swapit(fr);
        //2:add 1
        if(op2<3)
            for(int i=0;i<5;i++){
                b[i]=(b[i]+1)%10;
                nd nx(b,op+1,op2+1,op3);
                if(!cs[nx.num][op2+1][op3]) {
                    cs[nx.num][op2+1][op3]=1;
                    ok[nx.num]=min(ok[nx.num],op+1);
                    qn.push(nx);
                }
                b[i]=(b[i]+9)%10;    
            }
        //3:double
        if(op3<2)
            for(int i=0;i<5;i++){
                int k=b[i];
                b[i]=(2*b[i])%10;
                nd nx(b,op+1,op2,op3+1);
                if(!cs[nx.num][op2][op3+1]) {
                    cs[nx.num][op2][op3+1]=1;
                    ok[nx.num]=min(ok[nx.num],op+1);
                    qn.push(nx);
                }
                b[i]=k;
            }
    }
}
int main(){
    string s;
    for(int i=0;i<=99999;i++)
        ok[i]=INF;
    bfs();
    while(cin>>s){
        for(int i=0;i<5;i++)
            a[i]=s[i]-'0';
        nd nx(a,0);
        if(ok[nx.num]<INF) cout << ok[nx.num] << endl;
        else cout << -1 << endl;
    }

    return 0;
}