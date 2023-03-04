//ref: https://blog.csdn.net/m0_37975647/article/details/77600498

#include<bits/stdc++.h>
using namespace std;
#define N 1010
int c[N];
typedef map<string,set<int>> mmap;
mmap ms;
// multimap<string, int> ms; 
// Note: Don't use multiset.
// What if a word appears more than once in one file?
int n;
int main(){
    cin>>n;
    string s;
    for(int i=1;i<=n;i++){
        cin>>c[i];
        for(int j=0;j<c[i];j++){
            cin>>s;
            if(ms.count(s))
                ms[s].insert(i);
            else{
                set<int> nset;
                nset.insert(i);
                ms.insert(make_pair(s,nset));
            }
        }
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>s;
        if(!ms.count(s)) {
            printf("NOT FOUND\n");
            continue;
        }
        bool fir=1;
        set<int>::iterator it;
        for(it=ms[s].begin();it!=ms[s].end();it++){
            if(fir){
                printf("%d",*it);
                fir=0;
            }
            else printf(" %d", *it);
        }
        printf("\n");
    }
    return 0;
}