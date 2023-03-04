#include<bits/stdc++.h>
using namespace std;
//ADT
template<class T>
class List{
    void clear();
    bool isEmpty;
    void append(const T v);
    void insert(int p, T v);
    void delete(int p);
    bool getpos(int & p, T v);
    bool getv(const int p, T & v);
    bool setv(const int p, T & v);
};

//vector/sequencial list
template<class T>
class arrList:List{
    private:
        T * alist;
        int maxSize;
        int curLen;
        int pos;
    public:
        arrList(const int size){//constructor
            maxSize=size;
            alist = nex T[maxSize];
            curLen = pos = 0;
        }
        ~arrList(){
            delete [] alist;
        }
        void clear(){
            delete[] aList;
            curLen = pos = 0;
            alist = new T[maxSize];
        }
        int length(){return curLen;}
        int getpos(int & p, const T v){
            int i;
            for(int i=0;i<n;i++)
                if(v==alist[i]) return p;
            return -1;
        }
};
//linked list
template<class T>
struct lnode{
    T data;
};
int main(){
    
    return 0;   
}