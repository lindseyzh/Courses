


//1.  Binary Tree

//1.1 Traversal
//1.1.1 traversal with recurrencce
template<class T>
void btree<T>::preorder(TreeNode<T>*root){
    if(root!=NULL){
        Visit(root);
        preorder(root->lfchild);
        preorder(root->rtchild);
    }
}

//1.1.2 preorder traversal without recurrence
template<class T>
void BTree<T>::PreorderWithoutRecurrence(TreeNode<T>*root){
    stack<TreeNode<T>*> aStack;
    TreeNode<T> * pointer = root;
    aStack.push(NULL);
    while(pointer){
        Visit(pointer);
        if(pointer->rightchild!=NULL)
            aStack.push(pointer->rightchild);
        if(pointer->leftchild!=NULL)
            pointer=pointer->leftchild;
        else pointer=aStack.pop();
    }
}

//1.1.3 inorder traversal without rec
template<class T>
void BTree<T>::InorderWithoutRecurrence(TreeNode<T> * root){
    stack<TreeNode<T>*> aStack;
    TreeNode<T>* pointer=root;
    while(!aStack.empty()||pointer){
        if(pointer){
            aStack.push(pointer);
            pointer = pointer->leftchild;//left down
        }
        else{
            pointer = aStack.pop();
            Visit(pointer);
            pointer = pointer->rightchild;
        }
    }
}

//1.1.4 postorder without rec
enum Tags{Left,Right};
template<class T>
struct StackElement{
    TreeNode<T> * pointer;
    Tags tag;
};
template<class T>
void BTree<T>::PostorderWithoutRecurrence(TreeNode<T> * root){
    StackElement<T> element;
    stack<StackElement<T>> aStack;
    TreeNode<T> * pointer=root;
    while(!aStack.empty()||pointer){
        if(pointer!=NULL){
            element.pointer = pointer;
            element.tag = Left;
            aStack.push(pointer);
            pointer = pointer->leftchild;
        }
        else{
            element = aStack.pop();
            pointer = element.pointer;
            if(element.tag==Left){
                element.tag=right;
                aStack.push(element);
                pointer = pointer->rightchild;
            }
            else{
                Visit(pointer);
                pointer=NULL;//to continue popping
            }
        }
    }
}

// 1.1.5 LevelOrder(BFS) -- using a QUEUE instead of a stack
//Note: This is a Queue!!!!
template<class T>
void BTree<T>::Levelorder(TreeNode<T> * root){
    queue<TreeNode<T>*> aQueue;
    TreeNode<T> * pointer = root;
    if(pointer) aQueue.push(pointer);
    while(!aQueue.empty()){
        pointer = aQueue.pop();
        Visit(pointer);
        if(pointer->leftchild!=NULL)
            aQueue.push(pointer->leftchild);
        if(pointer->rightchild!=NULL)
            aQueue.push(pointer->rightchild);
    }
}

//1.2 relavent functions
//1.2.1 Deletion
template<class T>
void BTree<T>::DeleteTree(TreeNode<T>*root){
    if(root!=NULL){
        DeleteTree(root->leftchild);
        DeleteTree(root->rightchild);
        delete root;
    }
}

//1.2.2 Parent
template<class T>
TreeNode<T> * BTree<T>::Parent(TreeNode<T>*root, TreeNode<T>*cur){
    TreeNode<T> * tmp;
    if(root==NULL) return NULL;
    if(root->leftchild==cur || root->rightchild==cur)
        return root;
    if((tmp=Parent(root->leftchild,cur)) != NULL)
        return tmp;
    if((tmp=Parent(root->rightchild,cur)) != NULL)
        return tmp;
    return NULL;
}

//1.3 Binary Search Tree (BST)

//1.3.1 Insertion of BST
template<class T>
void BinarySearchTree<T>::InsertNode(TreeNode<T> * root,
    TreeNode<T> *newpointer){
    TreeNode<T> * pointer;
    if(root==NULL){//empty tree
        Initialize(newpointer);//initialize a tree with newpointer as its root
        return;
    }
    else pointer = root;
    while(1){
        if(newpointer->value==pointer->value)
            return;//Existing value
        else if(newpointer->value < pointer->value){
            if(pointer->leftchild==NULL){
                pointer->leftchild = newpointer;
                return;
            }
            else pointer = pointer->leftchild;
        }
        else{
            if(pointer->rightchild==NULL){
                pointer->rightchild=newpointer;
                return;
            }
            else pointer = pointer->rightchild;
        }
    }
}


//1.3.2 Deletion
template<class T>
void BinarySearchTree<T>::DeleteNode(TreeNode<T> * delpointer){
    TreeNode<T> * replpointer;
    TreeNode<T> * replparent = NULL;
    TreeNode<T> * delparent = Parent(delpointer);
    if(delpointer->leftchild==NULL)
        replpointer = delpointer->rightchild;
    else{
        replpointer = delpointer->leftchild;
        while(replpointer->rightchild!=NULL){
            replparent = replpointer;
            replpointer = replpointer->rightchild;
        }
        if(replparent==NULL)
            delpointer->leftchild = replpointer->leftchild;
        else replparent->rightchild = replpointer->leftchild;
        replpointer->leftchild = delpointer->leftchild;
        replpointer->rightchild = delpointer->rightchild;
    }
    if(delparent == NULL)
        root = replpointer;
    else{
        if(delparent->leftchild==delpointer)
            delparent->leftchild = replpointer;
        else delparent->rightchild = replpointer;
    }
    delete delpointer;
    delpointer = NULL;//ends with 2 steps
    return;
}



//1.4 Heap

//1.4.1 Sift Down
template<class T>
void MinHeap<T>::SiftDown(int pos){
    int i=pos;
    int j=2*i+1;//leftchild of i
    T temp = heapArray[i];
    while(j<CurrentSize){
        if(j<CurrentSize-1 && heapArray[j]>heapArray[j+1])
            j++;//points at the min child
        if(temp>heapArray[j]){
            heapArray[i]=heapArray[j];
            i=j;j=2*i+1;
        }
        else break;//Sift ending
    }
    heapArray[i]=temp;//save some swapping
}

//1.4.2 Construction
template<class T>
void MinHeap<T>::BuildHeap(){
    for(int i=CurrentSize/2-1;i>=0;i--)
        SiftDown(i);
    //Node: CurrentSize/2-1 is just the beginning of Sifting
}

//1.4.3 Insertion
template<class T>
bool MinHeap<T>::Insert(const T& newNode){
    if(CurrentSize==MaxSize) return 0;
    heapArray[CurrentSize]=newNode;
    SiftUp(CurrentSize);
    //No SiftDown
    CurrentSize++;
}

//1.4.4 SiftUp
template<class T>
void MinHeap<T>::SiftUp(int pos){
    int temppos = pos;
    T temp = heapArray[pos];
    while(temppos>0 && heapArray[Parent(temppos)]>temp){
        heapArray[temppos] = heapArray[Parent(temmpos)];
        temppos = Parent(temppos);
    }
    heapArray[temppos]=temp;
}

//1.4.5 Remove Min Value
template<class T>
T & MinHeap<T>::RemoveMin(){
    if(CurrentSize==0)
        exit(1);
    else{
        swap(heapArray[0],heapArray[--CurrentSize]);
        if(CurrentSize>1)
            SiftDown(0);
        return heapArray[CurrentSize];//min value
    }
}

//1.4.6 Remove
template<class T>
bool MinHeap<T>::Remove(int pos, T&node){
    if(pos<0 || pos>=CurrentSize)
        return 0;
    T temp = heapArray[pos];
    heapArray[pos]=heapArray[--CurrentSize];
    SiftUp(pos);
    SiftDown(pos);
    return 1;
}

//1.5 Huffman Tree
//construction
template<class T>
HuffmanTree<T>::HuffmanTree(T weight[], int n){
    MinHeap<TreeNode<T>> heap;
    TreeNode<T> * parent, &firstchild, &secondchild;
    TreeNode<T> * NodeList = new TreeNode<T>[n];
    //heap construction (preparing for huffman tree construction)
    for(int i=0;i<n;i++){
        NodeList[i].element = weight[i];
        NodeList[i].parent = NodeList[i].leftchild
            = NodeList[i].rightchild = NULL;
        heap.Insert(NodeList[i]);
    }
    //Merge: merge two trees in a time to construct a huffman tree
    for(int i=0;i<n-1;i++){
        parent = new TreeNode<T>;
        firstchild = heap.RemoveMin();
        secondchild = heap.RemoveMin();
        MergeTree(firstchild,secondchild, parent);
        heap.Insert(*parent);
        root = parent;//parent update
    }
    delete []NodeList;
}


//2. Tree

//2.1 Root First Traversal
template<class T>
void Tree<T>::RootFirstTraverse(TreeNode<T>*root){
    //The function visits root and its all siblings
    while(root!=NULL){
        Visit(root);
        RootFirstTraverse(root->LeftMostChild);
        root = root->RightSibling;//to visit its sibling
    }
}

//2.2 Root Last Traversal
template<class T>
void Tree<T>::RootLastTraverse(TreeNode<T>*root){
    while(root!=NULL){
        RootLastTraverse(root->LeftMostChild);
        Visit(root);
        root=root->RightSibling;//to visit its sibling
    }
}

//we lost each other;
//or..we gave up each other.
//Never will i meet someone like you
//for everyone is so special
//But I'm so happy..so happy
//I'm sorry for my happiness


//2.3 Width Traversal/Breadth First Traversal
template<class T>
void Tree<T>::WidthTraverse(TreeNode<T>*root){
    queue<TreeNode<T>*> aQueue;
    TreeNode<T> * pointer = root;
    //Intialization: put root and its siblings into the queue
    while(pointer!=NULL){
        aQueue.push(pointer);
        pointer = pointer->RightSibling;
    }
    while(!aQueue.empty()){
        pointer = aQueue.pop();
        Visit(pointer);
        pointer = pointer->LeftMostChild;
        while(pointer!=NULL){
            aQueue.push(pointer);
            pointer=pointer->RightSibling;
        }
    }
}

//2.4 find parent: Width Traversal -> QUEUE!!!!!
template<class T>
TreeNode<T> * Tree<T>::Parent(TreeNode<T>* current){
    queue<TreeNode<T>*> aQueue;
    TreeNode<T> * pointer = root;
    TreeNode<T> * upperlevelpointer = NULL;
    if(current!=NULL && pointer!=current){
        //Initialization
        while(pointer){
            if(current==pointer)
                return NULL;
            aQueue.push(pointer);
            pointer=pointer->RightSibling();
        }
        //traversal
        while(!aQueue.empty()){
            pointer = aQueue.pop();
            upperlevelpointer = pointer;
            pointer = pointer->LeftMostChild;
            while(pointer){
                if(current==pointer)
                    return upperlevelpointer;
                else{
                    aQueue.push(pointer);
                    pointer = pointer->RightChild;
                }
            }
        }
    }
    return NULL;
}


//2.4 Disjoint Set
//2.4.1 find without path conpression
template<class T>
TreeNode<T> * ParTree<T>::Find(TreeNode<T> * node) const{
    TreeNode<T> * pointer = node;
    while(pointer->parent!=NULL)
        pointer = pointer->parent;
    return pointer;
}

//2.4.2 find with path conpression
template<class T>
TreeNode<T> * ParTree<T>::FindWithPc(TreeNode<T> * node){
    if(node->parent==NULL) 
        return node;
    node->setParent(FindWithPC(node->parent));
    return node->parent;
}

//2.4.3 Differentiation
template<class T>
bool ParTree<T>::Different(int i, int j){
    TreeNode<T> * pointeri = Find(&arr[i]);
    TreeNode<T> * pointerj = Find(&arr[j]);
    return pointeri!=pointerj;
}

//2.4.4 Union with weighted union rule
template<class T> 
void ParTree<T>::Union(int i,int j){
    TreeNode<T> * pointeri = Find(&arr[i]);
    TreeNode<T> * pointerj = Find(&arr[j]);
    if(pointeri!=pointerj){
        if(pointeri->size()<pointerj->size()){
            pointeri->parent = pointerj;
            pointerj->size = pointeri->size + pointerj->size;
        }
        else{
            pointerj->parent = pointeri;
            pointeri->size = pointeri->size + pointerj->size;

        }
    }
}



//3 expression


