//std solution: start from the ground
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
        int fir=-1;
        for(int i=0;i<n;i++)
            if(p[i].l<=x && p[i].r>=x){
                fir=i;
                p[i].bestL=y-p[i].h+(x-p[i].l);
                p[i].bestR=y-p[i].h+(p[i].r-x);
                break;
            } 
            else p[i].floorL=p[i].floorR=0;
        if(fir==-1){
            cout << y << endl;
            continue;
        }
        for(int i=fir+1;i<n;i++){
            for(int j=i-1;j>=fir;j--)
                if(p[j].h-p[i].h<=maxh){
                    if(p[j].bestL==INT_MAX) continue;
                    if(p[j].floorL && p[j].l>=p[i].l && p[j].l<=p[i].r){//left is ok
                        p[j].floorL=0;
                        int t=p[j].bestL+p[j].h-p[i].h;
                        p[i].bestL=min(p[i].bestL,t+p[j].l-p[i].l);
                        p[i].bestR=min(p[i].bestR,t+p[i].r-p[j].l);      
                    }
                    if(p[j].floorR && p[j].r>=p[i].l && p[j].r<=p[i].r){//right is ok
                        p[j].floorR=0;
                        int t=p[j].bestR+p[j].h-p[i].h;
                        p[i].bestL=min(p[i].bestL,t+p[j].r-p[i].l);
                        p[i].bestR=min(p[i].bestR,t+p[i].r-p[j].r);      
                    }                
                }
        }
        int bestT=INT_MAX;
        for(int i=fir;i<n;i++)
            if(p[i].h<=maxh)
            {
                if(p[i].bestL==INT_MAX) continue;
                if(p[i].floorL)
                    bestT=min(bestT,p[i].bestL+p[i].h);
                if(p[i].floorR)
                    bestT=min(bestT,p[i].bestR+p[i].h);
            }
        cout << bestT << endl;
    }
    return 0;
}
