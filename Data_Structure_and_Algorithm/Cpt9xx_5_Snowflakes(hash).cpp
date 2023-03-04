// hashmap
// ref: https://blog.csdn.net/qq_46014058/article/details/107356164

#include<bits/stdc++.h>
using namespace std;
const int mod = 99991;
struct flake{
    int a[6];
    bool operator==(struct flake & f){
        for(int i=0;i<6;i++){
            if(a[0]==f.a[i%6]&&a[1]==f.a[(i+1)%6]
            && a[2]==f.a[(i+2)%6]&&a[3]==f.a[(i+3)%6]
            && a[4]==f.a[(i+4)%6]&&a[5]==f.a[(i+5)%6])
                return 1;
            if(a[5]==f.a[i%6]&&a[4]==f.a[(i+1)%6]
            && a[3]==f.a[(i+2)%6]&&a[2]==f.a[(i+3)%6]
            && a[1]==f.a[(i+4)%6]&&a[0]==f.a[(i+5)%6])
                return 1;
        }
        return 0;
    }
};
vector<flake> vf;
vector<flake> Hash[mod];
int main(){
    int n;
    cin>>n;
    flake nf;
    for(int i=0;i<n;i++){
        int a, sum=0;
        for(int j=0;j<6;j++){
            cin>>a;
            sum+=a;
            nf.a[j]=a;
        }
        sum%=mod;//hash
        for(int j=0;j<Hash[sum].size();j++){
            if(Hash[sum][j]==nf){
                cout << "Twin snowflakes found." << endl;
                return 0;
            }
        }
        vf.push_back(nf);
        Hash[sum].push_back(nf);
    }
    cout << "No two snowflakes are alike." << endl; 

    return 0;
}