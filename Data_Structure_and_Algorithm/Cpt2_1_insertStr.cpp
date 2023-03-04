#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,substr;
    while(cin>>str>>substr){
    int l=str.size();
    int maxp=0;
    char maxc=str[0];
    for(int i=1;i<l;i++)
        if(str[i]>maxc){
            maxp=i;
            maxc=str[i];
        }
    for(int i=0;i<=maxp;i++)
        cout << str[i];
    cout << substr;
    for(int i=maxp+1;i<l;i++)
        cout << str[i];
    cout << endl;
    }
    return 0;
}