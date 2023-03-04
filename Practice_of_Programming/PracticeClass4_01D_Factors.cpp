#include<iostream>
using namespace std;
int dfs(int a,int maxf){
    if(maxf>a) maxf=a;
    if(maxf==1) return 1;
    int ans=0;
    for(int f=maxf;f>=2;f--){
        if(a%f==0){
            ans+=dfs(a/f,f);
        }
    }
    return ans;
}
int main(){
    int n,a;
    cin>>n;
    while(n){
        n--;
        cin>>a;
        cout << dfs(a,a) << endl;
    }
    return 0;
}