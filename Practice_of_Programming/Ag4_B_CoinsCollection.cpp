//solution 2:DP
//reference:https://blog.csdn.net/transient_arnold/article/details/72815792
//recurrence dp is also ok
#include<bits/stdc++.h>
using namespace std;
int a[205];
int ways[10005]{0};
int main(){
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    ways[0]=1;//Initialization
    for(int i=0;i<n;i++)
        for(int j=x;j>=a[i];j--)
            ways[j]+=ways[j-a[i]];
        //a quick way to calculate total numbers of ways to buy the gift
        //advantage: no need for another loop to caltulate it
        //note: It's necessary to update the array in inverse order

    
    //check every coin for necessity
    bool nece[205]{0};
    int num=0;
    for(int i=0;i<n;i++){
        int thisways[10005]{0};//ways without coin[i]
        thisways[0]=1;
        for(int j=1;j<=x;j++)
            if(j<a[i]) thisways[j]=ways[j];
            else thisways[j]=ways[j]-thisways[j-a[i]];
        if(thisways[x]==0){
            nece[i]=1;
            num++;
        }
    }

    cout << num << endl;
    bool fir=1;
    for(int i=0;i<n;i++)
        if(nece[i]) {
            if(fir) {
                cout << a[i];
                fir=0;
            }
            else cout << " " << a[i];
        }

    return 0;
}


//solution 1:recurrence(TLE)
//It seems that bit operation could be used
//reference:https://blog.csdn.net/PKU_ZZY/article/details/51548085
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int N,X,a[205];

bool useless[205]{0};
bool used[205]{0};
void rec(int n,int x){
    if(x==0){
        for(int i=0;i<N;i++)
            if(!used[i]) useless[i]=1;
        return;
    }
    for(int i=n-1;i>=0;i--)
        if(a[i]<=x){
            used[i]=1;
            rec(i,x-a[i]);
            used[i]=0;
        }
    return;
}
int main(){
    cin>>N>>X;
    int n=N,x=X;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    rec(n,x);
    int num=0;
    for(int i=0;i<n;i++)
        if(!useless[i]) num++;
    cout << num << endl;
    bool fir=1;
    for(int i=0;i<n;i++)
        if(!useless[i]){
            if(fir) {cout << a[i];fir=0;}
            else cout << " " << a[i];
        }
    cout << endl;
    return 0;
}
*/