//Jun.15-4
#include<bits/stdc++.h>
using namespace std;
int n,x,minnum;
int a[10],b[10];
inline bool wins(){
    int num=0;
    for(int i=0;i<n;i++)
        num+= (b[i]-a[i]>=x);
    return num>=minnum;
}
int main(){
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=i+1;
    }
    minnum=n/2+1;
    while(1){
        if(wins()){
            printf("%d",b[0]);
            for(int i=1;i<n;i++)
                printf(" %d",b[i]);
            printf("\n");
        }
        if(!next_permutation(b,b+n))
            break;
    }

    return 0;
}
//To Read More:https://www.cnblogs.com/lxy0/p/16159832.html
//Different ways to find the next permutation