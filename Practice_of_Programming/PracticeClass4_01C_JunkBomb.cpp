#include<bits/stdc++.h>
using namespace std;
int ans[1100][1100]{0},num[1100][1100]{0};
int d;
void setplace(int x,int y,int nm){
    int lbx=max(0,x-d);
    int ubx=min(1024,x+d);
    int lby=max(0,y-d);
    int uby=min(1024,y+d);
    for(int i=lbx;i<=ubx;i++)
        for(int j=lby;j<=uby;j++){
            ans[i][j]+=nm;
            num[i][j]++;
            }
    return;
}
int main(){
    int n,x,y,ii;
    cin>>d>>n;
    for(int u=0;u<n;u++){
        cin>>x>>y>>ii;
        setplace(x,y,ii);
    }
    int maxs=0,pa=0;
    for(int i=0;i<=1024;i++)
        for(int j=0;j<=1024;j++)
            if(ans[i][j]>maxs){
            maxs=ans[i][j];
            pa=1;
            }
            else if(ans[i][j]==maxs){
                pa++;
            }
    cout << pa << ' '<<maxs<<endl;
    return 0;
}