//Jun.18_02
#include<bits/stdc++.h>
#define INF 1000000
using namespace std;
const int MAXL=1<<10+10;//It's said that at most 15 projs, but 10 is ok
int dp[MAXL];
int d[20],c[20];
string s[20];
int casenum,check[20];
inline int curv(int a){
    return max(a,0);
}
struct nd{
    int t;
    string s="ZZZ";
    nd(){}
    nd(int tt):t(tt){}
};
nd info[MAXL];
int n;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<17;i++)
        check[i]=1<<i;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>s[i]>>d[i]>>c[i];
        casenum=1<<n;
        for(int i=0;i<casenum;i++){
            dp[i]=INF;
        }
        for(int i=0;i<n;i++){
            int ii=1<<i;
            dp[ii]=curv(c[i]-d[i]);
            info[ii].t=c[i];
            info[ii].s=s[i]+"\n";
        }
        for(int i=0;i<casenum;i++){
            for(int j=0;j<n;j++)
                if(i&check[j]){
                    int las=i-check[j];
                    if(las==0) continue;
                    int dpp=dp[las]+curv(info[las].t+c[j]-d[j]);
                    string ns=info[las].s+s[j]+"\n";
                    if(dp[i]>dpp){
                        dp[i]=dpp;
                        info[i].t=info[las].t+c[j];
                        info[i].s=ns;
                    }
                    else if(dp[i]==dpp && info[i].s>ns){
                        info[i].t=info[las].t+c[j];
                        info[i].s=ns;
                    }
                }
        }
        cout << dp[casenum-1] << endl;
        cout << info[casenum-1].s;

    }
    return 0;
}