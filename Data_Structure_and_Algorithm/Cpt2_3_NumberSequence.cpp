//https://blog.csdn.net/m0_46070659/article/details/105464549
//a naive simulation
#include<bits/stdc++.h>
using namespace std;
int len[100010]{},n,sum=0;
int main(){
    int i=1;
    while(1){
        //to estimate 
        len[i]=len[i-1]+int((log10(double(i))))+1;
        if(sum+len[i]<=0) break;//bigger than 2^31=2147483637
        sum+=len[i];
        i++;
    }
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        i=1;
        while(len[i]<n){
            n-=len[i++];
        }
        int j=1;
        while((int)log10(j)+1<n){
            n-=(int)log10(j++)+1;
        }
        int l = (int)log10(j)+1;//length of j
        for(i=0;i<l-n;i++)
            j/=10;
        cout << j%10 << endl;
    }
    return 0;
}