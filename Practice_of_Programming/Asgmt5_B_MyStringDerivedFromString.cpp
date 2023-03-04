//https://www.cnblogs.com/Latticeeee/p/8662306.html
#include <cstdlib>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class MyString:public string
{
// 在此处补充你的代码
    public:
        MyString():string(){};
        MyString(const MyString &s):string(s){};
        MyString(const char* s):string(s){};
        MyString(const string & s):string(s){};
        MyString operator()(int n, int l){
            return substr(n,l);
        }
    /*
        MyString():string(""){};
        MyString(const char*s):string(s){};
        MyString(const MyString& s):string(s){};
        string operator()(int fir,int las){
            return substr(fir,las);
        }
        MyString & operator=(const MyString& s){
            this->assign(s.data());
            return *this;
        }
        friend MyString operator+(const MyString & s1, const MyString & s2){
            MyString ss;
            ss.assign(s1+s2);
            return ss;
        }
        friend MyString operator+(const MyString & s1, const char* s2){
            return s1+MyString(s2);
        }
        friend MyString operator+(const char* s1,MyString & s2){
            MyString ss(s1);
            return ss+s2;
        }        
        friend ostream & operator<<(ostream&op,const MyString s){
            op<<string(s);
            return op;
        }
        */
}; 

int main()
{
	MyString s1("abcd-"),s2,s3("efgh-"),s4(s1);
	MyString SArray[4] = {"big","me","about","take"};
	cout << "1. " << s1 << s2 << s3<< s4<< endl;
	s4 = s3;
	s3 = s1 + s3;
	cout << "2. " << s1 << endl;
	cout << "3. " << s2 << endl;
	cout << "4. " << s3 << endl;
	cout << "5. " << s4 << endl;
	cout << "6. " << s1[2] << endl;
	s2 = s1;
	s1 = "ijkl-";
	s1[2] = 'A' ;
	cout << "7. " << s2 << endl;
	cout << "8. " << s1 << endl;
	s1 += "mnop";
	cout << "9. " << s1 << endl;
	s4 = "qrst-" + s2;
	cout << "10. " << s4 << endl;
	s1 = s2 + s4 + " uvw " + "xyz";
	cout << "11. " << s1 << endl;
        sort(SArray,SArray+4);
	for( int i = 0;i < 4;i ++ )
	cout << SArray[i] << endl;
	//s1的从下标0开始长度为4的子串
	cout << s1(0,4) << endl;
	//s1的从下标5开始长度为10的子串
	cout << s1(5,10) << endl;
	return 0;
}