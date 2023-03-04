#include <iostream> 
using namespace std;
class Point { 
	private: 
		int x; 
		int y; 
	public: 
		Point() { };
// 在此处补充你的代码
    friend istream& operator>>(istream & ip, Point & p){
        ip >> p.x >> p.y;
        return ip;
    }
    friend ostream& operator<<(ostream & op, Point & p){
        op << p.x << ','<< p.y;
        return op;
    }
}; 
int main() 
{ 
 	Point p;
 	while(cin >> p) {
 		cout << p << endl;
	 }
	return 0;
}