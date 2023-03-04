#include<bits/stdc++.h>
using namespace std;
map<string,string> ms;
void trans(char * a){
    string s=string(a);
    if(ms.count(s)){
        printf("%s\n",ms[s].c_str());
    }
    else printf("eh\n");
}
int main(){
    char a[15],b[15],c;
    while(1){
        scanf("%s",a);
        c=getchar();
        if(c!=' ') break;
        scanf("%s",b);
        ms.insert(make_pair(string(b),string(a)));
    }
    trans(a);
    while(cin>>a){
        trans(a);
    }
    return 0;
}