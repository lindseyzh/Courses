#include<stdio.h>
using namespace std;
int Q(int a,int b){
    return a+b;
}
int P(int a,int b){
    int c = Q(a,b);
    return c*c;
}
int main(){
    printf("%d",P(1,2));
    return 0;
}