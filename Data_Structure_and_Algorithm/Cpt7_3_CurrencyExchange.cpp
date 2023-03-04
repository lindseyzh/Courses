//Reference: https://blog.csdn.net/weixin_44694282/article/details/99678370
//Bellman-Ford Algorithm / SPFA
//Wiki: 
//Bellmen-Ford Algo: https://zh.wikipedia.org/wiki/%E8%B4%9D%E5%B0%94%E6%9B%BC-%E7%A6%8F%E7%89%B9%E7%AE%97%E6%B3%95
//SPFA: https://zh.wikipedia.org/wiki/%E6%9C%80%E7%9F%AD%E8%B7%AF%E5%BE%84%E5%BF%AB%E9%80%9F%E7%AE%97%E6%B3%95
#include<bits/stdc++.h>
using namespace std;
#define N 110
int n,m,s;
double v,r[N][N]{0},c[N][N]{0};
bool inqueue[N]{0};
double d[N]{0};
int main(){ 
    cin>>n>>m>>s>>v;
    int a,b;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        cin>>r[a][b]>>c[a][b]>>r[b][a]>>c[b][a];
    }
    d[s]=v;
    queue<int> qc;
    qc.push(s);
    inqueue[s]=1;
    //SPFA
    while(!qc.empty()){
        int e=qc.front();
        qc.pop();
        inqueue[e]=0;
        for(int i=1;i<=N;i++){
            double tmp = (d[e]-c[e][i])*r[e][i];
            if(tmp>d[i]){
                d[i]=tmp;
                if(!inqueue[i]){
                    qc.push(i);
                    inqueue[i]=1;
                }
            }
        }
        if(d[s]>v) break;
    }
    if(d[s]>v) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}