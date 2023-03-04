#include <iostream>
#include <cstring>
using namespace std;

class Array2 {
// 在此处补充你的代码
    public:
        int m,n;
        int *ar;
        Array2(){ar=NULL;}
        Array2(int mm,int nn):m(mm),n(nn){
            ar = new int[mm*nn];
        };
        Array2 & operator=(const Array2 & a2){
            if(ar) delete []ar;
            m=a2.m;
            n=a2.n;
            if(a2.ar){
                ar=new int[a2.m*a2.n];
                memcpy(ar,a2.ar,sizeof(int)*m*n);
            }
            return *this;
        }
        Array2(Array2 &a2){
            if(ar) delete []ar;
            m=a2.m;
            n=a2.n;
            if(a2.ar){
                ar=new int[m*n];
                memcpy(ar,a2.ar,sizeof(int)*m*n);
            }
        }
        ~Array2(){
            if (ar!=NULL) delete[]ar;
        }
        int * operator [](const int i){
            return ar+i*n;
        }
        int & operator()(int i,int j){
            return ar[i*n+j];
        }
        
};

int main() {
    Array2 a(3,4);
    int i,j;
    for(  i = 0;i < 3; ++i )
        for(  j = 0; j < 4; j ++ )
            a[i][j] = i * 4 + j;
    for(  i = 0;i < 3; ++i ) {
        for(  j = 0; j < 4; j ++ ) {
            cout << a(i,j) << ",";
        }
        cout << endl;
    }
    cout << "next" << endl;
    Array2 b;     b = a;
    for(  i = 0;i < 3; ++i ) {
        for(  j = 0; j < 4; j ++ ) {
            cout << b[i][j] << ",";
        }
        cout << endl;
    }
    return 0;
}