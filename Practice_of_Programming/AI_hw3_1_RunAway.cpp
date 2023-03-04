#include<iostream>
#include<ctime>
#include<cmath>
#include<climits>
using namespace std;
int m;
float xx,yy;
int num=30;
float tp_begin=1e3,tp_end=1e-4;
float tp;
float r=0.995;
int ct=0;
class point{
    public:
        float x,y;
        float d=0;
        void cal();
        void gen(){
                x+=(1.0*rand()/RAND_MAX-.5)*max(float(0.1),xx*tp/tp_begin);
                y+=(1.0*rand()/RAND_MAX-.5)*max(float(0.1),yy*tp/tp_begin);             
        }
};
point ans[30];
point lava[1002];
void point::cal(){
            d=INT_MAX;
            for(int i=0;i<m;i++)
                d=min(d,(float)sqrt(pow(lava[i].x-x,2)+pow(lava[i].y-y,2)));
}
bool ac(float de){
    float d=exp(-10*(de/tp));
    if(d*RAND_MAX>rand()) return 1;
    return 0;
}
int main(){
    int t,i;
    cin>>t;
    while(t){
        t--;
        cin>>xx>>yy>>m;
        srand(time(0));
        for(i=0;i<m;i++)
            cin>>lava[i].x>>lava[i].y;
        for(i=0;i<num;i++){
            ans[i].x=xx*i/num;
            ans[i].y=yy*i/num;
            ans[i].cal();
        }
        point cur;
        ct=0;
        tp=tp_begin;
        while(tp>tp_end){
            ct++;
            for(i=0;i<num;i++){
                cur=ans[i];
                cur.gen();
                cur.cal();
                if(cur.x>xx||cur.y>yy||cur.x<0||cur.y<0)
                    continue;
                if(cur.d>ans[i].d || ac(ans[i].d-cur.d)) ans[i]=cur;
            }
            tp*=r;
        }
        cur=ans[0];
        for(i=0;i<num;i++)
            if(ans[i].d>cur.d) 
                cur=ans[i];
   
        printf("The safest point is (%.1f, %.1f).\n",cur.x,cur.y);
    }
    return 0;
}