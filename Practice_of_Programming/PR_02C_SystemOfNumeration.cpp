#include<bits/stdc++.h>
using namespace std;
int a[10],b[10],c[10];
int la,lb,lc;
int minn=1;
int readit(int * s){
    int aa,l=0;
    cin>>aa;
    while(aa){
        s[l]=aa%10;
        minn=max(minn,s[l]);
        aa/=10;
        l++;
    }
    return l;
}
bool tryit(int sn){
    int ans[20]{0};
    for(int i=0;i<la;i++)
        for(int j=0;j<lb;j++){
            ans[i+j]+=a[i]*b[j];
        }
    int len=la+lb-1;
    for(int i=0;i<len;i++){
        ans[i+1]+=ans[i]/sn;
        ans[i]%=sn;
    }
    while(ans[len]!=0){
        ans[len+1]+=ans[len]/sn;
        ans[len]%=sn;
        len++;
    }
    if(len>lc) return 0;
    for(int i=0;i<len;i++)
        if(ans[i]!=c[i]) return 0;
    return 1;
}
int main(){
    la=readit(a);
    lb=readit(b);
    lc=readit(c);
    for(int i=2;i<=16;i++)
        if(tryit(i)){
            cout << i << endl;
            return 0;
        }
    cout << 0 << endl;
    return 0;
}