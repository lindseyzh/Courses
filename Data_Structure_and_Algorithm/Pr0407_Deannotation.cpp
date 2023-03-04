#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    while((c=getchar())!=EOF){
        if(c=='/'){
            c=cin.peek();
            if(c=='*'){
                getchar();
                while(1){
                    c=getchar();
                    if(c=='*'){
                        c=cin.peek();
                        if(c=='/') {
                            getchar();
                            break;
                        }
                    }
                }
            }
            else putchar('/');
        }
        else if(c=='"'){
            putchar(c);
            while(1){
                c=getchar();
                putchar(c);
                if(c=='\\'){
                    c=getchar();
                    putchar(c);
                }
                else if(c=='"') 
                    break;
            }
        }
        else putchar(c);
    }
    return 0;
}
//Attention to: "a\"/*ccc*/" (output is the same)
/*
Escape character:
\" : use '"' or '\"' as you like, but use "\"" instead of """
\' \\  
*/

/*
Note:
    c=getchar()!=EOF; --Error
    (c=getchar())!=EOF --OK
*/