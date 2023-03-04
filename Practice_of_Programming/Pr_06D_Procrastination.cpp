//Jun.17_02
#include<bits/stdc++.h>
using namespace std;
int ts,w[20],s[20];
int fir=0,las=0;
int ans=0;
void dfs(int k,int ww,int ss){
    if(k==15) {
        if(fir<=las)
            ans=max(ans,ww);
        return;
    }
    if(fir<=las)
        ans=max(ans,ww);
    for(int i=k;i<15;i++)
        if(s[i]+ss<=ts){
            if(i<10){
                if(fir==5) continue;
                fir++;
            }
            else las++;
            dfs(i+1,ww+w[i],ss+s[i]);
            if(i<10) fir--;
            else las--;
        }
    return;
}
int main(){
    cin>>ts;
    for(int i=0;i<15;i++)
        cin>>w[i]>>s[i];
    dfs(0,0,0);
    cout << ans << endl;
    return 0;
}