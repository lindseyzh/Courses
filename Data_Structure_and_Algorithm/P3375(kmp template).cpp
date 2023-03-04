//kmp algorithm
//template
//reference:https://blog.csdn.net/qq_45962661/article/details/125877291
#include<bits/stdc++.h>
using namespace std;
int nxt[100],len,llen,sslen;
int next[100];
char s[100],ss[100];
char a[100];
void getnxt(){
    int i=0,j=-1;
    nxt[0]=-1;
    while(i<len){
        if(j==-1||s[i]==s[j]){
            i++,j++;
            nxt[i]=j;
        }
        else j=nxt[j];
    }
}

void bettergetnxt(){
    int i=0,j=-1;
    nxt[0]=-1;
    while(i<len){
        if(j==-1|||s[i]==s[j]){
            i++;j++;
            if(s[i]==s[j])
                nxt[i]=nxt[j];
            else nxt[i]=j;
        }
        else j=nxt[j];
    }
}

bool matchit(){
    int i=0,j=0;
    bool ok=0;
    while(i<sslen){
        if(j==-1||ss[i]==s[j]){
            i++;j++;
            if(j==len){
                ok=1;
                printf("Matched at %d\n",i);
                j=nxt[j];
            }
        }
        else j=nxt[j];
    }
    return ok;
}

bool matchit(){
    int i=0,j=0;
    bool ok=0;
    while(i<sslen){
        if(j==-1||ss[i]==s[j]){
            i++;j++;
            if(j==len){
                ok=1;
                printf("Matched at %d\n",i);
                j=nxt[j];
            }
        }
        else j=nxt[j];
    }
    return ok;
}

int main(){
    cin>>s;
    cin>>ss;
    len=strlen(s);
    llen = strlen(ss);
    getnxt();
    for(int i=0;i<=len;i++)
        cout << nxt[i] << " ";
    cout << endl;
    cout << (matching()?"Matched":"Unmatched") << endl;
    return 0;
}

//sol 1
/*
#include<bits/stdc++.h>
using namespace std;
char s1[1000010],s2[10000010];
int kmp[1000010]{};
int main(){
    scanf("%s",&s1);
    scanf("%s",&s2);
    int l1=strlen(s1);
    int l2=strlen(s2);
    int j=0;
    kmp[0]=0;
    //template 1
    for(int i=1;i<l2;i++){
        while(j&&s2[i]!=s2[j])//j is kmp[i-1]
            j=kmp[j-1];
        if(s2[i]==s2[j]) j++;
        kmp[i]=j;
    }
    //template 2
    j=0;
    for(int i=0;i<l1;i++){
        while(j&&s1[i]!=s2[j]) 
            j=kmp[j-1];
        if(s1[i]==s2[j]) j++;
        if(j==l2){
            printf("%d\n",i-l2+2);//the first char of s1 is "1"
            j=kmp[j-1];
        }
    }
    printf("%d",kmp[0]);
    for(int i=1;i<l2;i++)
        printf(" %d",kmp[i]);
    printf("\n");
    return 0;
}
*/