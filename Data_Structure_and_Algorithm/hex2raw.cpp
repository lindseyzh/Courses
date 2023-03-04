#include<iostream>
#define N 4
using namespace std;
int main(){
    int a[]={0x95,0x1f,0x40,0};
    for(int i=0;i<N;i++)
        printf("%c",a[i]);
    return 0;
}