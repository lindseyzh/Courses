#include<iostream>
#include<cmath>
using namespace std;
int n;
double tp_begin=1e3,tp_end=1e-5;
double tp;
double r=.99;
struct point{
        double x,y,z;
};
point star[32];
point heart;
inline double cal(point a){
    return sqrt(pow(heart.x-a.x,2)+pow(heart.y-a.y,2)+pow(heart.z-a.z,2));
}
int main(){
    int i,j;
    double maxd;
    while(cin>>n){
        if(n==0) return 0;
        for(i=0;i<n;i++)
            cin>>star[i].x>>star[i].y>>star[i].z;
        tp=tp_begin;
        heart=star[0];
        while(tp>tp_end){
            point farest=star[0];
            double s=cal(farest);
            for(i=1;i<n;i++){
                double ss=cal(star[i]);
                if(ss>s){
                    farest=star[i];
                    s=ss;
                }
            }
            maxd=s;
            heart.x+=(farest.x-heart.x)*tp/s;
            heart.y+=(farest.y-heart.y)*tp/s;
            heart.z+=(farest.z-heart.z)*tp/s;
            tp*=r;
        }
        printf("%.5lf\n",maxd);
    }
    return 0;
}
//tips:if the precision is not good enough,you can try
//- to increase the rate 'r',eg:0.98->0.99
//- to decrease the ending temperature, eg: 1e-3->1e-5