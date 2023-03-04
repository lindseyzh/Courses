#include<bits/stdc++.h>
using namespace std;
struct MyInt{
    int l,a[60]{0};
    MyInt(int ll=0):l(ll){}
    MyInt(int ll, int*aa):l(ll){
        for(int i=0;i<l;i++)
            a[i]=aa[l-1-i];
    }
    MyInt operator+(MyInt& b){
        MyInt ans=*this;
        int thisl=max(l,b.l);
        for(int i=0;i<thisl;i++){
            ans.a[i]+=b.a[i];
            if(ans.a[i]>=10){
                ans.a[i]-=10;
                ans.a[i+1]++;
            }
        }
        ans.l=thisl;
        if(ans.a[thisl]>0) ans.l++;
        return ans;
    }
    bool operator>(const MyInt & b){
        if(l==b.l) {
            for(int i=l-1;i>=0;i--)
                if(a[i]!=b.a[i]) 
                    return a[i]>b.a[i];
            return 0;
        }
        return l>b.l;
    }
    void setmax(){
        l=60;
    }
    friend ostream & operator<<(ostream & op, MyInt & b){
        for(int i=b.l-1;i>=0;i--)
            op<<b.a[i];
        return op;
    }
};
int main(){
    int l,m;
    while(cin>>m){
    string s;
    int a[60];
    cin>>s;
    l=s.size();
    for(int i=0;i<l;i++)
        a[i]=s[i]-'0';
    MyInt dp[60][60];
    MyInt num[60][60];
    for(int i=0;i<l;i++){
        for(int j=i,u=1;j<l;j++,u++)
            num[i][j]=MyInt(u,a+i);
    }
    for(int i=0;i<l;i++)
        dp[i][0]=num[0][i];
    for(int i=1;i<l;i++)
        for(int j=1;j<=i;j++){
            dp[i][j].setmax();
            for(int u=j-1;u<i;u++)
                if(dp[i][j]>dp[u][j-1]+num[u+1][i]){
                    dp[i][j]=dp[u][j-1]+num[u+1][i];
                }
        }
    cout << dp[l-1][m] << endl;
    }
    return 0;
}
