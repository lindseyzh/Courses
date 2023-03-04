#include<bits/stdc++.h>
using namespace std;
int n,x[102],y[102];
struct pt{
    int x,y;
    pt(){};
    pt(int xx, int yy):x(xx),y(yy){}
    bool operator<(pt & p){
        if(x!=p.x) return x<p.x;
        return y<p.y;
    }
};
int main(){
    int t;
    cin>>t;
    while(t){
        t--;
        cin>>n;
        int x,y;
        vector<pt> vp;
        int d=0;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            bool b=0;
            for(int j=0;j<(i-d);j++)
                if(vp[j].x==x && vp[j].y==y){
                    d++;
                    b=1;
                    break;
                }
            if(b) continue;
            vp.push_back(pt(x,y));
        }
        n-=d;
        sort(vp.begin(),vp.end());
        int num=0;
        for(int i=0;i<n;i++){
            x=vp[i].x;
            y=vp[i].y;
            for(int j=i+1;j<n;j++)
                if(vp[j].x==x){
                    for(int u=j+1;u<n;u++)
                        if(vp[u].y==y){
                            for(int v=u+1;v<n;v++)
                                if(vp[v].y==vp[j].y && vp[v].x==vp[u].x){
                                    num++;
                                    break;
                                    }
                        }
                }
                else break;
        }
        cout << num << endl;
    }
    return 0;
}