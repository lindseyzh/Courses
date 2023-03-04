//Jun.16_01
#include<bits/stdc++.h>
#define INF 100000
using namespace std;
bool s[1100];
int num[1100]{0};
int main(){
    int t;
    cin>>t;
    while(t--){
        string ss;
        cin>>ss;
        int l=ss.size();
        memset(num,0,sizeof(num));
        for(int i=0;i<l;i++)
            s[i]=ss[i]-'0';
        num[0]=s[0];
        for(int i=1;i<l;i++)
            num[i]=num[i-1]+s[i];
        int ans=INF;
        for(int i=0;i<l;i++)
            ans=min(ans,num[i]+(l-1-i)-(num[l-1]-num[i]));
        cout << ans << endl;
    }

    return 0;
}