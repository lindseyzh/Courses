#include<bits/stdc++.h>
using namespace std;
int n,h[330][330],t;
bool cs[330][330];
int mov[4][2]={1,0,-1,0,0,1,0,-1};
int mid;
void color(int x,int y){
    for(int i=0;i<4;i++){
        int xx=x+mov[i][0];
        int yy=y+mov[i][1];
        if(xx<0||yy<0||xx==n||yy==n) continue;
        if(cs[xx][yy] || h[xx][yy]>mid) continue;
        cs[xx][yy]=1;
        color(xx,yy);
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>h[i][j];
    int lb=h[0][0],ub=10000000;
    while(lb+1<ub){
        mid=(lb+ub)/2;
        memset(cs,0,sizeof(cs));
        cs[0][0]=1;
        color(0,0);
        if(cs[n-1][n-1]) ub=mid;
        else lb=mid;
    }
    //二分时注意边界条件的特判(或者找一个不需要特判的办法?)
    memset(cs,0,sizeof(cs));
    cs[0][0]=1;
    mid=ub-1;
    color(0,0);
    if(cs[n-1][n-1]) ub=mid;
    cout << ub << endl;
    return 0;
}