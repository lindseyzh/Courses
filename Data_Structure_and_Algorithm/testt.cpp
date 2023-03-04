#include<bits/stdc++.h>
using namespace std;
class nd{
    public:
        nd * lfchild;
        nd * rtchild;
        int v;
};
void Visit(nd *);
void Initialization(nd *);
nd * Parent(nd *);
nd * Root;
void Traversal(nd * root){
    Visit(root);//preorder
    Traversal(root->lfchild);
    Traversal(root->rtchild);
}

void preWithoutRec(nd * root){
    stack<nd*> aStack;
    nd * pointer=root;
    aStack.push(NULL);
    while(pointer){
        Visit(pointer);
        if(pointer->rtchild!=NULL)
            aStack.push(pointer->rtchild);
        if(pointer->lfchild!=NULL)
            pointer=pointer->lfchild;
        else {
            pointer=aStack.top();
            aStack.pop();    
        }
    }
}

template<class T> void InWithoutRec(nd * root){
    stack<nd*> aStack;
    nd * pointer=root;
    while(!aStack.empty()||pointer){
        if(pointer){
            aStack.push(pointer);
            pointer=pointer->lfchild;
        }
        else{
            pointer=aStack.top();
            aStack.pop();
            Visit(pointer);
            pointer=pointer->rtchild;
        }
    }
}

enum Tags{lf,rt};
class ele{
    public:
        nd * pointer;
        Tags tag;
};
void PostWithoutRec(nd * root){
    ele element;
    stack<ele> aStack;
    nd * pointer=root;
    while(!aStack.empty()||pointer){
        if(pointer){
            element.pointer=pointer;
            element.tag=lf;
            aStack.push(element);
            pointer=pointer->lfchild;
        }
        else{
            element=aStack.top();
            aStack.pop();
            pointer=element.pointer;
            if(element.tag==lf){
                element.tag=rt;
                aStack.push(element);
                pointer=pointer->rtchild;
            }
            else{
                Visit(pointer);
                pointer=NULL;
            }
        }
    }
}

template<class T>
void levelOrder(nd * root){
    queue<nd*> aQueue;
    nd * pointer=root;
    while(!aQueue.empty()){
        pointer=aQueue.pop();
        Visit(pointer);
        if(pointer->lfchild)
            aQueue.push(pointer->lfchild);
        if(pointer->rtchild)
            aQueue.push(pointer->rtchild);
    }
}


//BST
//Insertion
template<class T> 
void InsertNd(nd * root, nd * newp){
    if(root==NULL){
        Initialization(newp);
        return;
    }
    nd * pointer=root;
    while(1){
        if(pointer->v==newp->v)    return;
        if(newp->v < pointer->v){//left child
            if(pointer->lfchild)
                pointer=pointer->lfchild;
            else {
                pointer->lfchild = newp;
                return;
            }
        }
        else{//rightchild
            if(pointer->rtchild)
                pointer=pointer->rtchild;
            else{
                pointer->rtchild=newp;
                return;
            }
        }
    }
}

//Deletion
void Deletepointer(nd * delpointer){
    nd * replpointer;
    nd * replparent = NULL;
    nd * delparent = Parent(delpointer);
    if(delpointer->lfchild==NULL)
        replpointer=delpointer->rtchild;
    else{
        replpointer = delpointer->lfchild;
        while(replpointer->rtchild!=NULL){
            replparent=replpointer;
            replpointer=replpointer->rtchild;
        }
        if(replparent==NULL){//delpoiner->lfchild has no rtchild
            delpointer->lfchild = replpointer->lfchild;//for later replacement   
        }
        else replparent->rtchild = replpointer->lfchild;
        replpointer->lfchild=delpointer->lfchild;
        replpointer->rtchild=delpointer->rtchild;
        if(delparent==NULL)
            Root=replpointer;
        else {
            if(delparent->lfchild=delpointer)
                delparent->lfchild = replpointer;
            else delparent->rtchild = replpointer;
        }
    }
    delete delpointer;
    delpointer=NULL;
    return;
}

priority_queue<int> maxheap;
priority_queue<int, vector<int>, greater<int>> minheap;
void heap_op(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        maxheap.push(a);
        minheap.push(a);
    }
    for(int i=0;i<n;i++){
        cout << maxheap.top() << ' ';
        maxheap.pop();
    }
    cout << endl;
    for(int i=0;i<n;i++){
        cout << maxheap.top() << ' ';
        maxheap.pop();
    }
    cout << endl;
}

int main(){
    heap_op();
    return 0;
}