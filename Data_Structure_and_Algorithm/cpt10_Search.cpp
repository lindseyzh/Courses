#include<bits/stdc++.h>
#define N 100010
using namespace std;
int a[N],n;
int SeqSearch(int k){
    /* search for k in datalist */
    /* Note: data should be stored from datalist[1] 
       - that's weird! */
    int i=n;
    a[0]=k;//as lookout
    while(a[i]!=k){
        i--;
    }
    return i;
}
//my version
int SeqSearch2(int k){
    int i=n-1;
    while(i!=-1 && a[i]!=k){
        i--;
    }
    return i;//-1: search fails
}
template <class T>
int BinarySearch(T a[], int lf,int rt,T k){
    while(lf<rt){
        int md=(lf+rt)/2;
        //int md=lf+(rt-lf)/2;//in case lf&rt are too big for int
        if(a[md]==k) return md;
        if(k>a[md]) lf=md+1;
        else rt=md-1;
    }
    return lf;
}

template<class T>
int LowerBound(T a[], int lf, int rt, T tar){
    int lb=-1;
    while(lf<=rt){
        int mid = (lf+rt)/2;
        if(a[mid]>=tar) rt=mid-1;
        else{
            lb=mid;
            l=mid+1;
        } 
    }
    return lb;
}

int main(){

    return 0;
}