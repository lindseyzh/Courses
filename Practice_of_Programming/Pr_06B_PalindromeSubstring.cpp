//Jun.16_7
//To Read More:https://blog.csdn.net/m0_37292477/article/details/99586196
#include<bits/stdc++.h>
using namespace std;
string s;
int l;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        l=s.size();
        int ans=1;
        int fir=0,las=0;
        for(int i=0;i<l;i++){
            int j=1;
            //odd numbers
            while(1){
                if(i-j<0 || i+j>=l) break;
                if(s[i-j]!=s[i+j]) break;
                j++;
            }
            if(2*j-1>ans){
                ans=2*j-1;
                fir=i-j+1;
                las=i+j-1;
            }
            //even numbers
            j=0;
            while(1){
                if(i-j<0 || i+j+1>=l) break;
                if(s[i-j]!=s[i+j+1]) break;
                j++;
            }
            if(2*j>ans){
                ans=2*j;
                fir=i-j+1;
                las=i+j;
            }
        }
        for(int i=fir;i<=las;i++)
            cout << s[i];
        cout << endl;
    }
    return 0;
}

