//luogu P1168
//Ref: https://blog.51cto.com/u_15314810/3199462

#include<bits/stdc++.h>
#define N 100010
using namespace std;
priority_queue<int> les;
priority_queue<int,vector<int>,greater<int> > grt;
int main(){
    int n;
    scanf("%d",&n);
    int a,b;
    scanf("%d",&a);
    printf("%d\n",a);
    int mid=a;
    int i=1;
    for(int i=1;i<(n+1)/2;i++){
        scanf("%d%d",&a,&b);
        if(a>mid) grt.push(a);
        else les.push(a);
        if(b>mid) grt.push(b);
        else les.push(b);
        if(grt.size()>les.size()){
            les.push(mid);
            mid=grt.top();
            grt.pop();
        }
        else if(grt.size()<les.size()){
            grt.push(mid);
            mid=les.top();
            les.pop();
        }
        printf("%d\n",mid);
    }
    return 0;
}