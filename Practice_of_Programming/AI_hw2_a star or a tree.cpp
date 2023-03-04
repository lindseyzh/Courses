#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
const int INF=INT_MAX;
float step=2500,endstep=0.2;
int n;
float cx[102],cy[102];
int mov[8][2]={1,1,1,-1,-1,1,-1,-1,0,1,0,-1,-1,0,1,0};
inline float cal(float nx,float ny){
    float s=0;
    for(int i=0;i<n;i++)
        s+=sqrt(pow(nx-cx[i],2)+pow(ny-cy[i],2));
    return s;
}
int main(){
    cin>>n;
    int i,j;
    for(i=0;i<n;i++)
        cin>>cx[i]>>cy[i];
    float bx=5000,by=5000;
    float nx,ny;
    float thisd,bestd;
    bestd=cal(bx,by);
    while(step>endstep){
        float xx,yy,dd=INF;
        for(i=0;i<8;i++){
            nx=bx+step*mov[i][0];
            ny=by+step*mov[i][1];
            thisd=cal(nx,ny);
            if(thisd<dd){
                dd=thisd;
                xx=nx;
                yy=ny;
            }
        }
        if(dd<bestd){
            bx=xx;
            by=yy;
            bestd=thisd;
        }
        step/=2;
    }
    cout << round(bestd) << endl;
    return 0;
}