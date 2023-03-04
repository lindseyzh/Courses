#include <cstdio>
#include <iostream>
using namespace std;

class f {
// 在此处补充你的代码
    public:
        int x,y;
        f(int a,int b=0):x(a),y(b){};
        operator int(){
            return x*y;
        }
        int operator ()(int b){
            return b-x;
        }
};

int main() {
  cout << f(3)(5) << endl;
  cout << f(4)(10) << endl;
  cout << f(114)(514) << endl;
  cout << f(9,7) << endl;
  cout << f(2,3) << endl;
  cout << f(2,5) << endl;
}
