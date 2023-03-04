#include <cstdlib>
#include <iostream>
using namespace std;
int strlen(const char * s) 
{	int i = 0;
	for(; s[i]; ++i);
	return i;
}
void strcpy(char * d,const char * s)
{
	int i = 0;
	for( i = 0; s[i]; ++i)
		d[i] = s[i];
	d[i] = 0;
		
}
int strcmp(const char * s1,const char * s2)
{
	for(int i = 0; s1[i] && s2[i] ; ++i) {
		if( s1[i] < s2[i] )
			return -1;
		else if( s1[i] > s2[i])
			return 1;
	}
	return 0;
}
void strcat(char * d,const char * s)
{
	int len = strlen(d);
	strcpy(d+len,s);
}
class MyString
{
// 在此处补充你的代码
    public:
        char * str;
        int leng;
        MyString(){
            str=NULL;
            leng=0;
        }
        MyString(const char* s1){
            leng=strlen(s1);
            str=NULL;
        
                str=new char[leng+1];
                for(int i=0;i<leng;i++)
                    str[i]=s1[i];
                str[leng]='\0';
            
        }
        MyString(const MyString & s1){
            leng=s1.leng;
            str=NULL;
            str=new char[leng+1];
            for(int i=0;i<leng;i++)
                str[i]=s1.str[i];
            str[leng]='\0';           
        }
        friend ostream & operator<<(ostream & op, const MyString ms){
            op<< ms.str;
            return op;
        }
        char & operator[](int i){
            return str[i];
        }
        bool operator<(const MyString & s2){
            if(strcmp(str,s2.str)==-1) return 1;
            return 0;
        } 
        bool operator>(const MyString & s2){
            if(strcmp(str,s2.str)==1) return 1;
            return 0;
        } 
        bool operator==(const MyString & s2){
            if(strcmp(str,s2.str)==0) return 1;
            return 0;
        } 
        friend MyString operator+(const MyString & s1,const MyString & s2){
            MyString ss;
            ss.str=new char[s1.leng+s2.leng];
            ss.leng=s1.leng+s2.leng;
            strcpy(ss.str,s1.str);
            strcpy(ss.str+s1.leng,s2.str);
            return ss;
        }
        MyString operator+=(const char* s2){
            int s2len=strlen(s2);
            for(int i=0;i<s2len;i++)
                str[i+leng]=s2[i];
            str[s2len+leng]='\0';
            leng+=s2len;  
            return *this;
        }
        char* operator()(int ini,int l){
            char* s1=new char[l+1];
            int i = 0;
	        for( i = 0; i<l; i++)
		        s1[i] = str[i+ini];
	        s1[l]='\0';
            return s1;
        }
};


int CompareString( const void * e1, const void * e2)
{
	MyString * s1 = (MyString * ) e1;
	MyString * s2 = (MyString * ) e2;
	if( * s1 < *s2 )
	return -1;
	else if( *s1 == *s2)
	return 0;
	else if( *s1 > *s2 )
	return 1;
}
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
	qsort(SArray,4,sizeof(MyString),CompareString);
	for( int i = 0;i < 4;i ++ )
	cout << SArray[i] << endl;
	//s1的从下标0开始长度为4的子串
	cout << s1(0,4) << endl;
	//s1的从下标5开始长度为10的子串
	cout << s1(5,10) << endl;
	return 0;
}