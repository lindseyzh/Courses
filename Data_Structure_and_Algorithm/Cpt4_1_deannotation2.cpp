//test: "/*" ; "a\"/*ccc*/"
#include<bits/stdc++.h>
using namespace std;
char a,b,c,d;
int main(){
    while(1){
        a=getchar();
        if(a==EOF) return 0;
        if(a=='/'){
            b=cin.peek();
            if(b=='*'){
                getchar();
                while(1){
                    c=getchar();
                    if(c=='*'){
                        d=cin.peek();
                        if(d=='/') {
                            getchar();
                            break;
                        }
                    }
                }
            }
            else printf("%c",a);
        }
        else if(a=='"'){//for "/*"
            while(1){
                printf("%c",a);
                a=getchar();
                if(a=='\\'){
                    b=cin.peek();
                    if(b=='"'){
                        getchar();
                        printf("%c%c",a,b);
                        a=getchar();
                    }
                }
                if(a=='"') break;
            }
            printf("%c",a);
        }
        else printf("%c",a);
    }
    return 0;
}