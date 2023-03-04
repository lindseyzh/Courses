//a special dp
//reference:https://blog.csdn.net/weixin_45637770/article/details/106444918
#include<bits/stdc++.h>
using namespace std;
int n,d[20],c[20];
int timeC[(1<<16)+10]{0},pun[(1<<16)+10]{0};
string s[20]={};
string ans[(1<<16)+10]={};

int main(){
    int t;
    cin>>t;
    while(t){
        t--;
        cin>>n;
        memset(timeC,0,sizeof(timeC));
        memset(pun,0,sizeof(pun));

        for(int i=0;i<n;i++){
            cin>>s[i]>>d[i]>>c[i];
            timeC[1<<i]=c[i];
            }

    //calculate the time cost of each solution
        for(int i=1;i<(1<<n);i++){
            for(int j=0;j<n;j++)
                if(i & (1<<j))//if solution i includes proj j
                    timeC[i]=timeC[i^(1<<j)]+c[j];
        }

    pun[0]=0;//the points losed for solution i
    for(int i=0;i<(1<<n);i++)
        ans[i]="";
    for(int i=1;i<(1<<n);i++){
        for(int j=0;j<n;j++)
            if(i&(1<<j) && (ans[i]=="" || pun[i^(1<<j)]+max(0,timeC[i]-d[j])<=pun[i]) ){      
                if(ans[i]=="" || pun[i^(1<<j)]+max(0,timeC[i]-d[j])<pun[i] || ans[i^(1<<j)]+s[j]+"\n"<ans[i])    
                    ans[i]=ans[i^(1<<j)]+s[j]+"\n";
                pun[i]=pun[i^(1<<j)]+max(timeC[i]-d[j],0);
            }
    }
    cout << pun[(1<<n)-1]<< endl;
    cout << ans[(1<<n)-1];
    }
    return 0;
}