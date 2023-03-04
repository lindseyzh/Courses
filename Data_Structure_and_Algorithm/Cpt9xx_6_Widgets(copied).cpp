//ref:https://blog.csdn.net/qq_41746268/article/details/90180537

#include <bits/stdc++.h>
using namespace std;
#define me(x,y) memset(x,y,sizeof x)
#define MIN(x,y) x < y ? x : y
#define MAX(x,y) x > y ? x : y
typedef long long ll;
const int maxn = 35;
const int INF = 0x3f3f3f3f;
const int MOD = 1e4;
const int eps = 1e-11;
const double PI = 3.1415926;

int equ,var;
int a[maxn][maxn];
int x[maxn];
int free_x[maxn];
int free_num;

int Gauss(){
    int max_r,col,k;
    free_num = 0;
    for(k = 0,col = 0; k < equ && col < var; ++k,++col){
        max_r = k;
        for(int i = k+1; i < equ; ++i){
            if(abs(a[i][col]) > abs(a[max_r][col]))
                max_r = i;
        }
        if(a[max_r][col] == 0){
            k--;
            free_x[free_num++] = col;
            continue;
        }
        if(max_r != k){
            for(int j = col; j < var+1; ++j){
                swap(a[k][j],a[max_r][j]);
            }
        }
        for(int i = k + 1; i < equ; ++i){
            if(a[i][col] != 0){
                for(int j = col; j < var+1; ++j){
                    a[i][j] ^= a[k][j];
                }
            }
        }
        
    }
    for(int i = k; i < equ; ++i){
        if(a[i][col] != 0)return -1;
    }
    if(k < var)return var-k;
    for(int i = var-1; i >= 0; --i){
        x[i] = a[i][var];
        for(int j = i+1; j < var; ++j)x[i] ^= (a[i][j]&x[j]);
    }
    return 0;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        me(a,0);
        int n;
        int start[30],end[30];
        cin>>n;
        var = equ = n;
        for(int i = 0; i < n; ++i){scanf("%d",&start[i]);a[i][i] = 1;}
        for(int i = 0; i < n; ++i){scanf("%d",&end[i]);a[i][n] = start[i]^end[i];}
        int x,y;
        while(cin>>x>>y && x && y)a[y-1][x-1] = 1;
        int ans = Gauss();
        if(ans == -1)cout<<"Oh,it's impossible~!!"<<endl;
        else cout<<(1<<ans)<<endl;
    }
    return 0;
}