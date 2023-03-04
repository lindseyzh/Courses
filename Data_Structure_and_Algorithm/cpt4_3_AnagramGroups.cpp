//POJ 2408:Anagram Groups
//about EOF: "^Z"
//sol 2.
#include<bits/stdc++.h>
#define N 100010
using namespace std;
int sn[N*4][30],ct[N*4],idx;//son,count,index
struct nd{
    int num;
    set<string> ss;
}a[N*4];
int total,vis[N];
char s[N];

void addit(char*s){
    string ss=s;
    int p=0,len=strlen(s);
    sort(s,s+len);
    for(int i=0;i<len;i++){
        int k=s[i]-'a';
        if(!sn[p][k]) {
            idx++;
            sn[p][k]=idx;
        }
        p=sn[p][k];
    }
    ct[p]++;
    if(!vis[p]) vis[p]=total++;
    a[vis[p]].num++;
    a[vis[p]].ss.insert(ss);
    return;
}
bool cmp(nd a,nd b){
    if(a.num==b.num)
        return *(a.ss.begin())<*(b.ss.begin());
    return a.num>b.num;
}

int main(){
    while(scanf("%s",s)!=EOF)
        addit(s);
    sort(a,a+total,cmp);
    set<string>::iterator i;
    for(int j=0;j<5;j++){
        printf("Group of size %d: ",a[j].num);
        for(i=a[j].ss.begin();i!=a[j].ss.end();i++)
            printf("%s ",i->c_str());
        printf(".\n");
    }
    return 0;
}
//sol 1.struct(TLE)
/*
#include<bits/stdc++.h>
#define MAXL 2000
using namespace std;
char ss[MAXL];
int ll;
struct grp{
    char w[MAXL];
    int l,num=0;
    vector<string> vs;
    grp(string & s){
        l=ll;
        for(int i=0;i<l;i++)
            w[i]=ss[i];
        w[l]='\0';
        //printf("%d,%s,%s\n",ll,w,ss);
        num=1;
        vs.push_back(s);
        //printf("%s added as a new group %s,len=%d\n",s.c_str(),w,l);
    }
    inline bool ingrp(){
        if(strcmp(ss,w)==0) return 1;
        return 0;
    }
    inline void addone(string&s){
        num++;
        for(int i=0;i<num;i++)
            if(vs[i]==s) return;
        vs.push_back(s);
    }
    bool operator<(grp&g){
        if(num==g.num){
            return vs[0]<g.vs[0];
        }
        return num>g.num;
    }
    inline void sortit(){
        sort(vs.begin(),vs.end());
    }
    inline void printit(){
        printf("Group of size %d: ",num);
        for(int i=0;i<num;i++)
            printf("%s ",vs[i].c_str());
        printf(".\n");
    }
};
vector<grp> vg;
int n=0;
int main(){
    string s;
    while(cin>>s){
        bool exi=0;
        ll=s.length();
        for(int i=0;i<ll;i++)
            ss[i]=s[i];
        sort(ss,ss+ll);
        ss[ll]='\0';
        for(int i=0;i<n;i++)
            if(vg[i].ingrp()) {
                vg[i].addone(s);
                exi=1;
                break;
            }
        if(!exi){
            vg.push_back(grp(s));
            n++;
        }
    }
    for(int i=0;i<n;i++)
        vg[i].sortit();
    sort(vg.begin(),vg.end());
    int nn=min(5,n);
    for(int i=0;i<nn;i++){
        vg[i].printit();
    }
    return 0;
}
*/