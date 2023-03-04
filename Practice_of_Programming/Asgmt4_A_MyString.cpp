#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class MyString {
	char * p;
public:
	MyString(const char * s) {
		if( s) {
			p = new char[strlen(s) + 1];
			strcpy(p,s);
		}
		else
			p = NULL;

	}
	~MyString() { if(p) delete [] p; }
// 在此处补充你的代码
    void Copy(const char * w){
        if(p) delete[] p;
        if(w){
        p = new char[strlen(w)+1];
        strcpy(p,w);
        }
        else p=NULL;
    }
    MyString(const MyString & s){
//        if(p) delete[]p;
        if(s.p){
            p=new char[strlen(s.p)+1];
            strcpy(p,s.p);
        }
        else p=NULL;    
    }
    friend ostream & operator<<(ostream & op,const MyString & s){
        op << s.p;
        return op;
    }
    char * operator=(const char * w){
        if(p!=NULL) delete []p;
        if(w){
            p = new char[strlen(w)+1];
            strcpy(p,w);
        }
        else p=NULL;
        return p;
    }
    
    MyString &operator=(const MyString &s1){
        if(p!=NULL) delete[]p;
        if(s1.p){
            p=new char[strlen(s1.p)+1];
            strcpy(p,s1.p);
        }
        else p=NULL;
        return *this;
    }
    
};
int main()
{
	char w1[200],w2[100];
	while( cin >> w1 >> w2) {
		MyString s1(w1),s2 = s1;
		MyString s3(NULL);
		s3.Copy(w1);
		cout << s1 << "," << s2 << "," << s3 << endl;

		s2 = w2;
		s3 = s2;
		s1 = s3;
		cout << s1 << "," << s2 << "," << s3 << endl;
		
	}
}