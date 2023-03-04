//11.24-02
//0406 
#include<bits/stdc++.h>
using namespace std;
string s[60];
char tmp[60];
int tmplen=0;
bool ismul[60]{0};
char mul[60][60];
int mulnum[60]{0};
inline bool samechar(char a, char b){
    if(a<='Z'&&a>='A') a=a-'A'+'a';
    if(b<='Z'&&b>='A') b=b-'A'+'a';
    return a==b;
}
bool Matched(string ss){
    if(ss.size()!=tmplen) return 0;
    for(int i=0;i<tmplen;i++){
        if(ismul[i]){
            bool ok=0;
            for(int j=0;j<mulnum[i];j++)
                if(samechar(ss[i],mul[i][j])){
                    ok=1;
                    break;
                }
            if(!ok) return 0;
        }
        else {
            if(!samechar(ss[i],tmp[i])) return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    string ss;
    cin>>ss;
    for(int i=0;i<ss.size();i++){
        if(ss[i]=='['){
            ismul[tmplen]=1;
            char c;
            i++;
            int j=0;
            while(1){
                c=ss[i++];
                if(c==']') break;
                mul[tmplen][j++]=c;
            }
            i--;
            mulnum[tmplen]=j;
            tmplen++;
        }
        else tmp[tmplen++]=ss[i];
    }
    for(int i=0;i<n;i++)   
        if(Matched(s[i]))
            printf("%d %s\n",i+1, s[i].c_str());
    return 0;
}