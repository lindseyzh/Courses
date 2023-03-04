//12.5-4
//Cpt8_4 also
#include<bits/stdc++.h>
using namespace std;
inline char char2digit(char c){
    if(isdigit(c)) return c;
    if(c<'Q') return '0'+(c-'A')/3+2;
    return '0'+(c-'A'-1)/3+2;
}
inline string cvt(string s){
    int len=s.size();
    char ans[8];
    int j=0;
    for(int i=0;i<len;i++){
        if(s[i]=='-') continue;
        char c=char2digit(s[i]);
        if(isdigit(c))
            ans[j++]=c;
    }
    ans[7]='\0';
    return string(ans);
}
map<string,int> ms;
int main(){
    int n;
    cin>>n;
    string s;
    while(n--){
        cin>>s;
        s=cvt(s);
        if(ms.count(s)) ms[s]++;
        else ms[s]=1;
    }
    map<string,int>::iterator i;
    bool dup=0;
    for(i=ms.begin();i!=ms.end();i++){
        if(i->second>1){
        printf("%s-%s %d\n",i->first.substr(0,3).c_str(),i->first.substr(3).c_str(),i->second);
        dup=1;
        }
    }
    if(!dup) cout << "No duplicates." << endl;
    return 0;
}