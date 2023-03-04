//trie tree
// ref: https://blog.csdn.net/weixin_43151198/article/details/89786335
#include<bits/stdc++.h>
using namespace std;
typedef struct ttree{
    ttree * child[26]{0};
    bool tag=0;
    int num=0;
}tree;
vector<string> vs;
int main(){
    string s;
    tree * root = new tree;
    while(cin>>s){
        vs.push_back(s);
        tree * cur = root;
        for(int i=0;i<s.length();i++){
            int k=s[i]-'a';
            if(!cur->child[k]){
                cur->child[k] = new tree;
            }
            cur = cur->child[k];
            cur->num++;
        }
        cur->tag=1;
    }

    //traverse
    for(vector<string>::iterator it=vs.begin();it!=vs.end();it++){
        s = *it;
        cout << s << ' ';
        tree * cur=root;
        for(int i=0;i<s.length();i++){
            cout << s[i];
            int k=s[i]-'a';
            cur = cur->child[k];
            if(cur->num==1) break;
        }
        cout << endl;
    }


    return 0;
}