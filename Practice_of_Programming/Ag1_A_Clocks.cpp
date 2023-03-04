#include<bits/stdc++.h>
using namespace std;
int mov[9][5]={{1,2,4,5,0},{1,2,3,0,0},{2,3,5,6,0},{1,4,7,0,0},
    {2,4,5,6,8},{3,6,9,0,0},{4,5,7,8,0},{7,8,9,0,0},{5,6,8,9,0}};
int clocks[10]{0};
int movnum[9]{0};
int ans[9];
int length,minlength=10000000;
void oper(int i){
    if(i==9){
        bool finished=1;
        for(int u=1;u<=9;u++)
            if(clocks[u]!=0){
                finished=0;
                break;
            }
        if(finished && length<minlength){
            minlength=length; 
            memcpy(ans,movnum,sizeof(ans));
        }
        return;
    }
    for(int j=0;j<4;j++){
        movnum[i]=j;
        length+=j;
        for(int u=0;u<5;u++){
            clocks[mov[i][u]] = (clocks[mov[i][u]]+j)%4;
        }
        oper(i+1);
        for(int u=0;u<5;u++){
            clocks[mov[i][u]] = (clocks[mov[i][u]]+4-j)%4;
        }
        length-=j;
    }
}
int main(){
    for(int i=1;i<=9;i++)
        cin>>clocks[i];
    length=0;
    oper(0);
    bool fir=1;
    for(int i=0;i<9;i++)
        if(ans[i]!=0) {
            if(fir) {
                cout << i+1;
                for(int j=1;j<ans[i];j++)
                    cout << ' ' << i+1;
                fir=0;
            }
            else {
                for(int j=0;j<ans[i];j++)
                    cout << ' ' << i+1;
            }
        }
    cout << endl;
    return 0;
}