//Jun.23_03
//difficult DP
#include<bits/stdc++.h>
using namespace  std;
int n,tw;
struct trs{
    int v,w;
    bool operator<(trs t){
        return v<t.v;
    }
};
trs tr[10010];
int dpa[10010][3]{0};
int dpb[10010][3]{0};
int main(){
    cin>>n>>tw;
    for(int i=0;i<n;i++)
        cin>>tr[i].v>>tr[i].w;
    sort(tr,tr+n);
    for(int i=1;i<tw;i++){
        if(i>=tr[0].w)
            dpa[i][0]=dpb[i][0]=dpa[i][1]=dpb[i][1]=tr[0].v;
        if(i>=tr[1].w){
            dpb[i][1]=dpa[i][1]=max(dpa[i][1],tr[1].v);
        }
    }
    int cur=1,las=0,llas;
    for(int j=2;j<=n;j++){
        llas=las;
        las=cur;
        cur=j%3;
        for(int i=1;i<=tw;i++){
            int ww=0;
            dpa[i][cur]=dpa[i][las];
            dpb[i][cur]=dpb[i][las];
            if(i>=tr[j].w) {
                ww=i-tr[j].w;
                dpa[i][cur]=max(dpa[i][cur],dpa[ww][llas]+tr[j].v);
                if(i<tw)
                    dpb[i][cur]=max(dpb[i][cur],dpb[ww][llas]+tr[j].v);
                else dpb[i][cur]=max(dpb[i][cur],dpa[ww][llas]+tr[j].v);
                dpb[i][cur]=max(dpb[i][cur],dpa[ww][llas]+tr[j].v);
            }
        }
    }
    int ans1=max(dpa[tw][cur],dpa[tw-1][cur]);
    int ans2=max(dpb[tw][cur],dpb[tw][cur-1]);
    int ans=max(ans1,ans2);
    cout << ans << endl;
    return 0;
}