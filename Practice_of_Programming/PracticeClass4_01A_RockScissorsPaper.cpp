#include<iostream>
using namespace std;
int main(){
    int ta[102],tb[102],n,na,nb;
    int ans[6][6]{0};
    ans[0][2]=ans[2][5]=ans[5][0]=1;
    ans[2][0]=ans[5][2]=ans[0][5]=-1;
    cin>>n>>na>>nb;
    for(int i=0;i<na;i++)
        cin>>ta[i];
    for(int i=0;i<nb;i++)
        cin>>tb[i];
    int awin=0,bwin=0;
    for(int i=0;i<n;i++){
        if(ans[ta[i%na]][tb[i%nb]]==1) awin++;
        else if(ans[ta[i%na]][tb[i%nb]]==-1) bwin++;
    }
    if(awin>bwin) cout << "A" << endl;
    else if(awin<bwin) cout << "B" << endl;
    else cout <<"draw" << endl;
    return 0;
}