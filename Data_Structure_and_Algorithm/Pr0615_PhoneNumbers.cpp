
//if MLE, try to free the space after every loop
#include<bits/stdc++.h>
using namespace std;
struct nd{
    nd * child[10]{0};
    bool stp=0;
    nd(){}
    void Delete(){
        for(int i=0;i<10;i++)
            if(child[i]) {
                child[i]->Delete();
                delete child[i];
            }
    }
};
int main(){
    int t;
    cin>>t;
    char s[15];
    while(t--){
        int n;
        cin>>n;
        getchar();
        nd * root=new nd;
        bool ok=1;
        while(n--){
            cin.getline(s,15);
            if(!ok) continue;
            int l=strlen(s);
            nd * pointer=root;
            bool thisok=0;
            for(int i=0;i<l;i++){
                int cur=s[i]-'0';
                if(!pointer->child[cur]) {
                    pointer->child[cur]=new nd;
                    thisok=1;    
                }
                pointer=pointer->child[cur];
                if(pointer->stp){
                    thisok=0;
                    break;
                }
            }
            pointer->stp=1;
            if(!thisok) ok=0;
        }   
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
        root->Delete();
        delete root;
    }
    return 0;
}