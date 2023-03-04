/*note:
1.  "getchar" reads all chars, including '\n' ' ' etc.
    "getchar" ends only with "EOF"
2.  don't use "if(a=getchar()==EOF)", which results in weird error
*/
#include<bits/stdc++.h>
using namespace std;
char a,b,c,d,e;
int main(){
    while(1){
        a=getchar();
        if(a==EOF) break;
        if(a=='/'){
            b=getchar();
            if(b=='*'){
                d=getchar();
                e=getchar();
                while(d!='*'||e!='/'){
                    d=e;
                    e=getchar();
                }
            }
            else {
                putchar(a);
                putchar(b);
            }
        }
        else {
            putchar(a);
            if(a=='"'||a=='\''){
                b=getchar();
                while(b!=a) {
                    putchar(b);
                    if(b=='\\')
                        putchar(getchar());
                    b=getchar();
                }
                putchar(b);
            }
        }
    }
    return 0;
}
