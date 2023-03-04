//sol 2.AC
//sol 1 is too complicated
//reference:https://blog.csdn.net/weixin_45637770/article/details/109011204
#include<bits/stdc++.h>
using namespace std;
int n,a,i;
stack<int> st;
queue<int> ot;
int ott[1000001]{};
inline void ppush(int i){
    st.push(i);
    printf("PUSH %d\n",i);
}
inline void ppop(int i){
    st.pop();
    ot.pop();
    printf("POP %d\n",i);
}
int main(){
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        if(a>n){
            cout << "NO" << endl;
            return 0;
        }
        ot.push(a);
        ott[i]=a;
    }  
    for(i=1;i<=n;i++){
        st.push(i);
        while(!st.empty() && st.top()==ot.front()){
            st.pop();
            ot.pop();
        } 
        //cout << st.top() << " " << ot.front() << endl;
    }
    bool ans;
    if(ot.empty()) ans=1;
    else ans=0;

    if(ans){
        for(int i=0;i<n;i++)
            ot.push(ott[i]);
        for(i=1;i<=n;i++){
            ppush(i);
            while(!st.empty() && st.top()==ot.front()){
                ppop(st.top());
        } 
        //cout << st.top() << " " << ot.front() << endl;
    }
    }
    else cout << "NO" << endl;
    return 0;
}


//sol 1.struct: stack & queue (MLE) 
/*
#include<bits/stdc++.h>
using namespace std;
int n,a,i;
stack<int> st;
queue<int> ot;
int ott[1000001]{};
inline void ppush(int i){
    st.push(i);
    printf("PUSH %d\n",i);
}
inline void ppop(int i){
    st.pop();
    ot.pop();
    printf("POP %d\n",i);
}
int main(){
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        if(a>n){
            cout << "NO" << endl;
            return 0;
        }
        ot.push(a);
        ott[i]=a;
    }  
    i=1;
    while(1){
        if(i==n+1 && st.top()!=ot.front()) break;
        while(!st.empty() && st.top()==ot.front()){
            st.pop();
            ot.pop();
        } 
        if(ot.empty()) break;
        while(st.empty()||st.top()!=ot.front()){
            st.push(i);
            i++;
            if(i==n+1) break;
        }
        //cout << st.top() << " " << ot.front() << endl;
    }
    bool ans;
    if(ot.empty()) ans=1;
    else ans=0;

    if(ans){
        for(int i=0;i<n;i++)
            ot.push(ott[i]);
        i=1;
        while(1){
            while(!st.empty() && st.top()==ot.front()){
                ppop(st.top());
            } 
            if(ot.empty()) break;
            while(st.empty()||st.top()!=ot.front()){
                ppush(i);
                i++;
                if(i==n+1) break;
            }
        }
    }
    else cout << "NO" << endl;
    return 0;
}

*/