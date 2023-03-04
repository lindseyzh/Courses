#include <iostream>
#include <string>
using namespace std;
// 在此处补充你的代码
ostream & operator<<(ostream & op, string (*f1)()){
    op<<f1();
    return op;
}
ostream & operator<<(ostream & op, int (*f2)()){
    op<<f2();
    return op;
}
string Print1() 
{
	return "****";	
}
int Print2() 
{
	return 100;	
}

int main()
{
	cout << Print1 << Print2 << endl; 
	return 0;
}