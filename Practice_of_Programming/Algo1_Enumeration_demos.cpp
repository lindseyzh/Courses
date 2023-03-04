//demo 3:lightoff(POJ 1222)
#include<bits/stdc++.h>
using namespace std;
bool board[5][6],iniboard[5][6];
bool ope[5][6];
int mov[5][2]={0,0,1,0,-1,0,0,1,0,-1};
void turnlight(int i,int j){
    ope[i][j]=1;
    for(int u=0;u<5;u++){
        int xx=i+mov[u][0],yy=j+mov[u][1];
        if(xx>=0&&xx<5 && yy>=0&&yy<6)
            board[xx][yy]=!board[xx][yy];
    }
    return;
}
int main(){
    int num;
    cin>>num;
    for(int o=1;o<=num;o++){
        for(int i=0;i<5;i++)
            for(int j=0;j<6;j++)
                cin>>board[i][j];
        memcpy(iniboard,board,sizeof(board));
        for(int i=0;i<64;i++){
            int ii=i;
            memset(ope,0,sizeof(ope));
            memcpy(board,iniboard,sizeof(board));
            for(int j=0;j<6;j++){
                if(ii%2) turnlight(0,j);
                ii/=2;
            }
            for(int u=1;u<5;u++)
                for(int v=0;v<6;v++)
                    if(board[u-1][v]) turnlight(u,v);
            bool ok=1;
            for(int u=0;u<6;u++)
                if(board[4][u]) {
                    ok=0;
                    break;
                }
            if(ok){
                cout << "PUZZLE #" << o << endl;
                for(int u=0;u<5;u++){
                    cout << ope[u][0];
                    for(int v=1;v<6;v++)
                        cout << ' ' << ope[u][v];
                    cout << endl;
                } 
                break;
            }
        }
    }
    return 0;
}


//demo 2: coins
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int casenum;
    string left[3],right[3];
    string result[3];
    cin>>casenum;
    while(casenum){
        casenum--;
        for(int i=0;i<3;i++)
           cin>>left[i]>>right[i]>>result[i];
        for(int i=0;i<12;i++){
            char c=i+'A';
            //a light coin
            bool ok=1;
            for(int j=0;j<3;j++)
                if(ok)
                switch(result[j][0]){
                    case 'e':
                        for(int u=0;u<4;u++)
                            if(left[j][u]-'A'==i || right[j][u]-'A'==i){
                                ok=0;
                                break;
                            }
                        break;
                    case 'u':
                        ok=0;
                        for(int u=0;u<4;u++)
                            if(right[j][u]-'A'==i){
                                ok=1;
                                break;
                            }  
                        break;
                    case 'd':
                        ok=0;
                        for(int u=0;u<4;u++)
                            if(left[j][u]-'A'==i){
                                ok=1;
                                break;
                            }
                        break;
                }
            if(ok){
                cout << (char)(i+'A') << " is light" << endl;
                return 0;
            }
            //a heavy coin
            ok=1;
            for(int j=0;j<3;j++)
                if(ok)
                switch(result[j][0]){
                    case 'e':
                        for(int u=0;u<4;u++)
                            if(left[j][u]-'A'==i || right[j][u]-'A'==i){
                                ok=0;
                                break;
                            }
                        break;
                    case 'u':
                        ok=0;
                        for(int u=0;u<4;u++)
                            if(left[j][u]-'A'==i){
                                ok=1;
                                break;
                            }  
                        break;
                    case 'd':
                        ok=0;
                        for(int u=0;u<4;u++)
                            if(right[j][u]-'A'==i){
                                ok=1;
                                break;
                            }
                        break;
                }
            if(ok){
                cout << (char)(i+'A') << " is heavy" << endl;
                return 0;
            }

        }

    }

    return 0;
}
*/

//demo 1: PeakCycle
/*
#include<iostream>
using namespace std;
#define N 21252
int main(){
    int p,e,i,d;
    while(cin>>p>>e>>i>>d && p!=-1){
        int k;
        for(k=d+1;(k-p)%23;k++)
        //if (k-p)%23==0, stop cycle
        for(;(k-e)%28;k+=23)
        for(;(k-i)%33;k+=23*28);
        cout << k-d << endl;
    }
}
*/
//My Solution:
/*
#include<bits/stdc++.h>
using namespace std;
enum cycle {a=23,b=28,c=33};
int main(){
    int p,e,i,d;
    
    while(cin>>p>>e>>i>>d){
    while(p>d) p-=a;
    while(e>d) e-=b;
    while(i>d) i-=c;
    while(1){
        p+=a;
        if((p-e)%b==0&&(p-i)%c==0) break;
    }
    cout << p-d << endl;
    }
    return 0;
}
*/