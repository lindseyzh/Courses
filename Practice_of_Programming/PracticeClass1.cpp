#include<iostream>
using namespace std;

class Midterm {
private:
  int val; 
public:
// 在此处补充你的代码
    Midterm():val(0){};
    Midterm(int v):val(v){};
    friend ostream & operator<<(ostream & op, const Midterm obj){
        op<<obj.val;
        return op;
    }
    int & operator++(int k){
        val++;
        return val;
    }
    friend int operator+(const Midterm a,const int & b){
        return a.val+b;
    }
    Midterm & operator-=(const int& d){
        val-=d;
        return *this;
    }
    operator int(){
        return val;
    }
};

int Min(int a,int b) {
  if(a < b)
    return a;
  else
    return b;
}
int main(){
  Midterm a; 
  cout << a << endl;
  cout << a + 2021 << endl;
  Midterm b(1000);
  cout << b ++ << endl; 
  ((b-=10)-=20)-=30;
  cout << b ++ << endl; 
  cout << Min(255,b) <<endl;
  return 0;
}
