//Jun.23
//Enumeration & Recurrence
//Reference:https://blog.csdn.net/weixin_45637770/article/details/106739515
#include<bits/stdc++.h>
using namespace std;
int a[10];
bool cal(int a[],int n){
    if(n==1){
        if(a[0]==42) return 1;
        return 0;
    }
    int b[10];
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++){
            int u=1;
            for(int v=0;v<n;v++)
                if(v!=i && v!=j){
                    b[u]=a[v];
                    u++;
                }
            //1.+
            b[0]=a[i]+a[j];
            if(cal(b,n-1)) return 1;
            //2.-
            b[0]=a[i]-a[j];
            if(cal(b,n-1)) return 1;
            //3.*
            b[0]=a[i]*a[j];
            if(cal(b,n-1)) return 1;
            //4./
            if(a[j]!=0)
            if(a[i]%a[j]==0){
                b[0]=a[i]/a[j];
                if(cal(b,n-1)) return 1;
            }
            if(a[i]!=0)
            if(a[j]%a[i]==0){
                b[0]=a[j]/a[i];
                if(cal(b,n-1)) return 1;
            }
           
        }
    return 0;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(cal(a,n)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}