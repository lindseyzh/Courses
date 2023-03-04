#include<bits/stdc++.h>
using namespace std;
int casenum=1;
bool ending=0;
bool caseend=0;
void readfile(int depth){
    string s;
    bool fir=1,readend=0;
    vector<string> Files;
    while(cin>>s){
        if(fir && depth==0){
            if(s[0]=='#') {
                ending=1;
                return;
            }
            caseend=0;
            if(casenum>1) cout << endl;
            printf("DATA SET %d:\n",casenum);
            printf("ROOT\n");
            casenum++;
            fir=0;
        }
        if(caseend) return;
        switch(s[0]){
            case 'd':
                for(int i=0;i<depth+1;i++)
                    cout << "|     ";
                cout << s << endl;
                readfile(depth+1);
                break;
            case 'f':
                Files.push_back(s);
                break;
            case ']':
                readend=1;
                break;
            case '*':
                caseend=1;
                break;
        }
        if(readend || caseend) break;
    }
    sort(Files.begin(),Files.end());
    for(int i=0;i<Files.size();i++){
            for(int i=0;i<depth;i++)
                cout << "|     ";
            cout << Files[i] << endl;
    }
    return;
}
int main(){
    while(1){
        readfile(0);
        if(ending) return 0;
    }
    return 0;
}