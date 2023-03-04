#include<bits/stdc++.h>
using namespace std;
string s;
int ans[105];
int p;

int main(){
    while(cin>>s){
        memset(ans,0,sizeof(ans));
        int l=s.size();
        stack<int> lb;
        for(int i=0;i<l;i++)
            switch(s[i]){
                case '(':
                    lb.push(i);
                    break;
                case ')':
                    if(!lb.empty())
                        lb.pop();
                    else ans[i]=-1;
                    break;
                default:
                    break;
            }
        while(!lb.empty()){
            ans[lb.top()]=1;
            lb.pop();
        }
        cout << s << endl;
        for(int i=0;i<l;i++)
            if(ans[i]==0) cout << ' ';
            else cout << ((ans[i]>0)?'$':'?');
        cout << endl;
    }

    return 0;
}