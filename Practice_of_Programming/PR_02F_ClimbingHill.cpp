#include<iostream>
using namespace std;
//pay attention to the requirement:
//"don't go to two spots with the same altitude in succession"
int main(){
    int n,h[1010];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>h[i];
    int dpu[1010],dpd[1010];//up & down

    dpu[0]=1;
    for(int i=1;i<n;i++){
        dpu[i]=1;
        for(int j=i-1;j>=0;j--)
            if(h[i]>h[j]) dpu[i]=max(dpu[i],dpu[j]+1);
    }

    dpd[n-1]=1;
    for(int i=n-2;i>=0;i--){
        dpd[i]=1;
        for(int j=i+1;j<n;j++)
            if(h[i]>h[j]) dpd[i]=max(dpd[i],dpd[j]+1);
    }

    int ans=0;
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++)
        ans=max(ans,dpu[i]+dpd[j]-1);
    cout << ans << endl;
    return 0;
}