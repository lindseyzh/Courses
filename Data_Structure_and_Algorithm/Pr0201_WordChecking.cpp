//11.22Tu-01
//brute force
#include<bits/stdc++.h>
#define N 10010
using namespace std;
char dict[N][20];
char s[20];
int len[N],l;
vector<int> oks;
bool cmp(int k){
    bool missit=0;
    bool ok=1;
    if(l==len[k]){
        for(int i=0;i<l;i++)
            if(s[i]!=dict[k][i]){
                if(missit==0) 
                    missit=1;
                else {
                    ok=0;break;
                }
            }
    }
    else if(l<len[k]){
        for(int i=0;i<l+1;i++)
            if(s[i-missit]!=dict[k][i]){
                if(missit==0) 
                    missit=1;
                else {
                    ok=0;break;
                }
            }
    }
    else{
        for(int i=0;i<l;i++)
            if(s[i]!=dict[k][i-missit]){
                if(missit==0) 
                    missit=1;
                else {
                    ok=0;break;
                }
            }
    }
    if(ok) oks.push_back(k);
    return ok;
}
int main(){
    int n=0;
    while(1){
        cin.getline(dict[n],20);
        if(dict[n][0]=='#') break;
        len[n]=strlen(dict[n]);
        n++;
    }
    while(1){
        cin.getline(s,20);
        if(s[0]=='#') return 0;
        l=strlen(s);
        bool br=0, ok=0;
        oks.clear();
        for(int i=0;i<n;i++){
            if(l<len[i]-1||l>len[i]+1) continue; 
            if(strcmp(s,dict[i])==0){
                printf("%s is correct\n", s);
                br=1;
                break;
            }
            else if(cmp(i))
                ok=1;
        }
        if(!br) {
            printf("%s:", s);
            if(ok){    
                for(vector<int>::iterator it=oks.begin();it!=oks.end();it++)
                    printf(" %s", dict[*it]);
            }   
        printf("\n");
        }
    }
    return 0;
}

/*
Note:
1. When the inquested has several possible words in the dictionary, 
   the words are in the same order of the output
   -> There's no Sorting operation, and it's a brute force algorithm
*/