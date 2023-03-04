#include <iostream>
using namespace std;
class B { 
	private: 
		int nBVal; 
	public: 
		void Print() 
		{ cout << "nBVal="<< nBVal << endl; } 
		void Fun() 
		{cout << "B::Fun" << endl; } 
		B ( int n ) { nBVal = n;} 
};
// 在此处补充你的代码
class D:public B{
    public:
        int nDVal;
		void Print() {
            B::Print();
            cout << "nDVal="<< nDVal << endl; 
            } 
		void Fun() 
		{cout << "D::Fun" << endl; } 
		D ( int n ):B(n*3),nDVal(n) {} ;
};
int main() { 
	B * pb; D * pd; 
	D d(4); d.Fun(); 
	pb = new B(2); pd = new D(8); 
	pb -> Fun(); pd->Fun(); 
	pb->Print (); pd->Print (); 
	pb = & d; pb->Fun(); 
	pb->Print(); 
	return 0;
}