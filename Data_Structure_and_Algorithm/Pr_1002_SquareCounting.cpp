#include<bits/stdc++.h>
using namespace std;
struct nd{
    int x,y;
    nd(){}
    nd(int xx,int yy):x(xx),y(yy){}
};
int main(){
    int n;
    while(cin>>n){
        if(n==0) return 0;
        vector<nd> vn;
        set<nd> sn;
        int x,y;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            nd cur(x,y);
            vn.push_back(cur);
            sn.insert(cur);
        }
        for(int i=0;i<n-1;i++){
            int xa=vn[i].x,ya=vn[i].y;
            for(int j=i+1;j<n;j++){
                int xb=vn[j].x,yb=vn[j].y;
                int dx=
            }
        }
    }
    return 0;
}