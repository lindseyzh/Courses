#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int l=s1.size();
    bool a[30],b[30],t[30];
    for(int i=0;i<l;i++){
        a[i]=b[i]=s1[i]-'0';
        t[i]=s2[i]-'0';
    }
    //push the first button
    a[0]=!a[0];a[1]=!a[1];
    int num1=1,num2=0;
    for(int i=1;i<l;i++){
        if(a[i-1]!=t[i-1]){
            a[i-1]=!a[i-1];
            a[i]=!a[i];
            a[i+1]=!a[i+1];
            num1++;
        }
        if(b[i-1]!=t[i-1]){
            b[i-1]=!b[i-1];
            b[i]=!b[i];
            b[i+1]=!b[i+1];
            num2++;  
        }
    }
    bool finished1=(a[l-1]==t[l-1]),finished2=(b[l-1]==t[l-1]);
    if(finished1==0&&finished2==0) cout << "impossible" << endl;
    else {
        if(!finished1) num1 = INT_MAX;
        if(!finished2) num2 = INT_MAX;
        cout << min(num1, num2) << endl;
    }
    return 0;
}