//demo 1: Hanoi Tower
/*
#include<iostream>
using namespace std;
void HanoiTower(int n, char src, char mid, char des){
    if(n==1){
        cout << src << "->" << des << endl;
        return;
    }
    HanoiTower(n-1,src,des,mid);
    cout << src << "->" << des << endl;
    HanoiTower(n-1,mid,src,des);
    return;
}  
int main(){
    int n;
    cin>>n;
    HanoiTower(n,'A','B','C');
    return 0;
}
*/

//demo 2: n Queens
/*
#include<iostream>
#include<cstring>
using namespace std;
bool col[102]{0},diag[204]{0},ctdiag[204]{0};
int n;
int pos[102];
inline void putpiece(int i,int j){
    pos[i]=j;
    col[j]=1;
    diag[100-i+j]=1;
    ctdiag[i+j]=1;
}
inline void deputpiece(int i,int j){
    pos[i]==-1;
    col[j]=0;
    diag[100-i+j]=0;
    ctdiag[i+j]=0;
}
void dfs(int i){
    if(i==n){
        cout << pos[0]+1;
        for(int j=1;j<n;j++)
            cout << ' ' << pos[j]+1;
        cout << endl;
        return;
    }
    for(int j=0;j<n;j++)
        if(!col[j]) if(!diag[100-i+j]) if(!ctdiag[i+j]){
            putpiece(i,j);
            dfs(i+1);
            deputpiece(i,j);
        }
    return;
}
int main(){
    cin>>n;
    memset(pos,-1,sizeof(pos));
    dfs(0);
    return 0;
}
*/

//⭐demo 3: Reverse Polish Expression(Postfix)
//Recurrence Solution
/*
#include<bits/stdc++.h>
using namespace std;
double cal(){
    char s[20];
    cin>>s;
    switch(s[0]){
        case '+':
            return cal()+cal();
        case '-':
            return cal()-cal();
        case '*':
            return cal()*cal();
        case '/':
            return cal()/cal();
        default:
            return atof(s);
            break;
    }
}
int main(){
    printf("%lf\n",cal());
    return 0;
}
*/

//⭐⭐demo 4: Simple Calculator

#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int factor_value();//for ()
int term_value();//for *
int expression_value();//for +
int factor_value(){//for brackets
    int result=0;
    char c=cin.peek();
    if(c=='('){
        cin.get();//for '('
        result = expression_value();
        cin.get();//for ')'
    }
    else {
        while(isdigit(c)){
            //bool isdigit(char): if(c>='0'&&c<='9') return 1;
            result = 10*result+c-'0';
            cin.get();
            c=cin.peek();
        }
    }
    return result;
}
int  term_value(){//for * & /
    int result = factor_value();
    while(1){
        char op = cin.peek();
        if(op=='*'||op=='/'){
            cin.get();
            int value=factor_value();
            if(op=='*') result*=value;
            else result/=value;
        }
        else break;
    }
    return result;
}
int expression_value(){//for + & -
    int result = term_value();
    bool more=1;
    while(more){
        char op = cin.peek();//have a look at the first char
        if(op=='+'||op=='-'){
            cin.get();
            int value=term_value();
            if(op=='+') result+=value;
            else result-=value;
        }
        else more=0;
    }
    return result;
}
int main(){
    cout << expression_value() << endl;
    return 0;
}


//demo 5: Steps Climbing
//I use Dynamic Programming (DP) here
/*
#include<bits/stdc++.h>
using namespace std;
int dp[102]{0};
int n;
int main(){
    cin>>n;
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=n;i++)
        dp[i]=dp[i-1]+dp[i-2];
    cout << dp[n] << endl;
    return 0;
}
*/

//demo 6:Apples in Plates
/*
#include<iostream>
using namespace std;
int rcr(int m,int n){
    if(m<=1 || n<=1) return 1;
    if(n>m) return rcr(m,m);
    return rcr(m-n,n)+rcr(m,n-1);
}
int main(){
    int m,n;
    cin>>m>>n;
    cout << rcr(m,n) << endl;
    return 0;
}
*/

//⭐demo 7: 24 points
/*
#include<iostream>
#include<cmath>
using namespace std;
#define EPS 1e-6;
double a[5];
bool isZero(double x){
    return fabs(x)<=EPS;
//note: for "float"/"double", don't use (a==b) or (a!=b)
}
bool cal24(double a[], int n){
    //try calculating 24 with n numbers in a[]
    if(n==1){
        if(isZero(a[0]-24)) return 1;
        else return 0;
    }
    double b[5];//b: n-1 numbers
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++){//pick two numbers
            int m=0;
            for(int k=0;k<n;k++)
                if(k!=i && k!=j) b[m++] = a[k];
            b[m]=a[i]+a[j];
            if(cal24(b,m+1)) return 1;
            b[m]=a[i]-a[j];
            if(cal24(b,m+1)) return 1;
            b[m]=a[j]-a[i];
            if(cal24(b,m+1)) return 1;
            b[m]=a[i]*a[j];
            if(cal24(b,m+1)) return 1;
            if(!isZero(a[j])){
                b[m] = a[i]/a[j];
            if(cal24(b,m+1)) return 1;
            }
            if(!isZero(a[i])){
                b[m] = a[j]/a[i];
            if(cal24(b,m+1)) return 1;
            }
        }
    return 0;
}
int main(){
    while(cin>>a[0]>>a[1]>>a[2]>>a[3]){
        if(a[0]+a[1]+a[2]+a[3]==0) return 0;
        if(cal24(a,4)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}


*/
