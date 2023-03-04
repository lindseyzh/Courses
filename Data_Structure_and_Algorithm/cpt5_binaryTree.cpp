#include<stack>
#include<queue>
#include<iostream>
using namespace std;

//ADT(abstract data type)
template<class T> class btree;
template<class T>
class btNode{
    friend class btree<T>;
    private:
        T v;//value
    public:
        //constructors
        btNode();//default constructor
        btNode(const T& vv);//constructor of Node
        btNode(const T& vv, btNode<T>* lf, btNode<T>* rt);//constructor for Node with children

        //get values
        T getValue() const {return v;};
        btNode<T> * lfchild;
        btNode<T> * rtchild;        
        //btNode<T> * lfchild() const;
        //btNode<T> * rtchild() const;
        //member func with 'const' postfix:
        //the object can't be changed in this func 

        //set values
        void setValue(const T& val);
        void setlf(btNode<T>*);//set left child
        void setrt(btNode<T>*);//set right child
        btNode<T> & operator=(const btNode<T>& n);//operator overloading of '='
};

//binary tree
template<class T>
class btree{
    private:
        btNode<T>* root;
    public:
        btree(){root=NULL;}//default constructor
        ~btree(){delteBtree(root);}//destructor
        bool isEmpty() const{return root=NULL;}
        btNode<T>* Root(){return root;};
        btNode<T>* Parent(btNode<T>*,btNode<T>*);
        btNode<T>* Parent(btNode<T>*);
        btNode<T>* lfSibling(btNode<T>*);
        btNode<T>* rtSibling(btNode<T>*);
        void iniTree(const T & v, btree<T>& lf, btree<T>& rt);
        void iniTree(btNode<T>*);
        void preOrder(btNode<T> * r);//r can be other treenode root
        void preOrderWithoutRec(btNode<T> * r);
        void inOrder(btNode<T> * r);//inorder traversal
        void inOrderWithoutRec(btNode<T> * r);
        void postOrder(btNode<T>*r);//
        void postOrderWithoutRec(btNode<T> * r);
        void levelOrder(btNode<T>*r);//level order traversal
        void deleteBtree(btNode<T>* r);
};

//traversal subfunc
template<class T>
void visitit(btNode<T>*);

//preorder traversal with recurrence
template<class T>
void btree<T>::preOrder(btNode<T>* r){
    if(r==NULL) return;
    visitit(r);
    preOrder(r->lfchild);
    preOrder(r->rtchild);
    //for inOrder,
    /*
        preOrder(r->lfchild);
        visitit(r);
        preOrder(r->rtchild);
    */
    //for postOrder,
    /*
        preOrder(r->lfchild);
        preOrder(r->rtchild);
        visitit(r);
    */
}


//preorder traversal without recurrence
template<class T>
void btree<T>::preOrderWithoutRec(btNode<T>*r){
    //using std::stack;//I've written "using namespace std", so this is not necessary
    stack<btNode<T>*> ns;
    btNode<T>* p=r;
    ns.push(NULL);
    while(p){
        visitit(p);
        if(p->rtchild) 
            ns.push(p->rtchild);
        if(p->lfchild)
            p=p->lfchild;
        else p=ns.pop();//left tree visited, go to right tree
        //Note: pop() returns a pointer of top element of stack
        //      and then pop it out
    }
}


//inorder traversal without recurrence
template<class T>
void btree<T>::inOrderWithoutRec(btNode<T>*r){
    stack<btNode<T>*> ns;
    btNode<T> * p = r;
    while(p || !ns.empty()){
        if(p){
            ns.push(p);
            p=p->lfchild;//visit lf child
        }
        else{
            p=ns.pop();
            visitit(p);
            p=p->rtchild;//visit rt child
        }
    }
}

//postorder traversal without recurrence
enum Tags{lf,rt};
template<class T>
struct potype{
    btNode<T> * p;
    Tags tag;
};
template<class T>
void btree<T>::postOrderWithoutRec(btNode<T>*r){
    stack<potype<T>> ns;
    btNode<T> p=r;
    potype<T> cur;
    cur.p=p;
    cur.tag=lf;
    while(p||!ns.empty()){
        if(p){
            cur.p=p;
            cur.tag=lf;
            ns.push(cur);
            p=p->lfchild;
        }
        else{
            cur=ns.pop();
            p=cur.p;
            if(cur.tag==lf){
                cur.tag=rt;
                ns.push(cur);
                p=p->rtchild;
            }
            else{
                visitit(p);
                p=NULL;//then pops
            }
        }
    }
}

//level order traversal: BFS
template<class T>
void btree<T>::levelOrder(btNode<T>*r){
    if(!r) return;
    queue<btNode<T>*> qn;
    qn.push(r);
    btNode<T>* nd;
    while(!qn.empty()){
        nd=qn.top();
        qn.pop();
        visitit(nd);
        if(nd->lfchild)//don't push an empty pointer!
            nd.push(nd->lfchild);
        if(nd->rtchild)
            qn.push(nd->rtchild);
    }
}

//delete a binary tree
template<class T>
void btree<T>::deleteBtree(btNode<T>*r){
    deleteBtree(r->lfchild);
    deleteBtree(r->rtchild);
    delete r;//delete + POINTER is ok
}

//find the parent
template<class T>
btNode<T> * Parent(btNode<T> * r,btNode<T>* cur){
    btNode<T>*tmp;
    if(r==NULL) return NULL;
    if(r->lfchild==cur || r->rtchild==cur) return r;
    //recurrence
    if(tmp=Parent(r->lfchild,cur)==r) 
        return tmp;
    if(tmp=Parent(r->rtchild,cur)==r)
        return tmp;
    return NULL;
}



//binary search tree
template<class T>
class bstree:btree<T>{  
    public:
        void InsertNode(btNode<T>*,btNode<T>*);
        void DeleteNode(btNode<T>*);
};

//insertion of element
template<class T>
void bstree<T>::InsertNode(btNode<T>*r,btNode<T>*np){
    btNode<T> * p;
    if(r==NULL) 
        iniTree(r);
    else p=r;
    while(1){
        if(np->getValue()==p->getValue()) 
            return;//Existing value
        else 
        if (np->getValue() < p->getValue()){
            if(p->lfchild==NULL){
                p->lfchild=np;
                return;
            }
            else p=p->lfchild;
        }
        else{//np.value>p.value
            if(p->rtchild==NULL){
                p->rtchild=np;
                return;
            }
            else p=p->rtchild;
        }
    }
}

//deletion of binary tree
template<class T>
void bstree<T>::DeleteNode(btNode<T> * delpointer){
    if(!delpointer) return;
    btNode<T>* replpointer;
    btNode<T> * replparent=NULL;
    btNode<T>* delparent=Parent(delpointer);
    if(delpointer->lfchild==NULL){//nd has no left child
        replpointer=delpointer->rtchild;
    }
    else{
        replpointer=delpointer->lfchild;
        while(replpointer->rtchild!=NULL){
            replparent = replpointer;
            replpointer=replpointer->rtchild;
        }
        //note: now rep has no right child
        if(replparent==NULL) //if replpointer is lfchild of nd
            delpointer->lfchild=replpointer->lfchild; 
        else //now replpointer is its parent's rtchild
            replparent->rtchild=replpointer->lfchild;
            //take away rep and connect its lfchild to its parent
        replpointer->lfchild = delpointer->lfchild;
        replpointer->rtchild = delpointer->rtchild;
        //rep gets its new children
    }
    //rep gets its new paret
    if(delparent==NULL) root=replpointer;
    else {
        if(delparent->lfchild==delpointer)
            delparent->lfchild=replpointer;
        else delparent->rtchild=replpointer;
    }
    delete delpointer;
    delpointer=NULL;//the two are both necessary
    return;
}


int main(){
    
    return 0;
}