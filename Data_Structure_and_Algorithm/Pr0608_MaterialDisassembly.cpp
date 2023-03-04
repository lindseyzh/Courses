//12.6-8
#include<bits/stdc++.h>
#define LSIZE 300
using namespace std;
char line[LSIZE];
char tmp[LSIZE];
struct nd{
    string name;
    nd * lfchild=0;
    nd * rtmostchild=0;
    nd * rtsibling=0;
    nd(){};
    nd(char*n){
        name=string(n);
    }
};
void readline(){

}
void searchit(nd*root,char * a){
    string s=string(a);
    nd * pointer=root;
    stack<nd*> sn;
    bool ok=0;
    while(pointer||!sn.empty()){
        if(pointer){
            if(pointer->name==s){
                ok=1;
                while(pointer->rtsibling){
                    pointer=pointer->rtsibling;
                    printf("%s",pointer->name.c_str());
                }
                break;
            }
            else{
                sn.push(pointer->rtsibling);
                pointer=pointer->lfchild;
            }
        }
        else{
            pointer=sn.top();sn.pop();
        }
    }
    if(ok==0) printf("No");
    printf("\n");
}
nd * buildtree(){
    
}
int main(){
    int t;
    cin>>t;
    getchar();
    while(t--){
        cin.getline(line, LSIZE, '\n');
        sscanf(line, "%s", tmp);

        cout << "built" << endl;
        cin.getline(line, LSIZE, '\n');
        sscanf(line, "%s", tmp);
        getchar();
        getchar();
        searchit(root,tmp);
    }
    return 0;
}

/*
        nd * root = new nd(tmp);
        nd * las=0;
        nd * cur=root;
        stack<nd*> sn;
        while(1){
            cin.getline(line, LSIZE, '\n');
            sscanf(line, "%s", tmp);
            tmp[strlen]
            if(strlen(tmp)==0) break;
            if(tmp[0]=='{'){
                sn.push(las);
                las=cur;
            }
            else if(tmp[0]=='}'){
                las=sn.top();
                sn.pop();
            }
            else{
                cur=new nd(tmp);
                if(!las->lfchild){
                    las->lfchild=cur;
                    las->rtmostchild=cur;
                }
                else{
                    las->rtmostchild->rtsibling=cur;
                    las->rtmostchild=cur;
                }
            }
        }
*/