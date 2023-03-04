//demo 1: NumbersTriangle
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    int a[102][102];
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<=i;j++)
            cin>>a[i][j];
    int dp[102][102];
    for(int i=0;i<n;i++)
        dp[n-1][i]=a[n-1][i];
    for(int i=n-2;i>=0;i--)
        for(int j=0;j<=i;j++)
            dp[i][j]=a[i][j]+max(dp[i+1][j],dp[i+1][j+1]);
    cout << dp[0][0] << endl;
    return 0;
}
*/

//demo 2: Longest Increasing Subsequence(LIS)
/*
#include<iostream>
using namespace std;
int main(){
    int n,a[10002],dp[10002];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        dp[i]=1;
        }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++)
            if(a[j]<a[i]) dp[i]=max(dp[i],dp[j]+1);
    }
    int ans=-1;
    for(int i=0;i<n;i++)
        ans=max(ans,dp[i]);
    cout << ans << endl;
    return 0;
}
*/

//demo 3: Longest Common Subsequence(LCS)
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string a,b;
    while(cin>>a>>b){
        int subs[502][502]{0};
        int l1=a.size(),l2=b.size();
        for(int i=0;i<l1;i++)
            if(a[i]==b[0]) {
                for(int j=i;j<l1;j++)
                    subs[j][0]=1;
                break;
            }
        for(int i=0;i<l2;i++)
            if(b[i]==a[0]) {
                for(int j=i;j<l2;j++)
                    subs[0][j]=1;
                break;
            }
        for(int i=1;i<l1;i++)
            for(int j=1;j<l2;j++){
                    subs[i][j]=max(subs[i-1][j],subs[i][j-1]);
                    if(a[i]==b[j]) subs[i][j]=max(subs[i][j],subs[i-1][j-1]+1);
                }
        cout << subs[l1-1][l2-1]<<endl;
    }

}   
*/

//demo 4: Min Result(no debugging
/*

#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,m,a[10];
    cin>>l>>m;
    char c;
    for(int i=0;i<l;i++){
        cin>>c;
        a[i]=c-'0';
    }
    int dp[10][10],num[10][10]{0};
    for(int i=0;i<l;i++){
        num[i][i]=a[i];
        for(int j=i+1;j<l;j++)
            num[i][j]=num[i][j-1]*10+a[j];
    }
    dp[0][0]=a[0];
    for(int i=1;i<l;i++)
        dp[i][0]=10*dp[i-1][0]+a[i];
    for(int i=1;i<l;i++)
        for(int j=1;j<=i;j++){
            dp[i][j]=INT_MAX;
            for(int u=j-1;u<i;u++)
                dp[i][j]=min(dp[i][j],dp[u][j-1]+num[u+1][j]);
        }
    cout << dp[l][m] << endl;
    return 0;
}
*/


//demo 201: Help Jimmy
/*
#include<iostream>
#include<algorithm>
#include<vector>
#include<limits.h>
using namespace std;
class Platform{
    public:
        int l,r,h=0;
        bool floorL=1,floorR=1;
        int bestL=INT_MAX,bestR=INT_MAX;
        Platform(int ll,int rr,int hh):l(ll),r(rr),h(hh){       }
        friend bool operator<(Platform & a, Platform & b){
            if(a.h==b.h) return a.l<b.l;
            return a.h>b.h;
        }
};
int main(){
    int t;
    cin>>t;
    while(t){
        t--;
        int n,x,y,maxh,l,r,h;
        vector<Platform> p; 
        cin>>n>>x>>y>>maxh;
        for(int i=0;i<n;i++){
            cin>>l>>r>>h;
            p.push_back(Platform(l,r,h));
        }
        p.push_back(Platform(-20000,20000,0));
        sort(p.begin(),p.end());
        int fir;
        for(int i=0;i<=n;i++)
            if(p[i].l<=x && p[i].r>=x){
                fir=i;
                p[i].bestL=y-p[i].h+(x-p[i].l);
                p[i].bestR=y-p[i].h+(p[i].r-x);
                break;
            } 
            else p[i].floorL=p[i].floorR=0;
        for(int i=fir+1;i<n;i++){
            for(int j=i-1;j>=fir;j--)
                if(p[j].h-p[i].h<=maxh && p[j].bestL<INT_MAX){
                    if(p[j].l>=p[i].l && p[j].l<=p[i].r){//left is ok
                        p[j].floorL=0;
                        int t=p[j].bestL+p[j].h-p[i].h;
                        p[i].bestL=min(p[i].bestL,t+p[j].l-p[i].l);
                        p[i].bestR=min(p[i].bestR,t+p[i].r-p[j].l);      
                    }
                    if(p[j].r>=p[i].l && p[j].r<=p[i].r){//right is ok
                        p[j].floorR=0;
                        int t=p[j].bestR+p[j].h-p[i].h;
                        p[i].bestL=min(p[i].bestL,t+p[j].r-p[i].l);
                        p[i].bestR=min(p[i].bestR,t+p[i].r-p[j].r);      
                    }                
                }
                else break;
        }
        int bestT=INT_MAX;
        for(int i=fir;i<=n;i++){
            if(p[i].floorL)
                bestT=min(bestT,p[i].bestL+p[i].h);
            if(p[i].floorR)
                bestT=min(bestT,p[i].bestR+p[i].h);
        }
        cout << bestT << endl;
    }
    return 0;
}
*/

//demo 202: 0-1 bag
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,w[4000],d[4000],dp[4000][13005];

    return 0;
}
*/

//demo 203: cake
/*
#include<bits/stdc++.h>
using namespace std;
int w,h,m;
int main(){
    while(cin>>w>>h>>m){
        if(w+h+m==0) return 0;
        int ways[22][22][22]{0};
        for(int i=1;i<=w;i++)
            for(int j=1;j<=h;j++){
                ways[i][j][1]=i*j;
                for(int u=2;u<=m;u++)
                    if(i*j<u) ways[i][j][u]=INT_MAX;
                }
        for(int i=1;i<=w;i++)
            for(int j=1;j<=h;j++){
                for(int u=2;u<=i*j;u++){
                    int ansv=INT_MAX,ansh=INT_MAX;
                    for(int k=1;k<=i/2;k++)
                        ansv=min(ansv,max(k*j,ways[i-k][j][u-1]));
                     for(int k=1;k<=j/2;k++)
                        ansh=min(ansh,max(i*k,ways[i][j-k][u-1]));
                   ways[i][j][u]=min(ansv,ansh);
                }
            }
        cout << ways[w][h][m] << endl;
    }
    return 0;
}
*/

//⭐demo 204: cows
#include<bits/stdc++.h>
using namespace std;
const int INF=1<<31; 
int n,l,a,b;
int cowthere[1000005]{0},f[1000005];
struct Fx{
    int x,f;
    Fx(int xx=0,int ff=0):x(xx),f(ff){};
    bool operator<(Fx &b){
        return f<b.f;
    }
};
priority_queue<Fx> qfx;
int main(){
    cin>>n>>l>>a>>b;
    int s,e;
    for(int i=0;i<n;i++){
        cin>>s>>e;
        cowthere[s]++;
        cowthere[e]--;
    }    
    int incow=0;
    for(int i=0;i<n;i++){
        f[i]=INF;
        incow+=cowthere[i];
        cowthere[i] = incow>0;
    }
    for(int i=a;i<=b;i+=2)
        if(!cowthere[i]){
            f[i]=1;
            if(i<=b+2-a)
                qfx.push(Fx(i,1));
        }
    for(int i=b+2;i<=l;i++){
        if(!cowthere[i]){
            Fx fx;
            while(!qfx.empty()){
                fx=qfx.top();
                if(fx.x<i-b)
                    qfx.pop();
                else 
                     break;
            }
            if(!qfx.empty())
                f[i]=fx.f+1;
            if(f[i-a+2]!=INF)
                qfx.push(Fx(i-a+2,f[i-a+2]));
            }   
        
    }
    if(f[l]==INF) cout << -1 << endl;
    else cout << f[l] << endl;
    return 0;
}
