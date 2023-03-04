//template

#include<bits/stdc++.h>
using namespace std;
//template
template<class T>
int BinarySearch(T a[], int lf, int rt, T tar){
    while(lf<rt){
        int mid = (lf+rt)/2;
        //note: if lf+rt is bigger than INT_MAX, use lf + (rt-lf)/2
        if(a[mid]==tar) return mid;
        if(tar > a[mid]) lf=mid+1;
        else rt=mid-1;
    }
    return -1;//failure
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
int main(){    return 0;}


//demo 1: a pair of number(untested)
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    int a[100000];
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int lf=0,rt=n-1;
    bool findit=0;
    while(lf<rt){
        if(a[lf]+a[rt]==m) {findit=1;break;}
        if(a[lf]+a[rt]<m) lf++;
        else rt--; 
    }
    if(findit)
        cout << a[lf] << ' ' << a[rt];
    else cout << "NO ANSWER" << endl;
    return 0;
}
*/

//demo 2: Farmer & Cow
/*
#include<bits/stdc++.h>
using namespace std;
int n,c,po[100000];
bool ok(int d){
    int las=0,cur=0,num=1;
    while(cur<n){
        while(po[cur]-po[las]<d) {
            cur++;
            if(cur==n) return 0;
        }
        las=cur;
        num++;
        if(num==c) return 1;
    }
    return 0;
}
int main(){
    cin>>n>>c;
    for(int i=0;i<n;i++)
        cin>>po[i];
    sort(po,po+n);
    int lf=1,rt=1000000000/c;
    
    return 0;
}
*/

