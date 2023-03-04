#include<bits/stdc++.h>
using namespace std;
int n;
int x[20],y[20],z[20];
double dis[20][20];
inline double getdis(int i, int j){
    return sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2)+pow(z[i]-z[j],2));
}
class ppair{
    public:
        int i,j;
        double dis;
        ppair(int ii,int jj,double dd):i(ii),j(jj),dis(dd){}
        friend bool operator<(const ppair & a, const ppair & b){
            if(a.dis==b.dis) 
                if(a.i==b.i)
                    return a.j<b.j;
                else return a.i<b.i;
            else return a.dis>b.dis;
        }
};
vector<ppair> vp;
int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>x[i]>>y[i]>>z[i];
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++){
            vp.push_back(ppair(i,j,getdis(i,j)));
        }
    sort(vp.begin(),vp.end());
    for(int i=0;i<vp.size();i++){
        ppair & p = vp[i];
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",x[p.i],y[p.i],z[p.i],x[p.j],y[p.j],z[p.j],p.dis);
    }
    return 0;
}