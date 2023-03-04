#include <iostream>
#include <string>
using namespace std;
struct A {
	int n;
	A() { };
	A(int n_ ):n(n_) { }
// 在此处补充你的代码
    friend A operator+(const A & a, const A & b){
        A r(a.n+b.n);
        return r;
    }
    //error 1: "friend A & operator + .."
    //error 2: "A operator +..",if there's no "friend", that's a member function! But the object is a const one.
    //error 3: "const A operator+"
};
int main()
{
	A c;
	const A a(10);
	c = a + A(30);
	cout << c.n << endl; 
	return 0;
}