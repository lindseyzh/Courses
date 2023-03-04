#include<bits/stdc++.h>
using namespace std;
const int MAXN = (1<<16)+10;
bool cs[MAXN]{0};
bool ini[16],tar[16];
int check[17];
int mov[4][2]={0,1,0,-1,1,0,-1,0};
int inis=0,tars=0;
int ans=-1;
struct nd{
    int stt,t;
    nd(){}
    nd(int s,int tt=0):stt(s),t(tt){};
};
queue<nd> qn;
void bfs(){
    qn.push(nd(inis));
    cs[inis]=1;
    while(!qn.empty()){
        nd fr=qn.front();
        qn.pop();
        int stt=fr.stt,t=fr.t;
        if(fr.stt==tars){
            ans=t;
            return;
        }
        //left
        for(int i=0;i<4;i++)
            for(int j=1;j<4;j++){
                int k=i*4+j;
                int kk=k-1;
                if((stt & check[k])==0) continue;
                if((stt & check[kk])!=0) continue;
                int nx=stt-check[k]+check[kk];
                if(cs[nx]) continue;
                cs[nx]=1;
                qn.push(nd(nx,t+1));
            }
        //right
        for(int i=0;i<4;i++)
            for(int j=1;j<4;j++){
                int k=i*4+j;
                int kk=k-1;
                if((stt & check[kk])==0) continue;
                if((stt & check[k])!=0) continue;
                int nx=stt-check[kk]+check[k];
                if(cs[nx]) continue;
                cs[nx]=1;
                qn.push(nd(nx,t+1));
            }
        //up
        for(int i=1;i<4;i++)
            for(int j=0;j<4;j++){
                int k=i*4+j;
                int kk=k-4;
                if((stt & check[k])==0) continue;
                if((stt & check[kk])!=0) continue;
                int nx=stt-check[k]+check[kk];
                if(cs[nx]) continue;
                cs[nx]=1;
                qn.push(nd(nx,t+1));
            }       
        //down
        for(int i=1;i<4;i++)
            for(int j=0;j<4;j++){
                int k=i*4+j;
                int kk=k-4;
                if((stt & check[kk])==0) continue;
                if((stt & check[k])!=0) continue;
                int nx=stt-check[kk]+check[k];
                if(cs[nx]) continue;
                cs[nx]=1;
                qn.push(nd(nx,t+1));
            }       
    }
}
int main(){
    char c;
    check[0]=1;
    for(int i=1;i<=16;i++)
        check[i]=check[i-1]<<1;
    for(int i=0;i<16;i++)
        {
            cin>>c;
            ini[i]=c-'0';
            if(ini[i]) 
                inis+=1<<i;
        }
    for(int i=0;i<16;i++)
        {
            cin>>c;
            tar[i]=c-'0';
            if(tar[i])
                tars+=1<<i;
        }
    bfs();
    cout << ans << endl;
    return 0;
}