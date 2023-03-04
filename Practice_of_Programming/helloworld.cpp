//c++ 11: reinterpret_cast
#include<iostream>
using namespace std;
class A{
    public:
        int i,j;
        A(int n):i(n),j(n){}
};
int main(){
    A a(100);
    int & r = reinterpret_cast<int&>(a);//int & r = a;
    r = 200;//a.i=200;
    cout << a.i << ' ' << a.j << endl;//200 100

    int n=300;
    A * pa = reinterpret_cast<A*>(&n);
    pa->i = 400;
    pa->j = 500;//Unsafe Statement!The program might crash here
    cout << n << endl;
    long long la = 0x12345678abcdLL;//a random address
    pa = reinterpret_cast<A*>(la);
    unsigned int u = reinterpret_cast<unsigned int>(pa);//Compiler of vscode doesn't allow this
    cout << hex << u << endl;//5678abcd
    typedef void(*PF1)(int);
    typedef int(*PF2)(int,char*);
    PF1 pf1;
    PF2 pf2;
    pf2 = reinterpret_cast<PF2>(pf1);
    return 0;
}


/*
//c++11: static_cast
#include<iostream>
using namespace std;
class A{
    public:
        operator int(){return 1;}
        operator char*(){return NULL;}
};
int main(){
    A a;
    char * p = "NewDragonInn";
    int n = static_cast<int>(3.14);//n=3;
    int m = static_cast<int>(a);//m=1
    p = static_cast<char*>(a);//p=NULL
//    p = static_cast<char*>(n);//error.Illegal typecasting
    return 0;
}
*/

/*
//c++ 11: lambda expression: Fibonacci Array
#include<iostream>
#include<functional>//for std::function
using namespace std;
int main(){
    function<int(int)> fib = [&fib](int n)
        {return n<=2? 1:fib(n-1)+fib(n-2);};
    //Recursion.Remember to use "fib" as a reference parameter
    cout << fib(5) << endl;
    //auto
    vector<int> a{1,2,3,4};
    auto sq = [](int i){
        return i*i;
    };
    for_each(a.begin(),a.end(),[&sq](int i){cout << sq(i) << ' ';});
    return 0;
}
*/

/*
//c++ 11: lambda expression(demo 2)
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> a{1,2,3,4};
    int total = 0;
    for_each(a.begin(),a.end(),[&total](int & b){total+=b;b*=2;});
    //don't forget "&", or
    cout << total << endl;
    for_each(a.begin(),a.end(),[](int b){cout << b << ' ';});
    cout << endl;
    return 0;
}
*/

/*
//c++ 11: lambda expression(demo 1)
#include<bits/stdc++.h>
using namespace std;
int main(){
    //1
    int x=100,y=200,z=300;
    cout << [](double a,double b){return a+b;}(1.2,2.3) << endl;//3.5
    auto ff = [=,&y,&z](int n){
        cout << x<< endl;//100
        y++;z++;//x and y are used as reference
        return n*n;
    };//don't forget this semicolon ';'
    cout << ff(16) << endl;//256
    printf("(%d,%d)\n",y,z);//201,301

    //2
    int a[4]={4,2,11,33};
    sort(a,a+4,[](int x,int y)->bool{return x%10 < y%10;});
    for_each(a,a+4,[](int x){cout << x << ' ';});
    //11 2 33 4
    cout << endl;
    return 0;
}
*/

/*
//c++ 11: regular experssion
#include<regex>//header file
#include<bits/stdc++.h>
using namespace std;
int main(){
    regex reg("b.?p.*k");
    cout << "boopgggk:" << regex_match("boopgggk",reg) << endl;//0
    cout << "bopggk:" << regex_match("bopggk",reg) << endl;//1
    cout << "b pk:" <<regex_match("b pk",reg) << endl;//1
    regex reg2("\\d{3}([a-zA-Z]+).(\\d{2}|N/A)\\s\\1");
    string correct="123Hello N/A Hello";
    string incorrect="123Hello 12 hello";
    cout << regex_match(correct,reg2) << endl;//1
    cout << regex_match(incorrect,reg2) << endl;//0
    return 0;
}
*/


/*
//c++ 11: hash map
#include<unordered_map>//header file
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int> turingWinner;
    turingWinner.insert(make_pair("Dijkstra",1972));
    turingWinner.insert(make_pair("Scott",1976));
    turingWinner.insert(make_pair("Wilkes",1967));
    turingWinner["Ritchie"]=1983;
    string name;
    cin>>name;
    unordered_map<string,int>::iterator p=turingWinner.find(name);
    if(p!=turingWinner.end())
        cout << p->second<<endl;
    else cout << "Not Found" << endl;
    return 0;
}
*/

/*
//c++ 11: r-value reference & move
#include<bits/stdc++.h>
using namespace std;
class A{};
//A & r=A();//error. A() is a rvalue
A && r=A();//ok. rvalue reference
class String{
    public:
        char * str;
        int l;
        String():str(new char[1]),l(0){str[0]=0;}
        String(const char* s){
            l=strlen(s);
            str = new char[l+1];
            strcpy(str,s);
        }
        String(const String & s){//copy constructor
            cout << "Copy Constructor Called" << endl;
            l=s.l;
            str = new char[l+1];
            strcpy(str,s.str);
        }
        String & operator=(const String & s){
            cout << "Copy Operator= Called" << endl;
            if(str!=s.str){
                delete[]str;
                l=s.l;
                str=new char[l+1];
                strcpy(str,s.str);
            }
            return *this;
        }
        //move constructor
        String(String && s):str(s.str),l(s.l){
            cout << "Move Constructor Called" << endl;
            s.str=new char[1];
            s.str[0]=0;
            s.l=0;
        }
        //move assignment
        String & operator=(String && s){
            cout << "Move Operator= Called" << endl;
            if(str!=s.str){
                delete[]str;
                str=s.str;
                l=s.l;
                s.str = new char[1];
                s.str[0]=0;
                s.l=0;
            }
            return *this;
        }
        ~String(){l=0;delete []str;}
};
template <class T>
void MoveSwap(T & a, T & b){
    T tmp(move(a));
    a=move(b);
    b=move(tmp);
}
int main(){
//    String & r = String("Alice");//error."&" is for lvalue reference
    String s;
    s=String("Bob");//ok.String("Bob") is an rvalue
    String && r = String("Carol");
    cout << r.str << endl;
    String s1="Dave",s2="Eve";
    MoveSwap(s1,s2);
    cout << s2.str<<endl;
    return 0;
}
*/

/*
//c++11: for
//no header file required
#include<bits/stdc++.h>
using namespace std;
struct A{
    int n;
    A(int nn):n(nn){};
};
int main(){
    int arr[]={1,2,3,4,5};
    for(int & e:arr)
        e*=10;
    for(int e:arr)
        cout << e << ' ';
    cout << endl;
    vector<A> st(arr,arr+5);
    for(auto & it:st)//type of "it" : A &
        it.n *= 10;
    for(A it:st)
        cout << it.n << ' ';
    cout << endl;
    return 0;
}
*/

/*
//c++11: nullptr
#include<memory>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int * p1 = NULL;
    int * p2 = nullptr;
    shared_ptr<double> p3=nullptr;
    if(p1==p2) cout << "nullptr(int) == NULL"<< endl;
    if(p3==nullptr) cout << "nullptr==nullptr" << endl;
//    if(p3==p2);//error. No legal operator "=="
    if(p3==NULL) cout << "nullptr(shared_ptr) == NULL" << endl;
//    bool b=nullptr;
//    int i=nullptr;//error. There's no auto-type-converting of "nullptr"
    return 0;
}
*/

/*
//c++11: shared_ptr
#include<bits/stdc++.h>
using namespace std;
struct A{
    int n;
    A(int v=0):n(v){};
    ~A(){cout << n << "destructor" << endl;}
};
int main(){
    shared_ptr<A> sp1(new A(2));
    shared_ptr<A> sp2(sp1);
    cout <<sp1->n<< "," <<sp2->n<<endl;//2,2
    shared_ptr<A> sp3;
    A * p=sp1.get();//p points at A(2)
    cout << p->n << endl;  //2
    sp3=sp1;
    cout << (*sp3).n << endl;//2
    sp1.reset();//empty sp1--> !sp1==1
    if(!sp1) cout << "sp1 is NULL" << endl;
    A * q=new A(3);
    sp1.reset(q);//sp1 points at q
    cout << sp1->n << endl;//3
    shared_ptr<A> sp4(sp1);
    shared_ptr<A> sp5;
    sp5.reset(q);
    sp1.reset();//empty sp1
    sp4.reset();//empty sp4. output: "3 destructor"
    return 0;//output shoule be "2 destructor" , but "-23482459 destructor"
}
*/

/*
//c++11: decltype(declare type)
#include<bits/stdc++.h>
using namespace std;
int i;
double t;
struct A{double x;};
const A * a=new A();
int main(){
    decltype(a) x1;//A *
    decltype(i) x2;//int
    decltype(a->x) x3;//double
    decltype((a->x)) x4=t;//double &
    return 0;
}
*/

/*
//c++11: auto
#include<bits/stdc++.h>
using namespace std;
class A{};  
A operator+(int n,const A & a){
    return a;
}
template <class T1,class T2>
auto add(T1 x,T2 y)->decltype(x+y){
    return x+y;
}
auto d=add(100,1.4);//double
auto k=add(100,A());//A
struct B{};
int main(){
    auto a=12;//int
    auto pa=new B();//  *B
    auto ll=343LL;//long long
    typedef map<string,int,greater<string>> strmap;
    strmap mp;
    for(auto i=mp.begin();i!=mp.end();i++)
        cout << i->first << ' ' << i->second << endl;
    //i: strmap::iterator
}
*/

/*
//map demo
#include<iostream>
#include<map>
using namespace std;
template <class key,class value>
ostream & operator<<(ostream & op,const pair<key,value> & pr){
    op<<'('<<pr.first<<','<<pr.second<<')';
    return op;
}
typedef map<int,double,less<int>> mmid;
int main(){
    return 0;
}
*/
/*
//multimap demo: student info system
//find the highest score less than a given score
#include<iostream>
#include<string>
#include<map>
using namespace std;
class student{
    public:
        struct CInfo{//define a class inside a class
            int id;
            string name;
        };
        int score;
        CInfo info;       
};
typedef multimap<int, student::CInfo> StuMap;
int main(){
    StuMap mp;
    student stu;
    string cmd;
    while(cin>>cmd){
        if(cmd=="Add"){
            cin>>stu.info.name>>stu.info.id>>stu.score;
            mp.insert(StuMap::value_type(stu.score,stu.info));
        }
        else if(cmd=="Query"){
            int qscore;
            cin>>qscore;
            StuMap::iterator ps=mp.lower_bound(qscore);
            if(ps!=mp.begin()) {
                ps--;
                qscore=ps->first;
                StuMap::iterator maxp=ps;
                int maxID=ps->second.id;
                for(;ps!=mp.begin()&&ps->first==qscore;ps--){
                    if(ps->second.id>maxID){
                        maxp=ps;
                        maxID=ps->second.id;
                    }
                }
                if(ps->first==qscore){
                    if(ps->second.id>maxID){
                        maxp=ps;
                        maxID=ps->second.id;
                    }
                }
                cout << maxp->second.name << ' ' << maxp->second.id << ' ' << maxp->first << endl;
            }
            else cout << "NOBODY" << endl;
        }
    }
    return 0;
}
*/

/*
//associative container: multimap
//one key, more than one value--legal
#include<iostream>
#include<map>
using namespace std;
int main(){
    typedef multimap<int,double,less<int>> mmid;
    mmid pairs;
    cout<<pairs.count(15) << endl;//0
    pairs.insert(mmid::value_type(15,2.7));
    //about value_type: typedef pair<const Key,T> value_type
    pairs.insert(mmid::value_type(15,99.3));
    cout << "value number of Key 15:"<< pairs.count(15) <<endl;
    pairs.insert(mmid::value_type(30,111.11));
    pairs.insert(mmid::value_type(10,22.22));
    return 0;
}
*/

/*
//associative container: set
#include<iostream>
#include<set>
using namespace std;
template <class T>
void PrintIt(T fir, T las){
    for(;fir!=las;fir++)
        cout << *fir << ' ';
    cout << endl;
}
int main(){
    typedef set<int>::iterator IT;
    int a[]={3,4,6,1,2};
    set<int> st(a,a+5);
    PrintIt(st.begin(),st.end());//1 2 3 4 6
    pair<IT,bool> result;
    result=st.insert(5);
    PrintIt(st.begin(),st.end());//1 2 3 4 5 6
    if(result.second) cout << *result.first << endl;//5
    else cout << *result.first << "already exists" << endl;
    pair<IT,IT> bounds=st.equal_range(4);
    cout << *bounds.first <<' '<< *bounds.second << endl;//4 5
    //lower_bound & upper_bound
    return 0;
}
*/

/*
//Associative Container: multiset
#include<set>
#include<iostream>
using namespace std;
template <class T>
void PrintIt(T fir, T las){
    for(;fir!=las;fir++)
        cout << *fir << ' ';
    cout << endl;
}
class A{
    private:
        int n;
    public:
        A(int nn):n(nn){};
        friend bool operator<(const A & a, const A & b){
            return a.n<b.n;
        }
        friend ostream & operator<<(ostream & op,const A & a){
            op << a.n;
            return op;
        }
        friend class MyLess;
};
struct MyLess{
    bool operator()(const A& a, const A& b)const{
        return (a.n%10)<(b.n%10);
    }
};
typedef multiset<A> mst1;
typedef multiset<A,MyLess> mst2;//with a different Compare Function
int main(){
    const int Size=6;
    A a[Size]={4,22,19,8,33,40};
    mst1 m1;
    m1.insert(a,a+Size);
    m1.insert(22);
    cout << "mst1:";PrintIt(m1.begin(),m1.end());
    mst2 m2;
    m2.insert(a,a+Size);
    cout << "mst2:";PrintIt(m2.begin(),m2.end());
    cout << "Number of 22: " << m1.count(22)<<endl;
    mst1::iterator pp=m1.find(19);
    if(pp!=m1.end())//if found
        cout << "Found it!" << endl;
    cout << *m1.lower_bound(22) << "," << *m1.upper_bound(22) << endl;
    pp=m1.erase(m1.lower_bound(22),m1.upper_bound(22));
    //erase all elements equal to 22
    PrintIt(m1.begin(),m1.end());
    cout << *pp << endl;
    return 0;
}
*/

/*
//function object example: MyMax
#include<iostream>
using namespace std;
class MyLess{
    public:
        bool operator()(int a,int b){
            return (a%10)<(b%10);
        }
};
class MyMore{
    public:
        bool operator()(int a,int b){
            return (a%10)>(b%10);
        }
};
//Your Coding:
template <class T,class Pred>
T MyMax(T first,T last, Pred op){
    T pt=first;
    for(;first<last;first++)
        if(!op(*pt,*first)) pt=first;
    return pt;
}

int main(){
    int a[]={35,7,13,19,12};
    cout << *MyMax(a,a+5,MyLess()) << endl;
    cout << *MyMax(a,a+5,MyMore()) << endl;
    return 0;
}
*/

/*
//functional
#include<iostream>
#include<functional>
#include<list>
using namespace std;
class Less{
    public:
        bool operator()(const int & a,const int &b){
            return (a%10)<(b%10);
        }//sort by unit digits
};
template<class T>
void PrintIt(T first, T last){
    for(;first!=last;first++)
        cout<<*first<<' ';
}
int main(){
    const int Size=5;
    int a[Size]={5,21,14,2,3};
    list<int> lst(a,a+Size);
    lst.sort(Less());//sort by unit digits
    PrintIt(lst.begin(),lst.end());// 21 2 3 14 5
    cout << endl;
    lst.sort(greater<int>());
    //greateer<int>() is an object
    PrintIt(lst.begin(),lst.end());//21 14 5 3 2
    return 0;
}
*/

/*
//function objects 2
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<functional>
using namespace std;
template<class T>
void PrintIt(T first, T last){
    for(;first!=last;first++)
        cout<<*first<<' ';
    cout<<endl;
}
int sumSq(int total,int value){
    return total+value*value;
}
template<class T>
class SumPowers{
    private:
        int power;
    public:
        SumPowers(int p):power(p){};
        const T operator()(const T & total,const T & value){
            T v=value;
            for(int i=0;i<power-1;i++)
                v=v*value;
            return total+v;
        }
};
int main(){
    const int Size=10;
    int a1[]={1,2,3,4,5,6,7,8,9,10};
    vector<int> v(a1,a1+Size);
    PrintIt(v.begin(),v.end());
    int result=accumulate(v.begin(),v.end(),0,sumSq);
    cout<<"Square Sum:"<<result<<endl;
    result=accumulate(v.begin(),v.end(),0,SumPowers<int>(3));
    cout<<"Cube sum:"<<result<<endl;
    result=accumulate(v.begin(),v.end(),0,SumPowers<int>(4));
    cout<<"^4 sum:"<<result<<endl;
    return 0;
}
*/

/*
//function objects 1
#include<iostream>
using namespace std;
class demo{
    public:
        double operator()(int a, int b, int c){
            return (double)(a+b+c)/3;
        }
};
int main(){
    demo d;
    cout<<d(3,2,3)<<endl;//2.66667
    return 0;
}
*/

/*
//STL: list
#include<iostream>
#include<list>
using namespace std;
class A{
    private:
        int n;
    public:
        A(int nn):n(nn){};
        //operator overloaded for sorting
        friend bool operator<(const A & a, const A & b){
            return a.n<b.n;
        }
        friend bool operator==(const A & a, const A & b){
            return a.n==b.n;
        }
        friend ostream & operator<<(ostream & op, const A & a){
            op<<a.n;
            return op;
        }
};
template <class T>
void printit(const list<T> & lst){
    typename list<T>::const_iterator i;
    //"typename" declares that "list<T>::const_iterator" is a type
    i=lst.begin();
    for(i=lst.begin();i!=lst.end();i++)
        cout<<*i<<' ';
    cout<<endl;
}
int main(){
    list<A> lst1,lst2;
    lst1.push_back(1);lst1.push_back(3);lst1.push_back(2);
    lst1.push_back(4);lst1.push_back(1);
    lst2.push_back(10);lst2.push_back(30);
    printit(lst1);
    lst1.sort();
    printit(lst1);
    lst1.remove(2);
    printit(lst1);
    lst1.unique();
    printit(lst1);
    lst1.pop_front();
    printit(lst1);
    lst1.merge(lst2);//merge lst2 into lst1 & clear lst2
    printit(lst1);
    printit(lst2);
    lst1.reverse();
    printit(lst1);
    lst2.push_back(100);lst2.push_back(200);
    lst2.push_back(300);lst2.push_back(400);
    list<A>::iterator p1,p2,p3;
    p1=find(lst1.begin(),lst1.end(),3);
    p2=find(lst2.begin(),lst2.end(),200);
    p3=find(lst2.begin(),lst2.end(),400);
    lst1.splice(p1,lst2,p2,p3);
    //put lst2[p2:p3] in lst1[p1] and delete lst2[p2:p3] from lst2
    printit(lst1);
    printit(lst2);
    return 0;
}
*/

/*
//STL: vector->binary array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> v(3);
    for(int i=0;i<v.size();i++)
        for(int j=0;j<4;j++)
            v[i].push_back(j);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++)
            cout << v[i][j] << ' ';
        cout << endl;
    }

    return 0;
}
*/

/*
//template : static
#include<iostream>
using namespace std;
template <class T>
class A{
    private:
        static int count;
    public:
        A(){count++;}
        ~A(){count--;}
        A(A&){count++;};//copy constructor
        static void PrintCount(){cout<<count<<endl;}   
};
//intialize "count" in subclass
template<> int A<int>::count=0;
template<> int A<double>::count=0;
int main(){
    A<int> ia;
    A<double> da;
    ia.PrintCount();
    da.PrintCount();
    return 0;
}
*/

/*
//template: friend 2
#include<iostream>
using namespace std;
template <class T>
class B{
    T v;
    public:
        B(T n):v(n){};
        template <class T2>
        friend class A;
};
template <class T>
class A{
    T va;
    public:
        A(T a):va(a){};
        void Func(){
            B<int> ar(10);
            cout <<va <<' '<< ar.v << endl;
        }
};
int main(){
    A<double> a(3.1);
    a.Func(); 
    return 0;
}
*/

/*
//template: friend 1
#include<iostream>
using namespace std;
template <class T1,class T2>
class Pair{
    T1 key;T2 value;
    public:
        Pair(T1 k, T2 v): key(k),value(v){};
        bool operator<(const Pair<T1,T2> & p) const;
        template <class T3, class T4>
        friend ostream & operator<<(ostream & op, const Pair<T3, T4> & p);
};
template<class T1, class T2>
bool Pair<T1,T2>::operator<(const Pair<T1,T2> & p) const {
    return value<p.value;
}
template <class T1,class T2>
ostream & operator<<(ostream & op,const Pair<T1,T2> & p){
    op<<'('<<p.key<<','<<p.value<<')';
    return op;
}
int main(){
    Pair<string,int> stu("Tom",20);
    Pair<int,double> cir(1,3.14);
    cout << stu <<cir<< endl;
    return 0;
}
*/

/*
//template inheritance
#include<iostream>
using  namespace std;
//1. class template derived from class template
template<class T1,class T2>
class A{
    T1 v1;T2 v2;
};
template <class T1, class T2>
class B: public A<T2,T1>{
    T1 v3;T2 v4;
};
template <class T>
class C: public B<T,T>{
    T v5;
};
//2. class template derived from template class
template <class T>
class B2: public A<int, double>{
    T v;
};
//3. class template derived from class
class D{
    int d;
};
template <class T1>
class E:public D{
    T1 t;
};
//4. class derived from template class
class B3:public A<int>{
    double v;
};

int main(){
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
template<class T, int size>
class cArray{
    public:
        T ar[size];
        void printit(){
            for(int i=0;i<size;i++)
                cout << array[i] << ' ';
            cout << endl;
        }
};
int main(){}
*/

/*
//template: class template 1
#include<iostream>
using namespace std;
template <class T1, class T2>
class Pair{
    public:
        T1 key;
        T2 value;
        Pair(T1 k, T2 v):key(k),value(v){};
        bool operator<(const pair<T1, T2> & p) const{
            return key<p.key;
        }
};
int main(){
    Pair<string,int> stu("Tom",12);
    cout << stu.key << ' ' << stu.value << endl;
    return 0;
}
*/

/*
//template: function pointer
#include<iostream>
using namespace std;
template<class T,class pred>
void Map(T i, T las, T j, pred op){
    for(;i!=las; i++,j++)
        *j = op(*i);
}
int cube(int x){ return x*x*x;}
double sq(double x){ return x*x;}
int main(){
    int a[]={1,2,3,4,5},b[5];
    double p[]={1.1,2.2,3.3,4.4,5.5},q[5];
    Map(a,a+5,b,cube);
    Map(p,p+5,q,sq);
    for(int i=0;i<5;i++)
        cout << b[i] << ' ' << q[i] << endl;
    return 0;
}
*/
/*
//template: overloading
#include<iostream>
using namespace std;
template <class T>
void demo(T a, T b){
    cout << a << b << endl;
}
template <class T, class T2>
void demo(T a, T2 b){
    cout << a << b << endl;
}

int main(){
    return 0;
}
*/
/*
//template: instantiation without function
#include<iostream>
using namespace std;
template <class T>
T Half(T n){
    return n+1;
}
int main(){
    cout << "int" << Half(4) << endl;
    cout << "double" << Half<double>(4)/2 << endl;
    return 0;
}
*/


/*
//demo:copy function
#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char * argv[]){
    if(argc==1) {
        cerr<<"Error"<<endl;
        return 0;
    }
    ifstream fin(argv[1],ios::in|ios::binary);
    ofstream fout(argv[2],ios::out|ios::binary);
    if(!fin||!fout){
        cerr<<"File Open Error"<<endl;
        return 0;
    }
    char c;
    while(fin.get(c))
        fout.put(c);
    fin.close();
    fout.close();

    return 0;
}
*/

/*
//bianry file read & write 3
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
struct Student{
    char Name[20];
    int No;
};
int main(){
    Student s;
    ifstream fin("stuSrc.dat",ios::in|ios::binary);
    fstream iofile("stu.dat",ios::in|ios::out|ios::binary);
    if(!iofile){
        cerr << "error" << endl;
        return 0;
    }
    iofile.seekp(0,ios::beg);
    while(fin.read((char*)&s, sizeof(s))){
        int readedBytes=iofile.gcount();
        cout << s.Name <<' '<< s.No << endl;
        iofile.write((const char*)(&s.Name),sizeof(s.Name));
    }
    iofile.close();

    return 0;
}
*/

/*
//binary file read & write 2
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout("demo.dat",ios::out|ios::binary);
    int x=120;
    fout.write((const char*)(&x),sizeof(int));//or "(char *)x"
    fout.close();
    ifstream fin("demo.dat",ios::in|ios::binary);
    int y;
    fin.read((char*)&y,sizeof(int));
    cout << y << endl;
    return 0;
}
*/

/*
//binary file read & write 1
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string name;
    int num;
    ofstream ofile("stu.dat",ios::out|ios::binary);
    while(cin>>name>>num){
        ofile<<name<<' '<<num<<endl;
    }
    ofile.close();//don't forget to close the file

    return 0;
}
*/

/*
//txt file input & output
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout("Test.txt",ios::ate);//keep the initial content
    long location = fout.tellp();
    fout << "111";
    location = 5;
    //the parameter should be "long"
    //you may use "20L", which transfer the num into long type
    fout.seekp(location,ios::beg);//
    fout << "222";
    fout.seekp(5L,ios::cur);
    fout << "333";
    fout.seekp(-location,ios::end);
    fout << "444";
    fout.close();//remember to close the file!
    return 0;
}
*/

/*
//ofstream 1
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream outfl("clients.dat",ios::out|ios::binary);//create a file
    //ios::out  delete the initial file and create new content
    //ios::app  keep the initial content and add new contend at the end of the file
    ofstream fout;
    fout.open("test.out",ios::out|ios::binary);
    if(!fout) cerr << "File open error" << endl;//is the same as cout
    return 0;
}
*/

/*
//flow operators
#include<iostream>
#include<iomanip>
using namespace std;
ostream & tab(ostream & op){
    op << '\t';
    return op;
//or: return op << '\t;
}
int main(){
    float f=2.34567;
    cout << setprecision(2) << f << endl;
    cout << setprecision(4) << f << endl;
    cout <<setiosflags(ios::fixed) << f << endl;
    cout << setprecision(3) << f << endl;
    cout << resetiosflags(ios::fixed) << f << endl;
    cout << "scientific:" << scientific << setprecision(5) << f << endl;

    int n=141;
    cout << "16 hexadecimal:" << hex << n << '\n';
    cout << "8 octal:" << oct << n << '\n';
    cout << "10 decimal:" << dec << n << '\n';
    
    cout << showpos << fixed << setw(12) << setfill('*') << 12.1 << endl;
    cout << noshowpos << setw(12) << left << 12.1 << endl;
    cout << noshowpos << setw(15) << right << 12.1 << endl;
    cout << setw(12) << internal << -12.1 << endl;
    cout << -12.1 << endl;

    cout << "tab:" << '1' << tab << '2' << endl;
    return 0;
}
*/

/*
//freopen
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    freopen("Test.txt","w",stdout);
    if(y==0) cerr<<"error!"<<endl;
    else cout << x/y << endl;
    return 0;
}
*/