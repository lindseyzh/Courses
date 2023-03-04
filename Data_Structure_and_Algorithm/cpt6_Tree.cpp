#include<bits/stdc++.h>
using namespace std;

template<class T>
class Node{

};
template<class T>
class Tree{
    public:
        tree();
        virtual ~tree();
};

//Root First/Last Traversal: 
//equal in reccurence, different in the time to visit current node

//Root First Traversal: Recurrence
template<class T>
void Tree<T>::RootFirstTraverse(node<T>*root){
    while(root!=NULL){
        Visit(root->Value());
        RootFirstTraverse(root->LeftMostChild());
        //visit the left most chile
        root=root->RightSibling();
        //visit right sibling(s) of root
    }
}

//Root Last Traversal
template<class T>
void Tree<T>::RootLastTraverse(node<T>*root){
    while(root!=NULL){
        RootLastTraverse(root->LeftMostChild());
        Visit(root->Value());
        root = root->RightSibling();
    }
}

//Width Traversal (basic BFS)
template<class T>
void Tree<T>::WidthTraversal(node<T>*root){
    queue<node<T>*> qn;
    //queue initialization
    node<T>* p = root; 
    while(p!=NULL){
        qn.push(p);
        p = p->RightSibling();
    }
    //Traversal
    while(!qn.empty()){
        p = qn.front();
        qn.pop();
        Visit(p->Value());
        p = p->LeftMostChild();
        while(p!=NULL){
            qn.push(p);
            p = p->RightSibling();
        }
    }
}

//Node Insertion Example: insert a Left Most Child
template<class T>
void Node<T>::InsertFirst(Node<T>* newchild){
    if(newchild==NULL) return;
    if(pchild)//if the node has at least one child
        newchild->RightSibling = pchild;
    pchild = newchild;
}

//find parent of a child
//do a width traversal and find the parent node 
template<class T>
Node<T>* Tree<T>::Parent(Node<T>*cur){
    queue<Node<T>*> qn;
    Node<T> * p = root;
    Node<T> * upperLevelPointer = NULL;//parent
    if(cur!=NULL && p!=cur){
        while(p){//push root and all the siblings of root
            if(cur==p) return NULL;
            qn.push(p);
            p = p->RightSibling();
        }
        while(!qn.empty()){
            p = qn.pop();
            upperLevelPointer = p;
            p = p->LeftMostChild();
            while(p){
                if(cur = p) 
                    return upperLevelPointer;
                else{
                    qn.push(p);
                    p = p->RightSibling();
                }
            }
        }
    }
    return NULL;
}

//destroy a node and its subtrees
//Root Last Traversal
template<class T>
void Tree<T>::DestroyNodes(Node<T>* root){
    if(root){
        DeleteNodes(root->LeftMostChild);
        DeleteNodes(root->RightSibling);
        delete root;//delete root in the end
    }
}

//delete subtrees
void Tree<T>::DeleteSubTree(Node<T>* subroot){
    Node<T> * p = subroot->PrevSibling();//
    if(p=NULL){
        p = parent(subroot);
        if(p){
            p->LeftMostChild = subroot->RightSibling();
            subroot -> RightSibling = NULL;
        }
        else {
            root = subroot->RightSibling();
            subroot->RightSibling = NULL;
        }
    }
    else{
        p -> RightSibling = subroot -> RightSibling();
        subroot -> RightSibling = NULL;
    }
    DestroyNodes(subroot);
}


//Disjoint Set 
//parent tree: for DSU(Disjoint Set Union)

//DSU: find
template<class T>
Node<T>* ParTree<T>::Find(Node<T>*node) const{
    Node<T> * p = node;
    while(p->getParent()!=NULL)
        p = p->getParent();
    return p;
}

//DSU: Union with Weighed Union Rule
template<class T>
void ParTree<T>::Union(Node<T>*a, Node<T>*b){
    Node<T> * pa = Find(a);
    Node<T> * pb = Find(b);
    if(pa->size()>=pb->size()){
        pb->setParent(pa);
        pa->setSize(pa->size()+pb->size());    
    }
    else {
        pa->setParent(pb);
        pb->setSize(pa->size()+pb->size());
    }
    return;
}


//find with Path Conpression(Recurrence)
template<class T>
Node<T> * ParTree<T>::FindWithPC(Note<T>*a){
    if(a->parent==NULL) return a;
    a->setParent(FindWithPC(a->parent));
    return a->parent;
}

//Storage: Dual Tags, Root First
template<class T>
class DualTagNode{
    public:
        T info;
        int ltag,rtag;
    //note: ltag=0 - the node has LeftChild in the equivelent binary tree 
        DualTagNode(){
            ltag = rtag =1;
        }
        virtual ~DualTagNode(){}
}

//Tree Construction:
//Convert a Dual-Tags-Root-First Array into a linked tree
template<class T>
Tree<T>::TreeConstruction(DualTagNode<T> * arr, int num){
    stack<DualTagNode<T>*> sn;

    //Intialization: for root pointer
    DualTagNode<T> * p = new TreeNode<T>;
    root = p;

    //Construction
    for(int i=0;i<num;i++){
        //for rtag (right~sibling)
        p->setValue(arr[i].info);
        if(arr[i].rtag==0)//has a right sibling
            sn.push(p);
        else p->setSibling(NULL);

        //for ltag (left~child)
        DualTagNode<T> * tmp = new DualTagNode<T>;
        //to store arr[i+1](info will be added in the next loop)
        if(arr[i].ltag==0)// has a child
            p->setchild(tmp);
        else{
            p = sn.pop();
            p->setSibling(tmp);
        }
        p = tmp;//to be updated in the next loop
    }
    //dealing with the last node
    p->setValue(arr[num-1]);
    p->setSibling(NULL);
    p->setChild(NULL);
}
