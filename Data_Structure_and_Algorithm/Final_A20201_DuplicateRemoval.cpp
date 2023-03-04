#include<bits/stdc++.h>
using namespace std;
#define N 1000100
bool b[N],bb[N];
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    int n;
    scanf("%d",&n);
    int a;
    memset(b,0,sizeof(b));
    memset(bb,0,sizeof(bb));
    n--;
    scanf("%d",&a);
    printf("%d",a);
    if(a<0) bb[-a]=1;
    else b[a]=1;
    while(n--){
        scanf("%d",&a);
        if(a<0){
            if(!bb[-a]) printf(" %d",a);
            bb[-a]=1;
        }
        else{
            if(!b[a]) printf(" %d",a);
            b[a]=1;
        }
    }
    printf("\n");
    }

    return 0;
}