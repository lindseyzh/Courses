//64/0508:⭐a+b+c(overloading of "->" returns A*)
/*
#include <iostream>
using namespace std;
// 在此处补充你的代码
class A{
    public:
        int v;
        A(int vv):v(vv){}
        int get_value(){
            return v;
        }
        A & operator+(A * pa){
            v+=pa->v;
            return *this;
        }
        A* operator->(){
            return this;
        }
};
class B:public A{
    public:
        B(int vv):A(vv){}
};
class C:public A{
    public:
        C(int vv):A(vv){}
};
//
int main() {
    int t;
    cin >> t;
    while (t --){
        int aa, bb, cc;
        cin >> aa >> bb >> cc;
        A a(aa);
        B b(bb);
        C c(cc);
        A* x = &a;
        A* y = &b;
        A* z = &c;
        cout << (x->get_value() + y->get_value() + z->get_value()) << " ";
        cout << ((*x) + y + z)->get_value() << endl;
    }
    return 0;
}
*/

//62/0506:Array Sum & String Copy
/*
#include <iostream>
#include <set>
#include <string>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
// 在此处补充你的代码
template<class T>
class MyFunc{
    public:
    int rpt;
    bool b=0;
    T & sum;
    T ssum;
    MyFunc(int r,T & s):rpt(r),sum(s){
    }
    void operator()(T s){
        if(!b) ssum=s;
        else ssum += s;
        b=1;
        sum = ssum;
        for(int i=1;i<rpt;i++)
            sum += ssum;
    }
};
//
int main(){
    vector<int> v1;
    vector<string> v2;
    int N, val, num_repeat,result_int=0;
    string str,result_str="";
    cin>>N;
    cin>>num_repeat;
    for(int i=0;i<N;++i){
        cin>>val;
        v1.push_back(val);
    }
    for_each(v1.begin(),v1.end(),MyFunc<int>(num_repeat,result_int));
    for(int i=0;i<N;++i){
        cin>>str;
        v2.push_back(str);
    }
    for_each(v2.begin(),v2.end(),MyFunc<string>(num_repeat,result_str));
    cout<<result_int<<endl;
    cout<<"--------------"<<endl;
    cout<<result_str<<endl;
}
*/

//61/0505:double Lambda
/*
#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;
vector<int> numbers;
int main(){ 
    auto f =
// 在此处补充你的代码
    [](int d){
        return [d](int a){
            return a%d==0;
        };
    };
vector<int>numbers;
//
;
    int n, x, d;
    while(cin >> n) {
        numbers.clear();
        for (int i = 1;i <= n;i ++){
            cin >> x;
            numbers.push_back(x);
        }
        cin >> d;
        cout << count_if(numbers.begin(), numbers.end(), f(d)) << endl;
    }
    return 0;
}
*/

//60/0504:Fraction Class
/*
#include <iostream>
using namespace std;
int gcd(int a, int b) { // 计算两个数的最大公约数
    return (!b) ? a : gcd(b, a % b);
}
class Fraction {
    int p, q;
public:
// 在此处补充你的代码
    int a,b;
    Fraction(int pp=0,int qq=1):p(pp),q(qq){
        a=p;
        b=q;
    }
    void Ini(int pp,int qq){
        a=p=pp;
        b=q=qq;
    }
    friend istream & operator>>(istream & ip, Fraction & f){
        int pp,qq;
        ip>>pp>>qq;
        int m=gcd(pp,qq);
        pp/=m;
        qq/=m;
        f.Ini(pp,qq);
        return ip;
    }
    friend ostream & operator<<(ostream & op,const Fraction & f){
        //"const" is necessary here, but i don't know why
        if(f.a%f.b==0) {
            op << f.a/f.b ;
        }
        else op<<f.a<<'/'<<f.b;
        return op;
    }
    Fraction operator*(Fraction f){
        int pp=a*f.a,qq=b*f.b;
        int m=gcd(pp,qq);
        pp/=m;
        qq/=m;
        return Fraction(pp,qq);
    }
    Fraction operator*(int c){
        int pp=a*c,qq=b;
        int m=gcd(pp,qq);
        pp/=m;
        qq/=m;
        return Fraction(pp,qq);
   
    }
//
};


int main(){
    int testcases;
    cin >> testcases;
    while (testcases --) {
        Fraction a, b, two(2);
        cin >> a >> b;
        cout << a << " * " << b << " = " << a * b << endl;
        cout << "2 * " << a << " = " << two * a << endl;
        cout << b << " * 3 = " << b * 3 << endl;
    }
    return 0;
}
*/

//59/0503:changeful number(virtual function)
/*
#include <iostream>
using namespace std;

class myobject {
public:
// 在此处补充你的代码
    static int counter;
    virtual void work(){
        if(counter>4) counter-=4;
        print_avaliable();
    }
    void print_avaliable(){
        cout << counter << ' ';
    }
//
};

class producer : public myobject {
public:
	virtual void work() {
		counter = counter + 5;
		print_avaliable();
	}
};

int myobject::counter = 0;

int main(){
	producer *pro = new producer();
	myobject *con = new myobject();
	pro->work(); pro->work(); cout << endl;
	con->work(); con->work(); con->work(); cout << endl;
	pro->work(); cout << endl;
	con->work(); con->work(); cout << endl;
}
*/

//58/0502:Fun & Do(virtual function)
/*
#include <iostream>
using namespace std;

class A{
public:
    int n;
    A(int m):n(m) {}
    virtual void Do(){
        cout <<"A::Do()" << n << endl;
        Fun();
    }
// 在此处补充你的代码
    virtual void Fun(){
        cout << "A::Fun()" << n+1 << endl;
    }
//
void CallFun(){
        Fun();
    }
};

class B: public A{
public:
    B(int n):A(n){ }
    void Do(){
        cout <<"B::Do()" << ++n << endl;
        CallFun();
    }
    void Fun(){
        cout <<"B::Fun()" << ++n << endl;
    }
};

int main(){
    B bb(1);
    A aa = bb;
    aa.Do();
    A *bp = &bb;
    bp->Do();
    return 0;
}
*/

//57/0501:i byte(note: 1 byte = 8 bit, int = 32bit)
/*
#include <iostream>
using namespace std;
int getByte(int x, int i){
    return
// 在此处补充你的代码
    (x>>(8*i)) & 255;
;
}
int main(){
    int n;
    cin >> n;
    while(n--){
        int x, i;
        cin >> x >> i;
        cout << getByte(x, i) << endl;
    }
    return 0;
}
*/

//55/0410:⭐MySet(Inheritance from set)
/*
#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <vector> 
#include <set>
#include <cstdio>
using namespace std;
// 在此处补充你的代码
template<class T>
class MySet:public set<T,greater<T>>{
    public:
        typedef set<T,greater<T>> tset;
        template <class T1>
        void erase(T1* fir,T1* las){
            for(;fir!=las;fir++)
                if(fir!=NULL)
                tset::erase(tset::lower_bound(*fir));
        }
        void erase(typename tset::iterator p){
            tset::erase(p);
        }
};
template <class T>
bool operator<(T a,T b){
    return b>a;
}
//
struct A {
	int n;
	A(int i):n(i) { }
	operator int() {
		return n;
	}
	bool operator >(const A & a) const {
		return n > a.n;
	}
};
template <class IT>
void print(IT s,IT e)
{	
	for(; s != e; ++s)
		cout << *s << ",";
	cout << endl;
}
int main()
{
	MySet<int> mst;
	for (int i = 0;i < 10; ++i)
		mst.insert(i);
	print(mst.begin(),mst.end());
	int a[] = {1,2,3,4};
	mst.erase(a,a+3);
	print(mst.begin(),mst.end());
	
	A b[] = {{7},{8}};
	mst.erase(b,b+2);
	print(mst.begin(),mst.end());	
	mst.erase(mst.find(6));
	print(mst.begin(),mst.end());
	for(int i = 0;i < 1000000; ++i)
		mst.insert(i);
	for(int i = 0; i < 1000000 - 10; ++i) 
		mst.erase(mst.find(i));
	int n;
	cin >> n;
	MySet<A> msta;
	
	for(int i = 0;i < n; ++i) {
		string cmd;
		int n;
		cin >> cmd >> n;
		if( cmd == "ADD") 
			msta.insert(A(n));
		else {
			if (msta.find(A(n))!= msta.end())
				cout << "YES"  <<endl; 
			else
				cout << "NO" <<endl;
		}
	}
	return 0;
}
*/

//54/0409:⭐Food Ordering System(make_pair)
/*
#include<bits/stdc++.h>
using namespace std;
class food{
    public:
    int price;
    int amount;
    int sold=0;
    food(int p,int a):price(p),amount(a){};
    food(){}//for error solving
    //https://stackoverflow.com/questions/60776989/parsing-compilation-error-no-matching-function-for-call-to-stdpair-pair
    void Add(){
        if(sold<amount) sold++;
    }
    int Reve(){
        return sold*price;
    }
};
typedef map<string,food> FoodMap;
FoodMap fmap;
int main(){
    int n,m;
    string name;
    int p,am;
    cin>>n>>m;
    while(m){
        m--;
        cin>>name>>p>>am;
        fmap[name]=food(p,am);
    }
    string a,b,c;
    while(n){
        n--;
        cin>>a>>b>>c;
        fmap[a].Add();
        fmap[b].Add();
        fmap[c].Add();
    }
    int total=0;
    for(auto i=fmap.begin();i!=fmap.end();i++){
        total += i->second.Reve();
    }
    cout << total << endl;
    return 0;
}
*/


//53/0408:⭐ Int Merge(bit operation)
/*
#include<iostream>
using namespace std;
unsigned int calc(unsigned int n,unsigned m,int x,int y) {
// 在此处补充你的代码
//Error: if y==0, "1<<32" reports error(at most "1<<31")
//    unsigned int block = (1<<(32-y))-(1<<x);
//    unsigned int ans = ((~block)&n)|(block&m);

    unsigned int a = x==0? 0u:((~0u)>>(32-x));
    unsigned int b = y==0? 0u:((~0u)<<(32-y));
    unsigned int block = a|b;
    return (n&block) | (m&(~block));

//
}
int main() {
  int x, y, t;
  unsigned int n, m;
  cin >> t;
  while (t--) { 
    cin >> n >> m >> x >> y;
    cout << calc(n, m, x, y) << endl;
  }
  return 0;
}
*/


//52/0407:⭐Counting(set & inheritance)
/*
#include <iostream>
#include <string>
#include <set>
using namespace std;

class Counter{
    int cnt;
public:
    Counter():cnt(0){}
    virtual void push(void*) = 0;
    virtual string name() = 0;
    void inc(){
        ++cnt;
    }
    int number(){
        return cnt;
    }
};

template<class T>
class TCounter: public Counter{
// 在此处补充你的代码
    public:
        string Name;
        set<T> tset;
        TCounter(string s):Name(s){}
        string name(){
            return Name;
        }
        void push(void * p){
            T * pt = (T*)p;
            if(tset.lower_bound(*pt)!=tset.end() && *tset.lower_bound(*pt)==*pt){
                return ;
            }
            inc();
            tset.insert(*pt);
        }
    //
};

Counter* build_counter(string name){
    if (name == "int") return new TCounter<int>("int");
    else return new TCounter<string>("string");
}



int main(){
    int n, m;
    cin >> n >> m;
    Counter *a = build_counter("int"), *b = build_counter("string");
    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        a->push(&x);
    }
    for (int i = 0; i < m; ++i){
        string x;
        cin >> x;
        b->push(&x);
    }
    cout << a->name() << ": " << a->number() << endl;
    cout << b->name() << ": " << b->number();
    return 0;
}
*/

//51/0406:Midterm(A new solution: operator int&())
/*
#include<iostream>
using namespace std;

class Midterm {
private:
  int val; 
public:
// 在此处补充你的代码
    int v;
    Midterm(int vv=0):v(vv){}
    operator int&(){
        return v;
    }
    int & operator++(int k){
        v++;
        return v;
    }
//
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
*/

//50/0405:Sum(basic static member variate)
/*
#include<iostream>
#include<vector>
using namespace std;
class A{
// 在此处补充你的代码
    public:
        static int presum;
        int sum;
        A(int a){
            presum+=a;
            sum=presum;
        }
        void output(){
            cout << sum << endl;
        }
};
int A::presum=0;
int main(){
  int n;cin>>n;
  vector<A*> p;
  for(int i=0;i<n;i++){
    int x;cin>>x;
    p.push_back(new A(x));
  }
  for(int i=0;i<n;i++){
    p[i]->output();
  }
  return 0;
}
*/

//49/0404:⭐cmp Template(overloading function with different parameter)
/*
#include <vector>
#include <set>
#include <list>
#include <iostream>
using namespace std;

template <class T>
// 在此处补充你的代码
void cmp(T & a, T b){
    cout << 'a' << endl;
}
template <class T>
void cmp(T a, T & b){
    cout << 'b' << endl;
}
template<class T>
void cmp(T*a,T&b){
    cout << 'c' << endl;
}
//
int main(){
  int A[100];
  A[0]=1; A[1]=2;
  cmp(A[0],2);
  printf("finish 1\n");
  cmp(1, A[1]);
  printf("finish 2\n");
  cmp(A,A[1]);
  printf("finish 3\n");
}
*/

//48/0403:⭐Mammal & Dog
/*
#include <iostream>
using namespace std;
class Mammal {
public:
  Mammal() { cout << "Mammal constructor...\n"; }
  virtual ~Mammal() { cout << "Mammal destructor...\n"; }
  Mammal (const Mammal & rhs);
  virtual void Speak() const { cout << "Mammal speak!\n"; }
  virtual Mammal* Clone() { return new Mammal(*this); }
};
  
class Dog : public Mammal {
// 在此处补充你的代码
    public:
        Dog();
        ~Dog();
        virtual void Speak()const;
        Dog(Dog& rhs):Mammal(rhs){
            cout << "Dog copy constructor..." << endl;
        }
        Dog* Clone(){
            return new Dog(*this);
        }
//
};

Mammal::Mammal (const Mammal & rhs) {
  cout << "Mammal Copy Constructor...\n";
}
  
Dog::Dog(){ cout << "Dog constructor...\n"; }
Dog::~Dog(){ cout << "Dog destructor...\n"; }
void Dog::Speak()const { cout << "Woof!\n"; }

int main() {
  Mammal* x=new Dog, *y=new Mammal;
  Mammal* x1=x->Clone(), *y1=y->Clone();
  x1->Speak(); y1->Speak();
  return 0;
}
*/

//47/0402:Terrible Bracket(basic overloading)
/*
#include <cstdio>
#include <iostream>
using namespace std;

class f {
// 在此处补充你的代码
    public:
        int ans;
        f(int a,int b):ans(a*b){}
        f(int a):ans(a){}
        int operator()(int b){
            return b-ans;
        }
        operator int(){
            return ans;
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
*/

//46:Hero & Priest
/*
#include <iostream>
using namespace std;
class Hero {
public:
// 在此处补充你的代码
    void attack(){
        cout << "Hero::attack()" << endl;
    }
    virtual void defense(){
        cout << "Hero::defense()" <<endl;
    }
};
class Priest: public Hero {
public:
    virtual void attack() { cout << "Priest::attack()" << endl; }
    virtual void defense() { cout << "Priest::defense()" << endl; } 
}; 

int main() {
    Priest anduin;
    Hero h;
    h.defense();
    Hero *player = &anduin;
    player->attack();
    player->defense();
    anduin.attack();
    anduin.defense();
    return 0;
}
*/

//45/0311:Doctors
/*
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> patient;
bool cmp(patient p1,patient p2){
        if(p1.first==p2.first) return p1.second < p2.second;
        return p1.first>p2.first;
    }
class Doctor{
    public:
        static int pnum;
        vector<patient> pa;
        void AddPatient(int pr){
            pnum++;
            pa.push_back(make_pair(pr,pnum));
        }
        void OutPatient(){
            if(pa.empty()) cout << "EMPTY" << endl;
            else {
                sort(pa.begin(),pa.end(),cmp);
                cout << pa.begin()->second << endl;
                pa.erase(pa.begin());
            }
        }
};
int Doctor::pnum=0;
int main(){
    int t,n,pr,doct;
    string cmd;
    cin>>t;
    while(t){
    t--;
    cin>>n;
        Doctor d[3];
    Doctor::pnum=0;

    while(n){
        n--;
        cin>>cmd;
        if(cmd=="IN"){
            cin>>doct>> pr;
            d[doct-1].AddPatient(pr);
        }
        else if(cmd=="OUT"){
            cin>>doct;
            d[doct-1].OutPatient();
        }
    }
}
}
*/

//44/0310:Three Sum
/*
#include<cstdio>
#include<cstring>
#include<set>
using namespace std;

multiset<int> s;
int a[5000 + 5];

int main() {
	int n, T, k;
	scanf("%d", &T);
	while (T--) {
		s.clear();
		scanf("%d", &n);
		for (int i = 0; i < n; i ++) {
			scanf("%d", a + i);
			s.insert(a[i]);
		}
		bool flag = false;
		scanf("%d", &k);
		for (int i = 0; i < n; i ++) {
			for (int j = i + 1; j < n; j ++) {
				int target = k - a[i] - a[j], min_count = 1;
// 在此处补充你的代码
            multiset<int>::iterator lb,ub;
            lb=s.lower_bound(target);
            ub=s.upper_bound(target);
            if(lb==s.end()) continue;
            if(a[i]==target) min_count++;
            if(a[j]==target) min_count++;
            int ct=0;
            while(lb!=ub){
                ct++;
                lb++;
            }
            if(min_count>ct) continue;
            flag=1;
            break;
//
}
			if (flag) break;
		}
		puts(flag? "Yes": "No");
	}
}
*/

//43/0309:Fraction Class
/*
#include <iostream>
using namespace std;
int gcd(int x, int y){
	return x%y==0?y:gcd(y,x%y);
}
class Fraction
{
    int num, den;
public:
// 在此处补充你的代码
    int a,b;
    Fraction(int aa,int bb=1):a(aa),b(bb){}
    void operator*=(Fraction g){
        a*=g.a;
        b*=g.b;
        int m=max(a,b)/2;
        for(int i=2;i<m;i++)
            while(a%i==0 & b%i==0){
                a/=i;
                b/=i;
            }
    }
    void operator/=(Fraction g){
        a*=g.b;
        b*=g.a;
        int m=max(a,b)/2;
        for(int i=2;i<m;i++)
            while(a%i==0 & b%i==0){
                a/=i;
                b/=i;
            }

    }
    friend ostream & operator<<(ostream & op, Fraction & f){
        op<<f.a<<"/" << f.b;
        return op;
    }
    Fraction operator*(Fraction g){
        int aa=a*g.a,bb=b*g.b;
        int m=max(aa,bb)/2;
        for(int i=2;i<m;i++)
            while(aa%i==0 & bb%i==0){
                aa/=i;
                bb/=i;
            }
        return Fraction(aa,bb);
    }
    Fraction operator/(Fraction g){
        int aa=a*g.b,bb=b*g.a;
        int m=max(aa,bb)/2;
        for(int i=2;i<m;i++)
            while(aa%i==0 & bb%i==0){
                aa/=i;
                bb/=i;
            }
        return Fraction(aa,bb);    }
    operator float(){
        return 1.0*a/b;
    }
};
 
int main() {
	int a,b,c;
	cin >> a >> b >> c;
    Fraction f(a, b), g(c);
	f *= g;
	cout << f << endl;
	f /= g;
	cout << f << endl;
	f = f * f;
	cout << f << endl;
	f = f / g;
	cout << f << endl;
	cout << (float) f << endl;
    return 0;
}
*/

//42/0308: constructor & destructor
/*
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
// 在此处补充你的代码
class A{
    public:
        A(){
            cout << "New A" << endl;
        }
        virtual ~A(){
            cout << "Delete A" << endl;
        }
};
class B:public A{
    public:
        B(){
            cout << "New B" << endl;
        }
        ~B(){
            cout << "Delete B" << endl;
        }
};
int main(){
	int n;
	cin >> n;
	for (int i = 1; i<=n; i++) {
		int x;
		cin >> x;
		if (x == 0) {
			A *a = new A();
			delete a;
		}else {
			A *a = new B();
			delete a;
		}
	}
	return 0;	
}
*/

//41/0307: template(deep copy.remember to "new")
/*
#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
// 在此处补充你的代码
template<class T,int n>
class A{
    public:
        T * v;
        A(T * vv){
            v = new T[n+1];//don't forget to new
            for(int i=0;i<n;i++)
                v[i]=vv[i];
        }
        template <class T1>
        T1 sum(int fir,int las,T1(*pred)(T)){
            T1 ans = pred(v[fir]);
            fir++;
            for(;fir<=las;fir++)
                ans += pred(v[fir]);
            return ans;
        }
};
//
string int2string(int x) { return to_string(x); }
int int2squareint(int x) { return x * x; }

int string2int(string str) {
	int res = 0;
	for (string::iterator iter = str.begin(); iter != str.end(); ++iter)
		res += *iter;
	return res;
}
string string2longerstring(string str) { return str + str; }

int main() {

	int t;
	cin >> t;
	while (t--) {
		int b1[10];
		for (int i = 0; i < 10; ++i)

			cin >> b1[i];
		A<int, 10> a1 = b1;
		cout << a1.sum(2, 6, int2squareint) << endl;
		cout << a1.sum(2, 6, int2string) << endl;

		string b2[4];
		for (int i = 0; i < 4; ++i)
			cin >> b2[i];

		A<string, 4> a2 = b2;
		cout << a2.sum(0, 3, string2int) << endl;
		cout << a2.sum(0, 3, string2longerstring) << endl;
	}
	return 0;
}
*/

//40/0306:Reverse Output(deep copy)
/*
#include <cstring>
#include <cstdlib>
#include <string>
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
class C1{
// 在此处补充你的代码
    public:
        vector<int> v;
        int size;
        C1(int s,vector<int> vv):size(s){
            for(int i=0;i<s;i++)
                v.push_back(vv[s-1-i]);
        }
        vector<int>::reverse_iterator operator*(){
            return v.rbegin();
        }
        int & operator[](int i){
            return *(v.begin()+i);
        }
//
};

int main()
{
    vector<int> v;
    int p;
    int size;
    int k;
    cin >> k;
    while(k--){
        cin >> size;
        v.clear();
        for(int i = 0; i < size; ++i){
            cin >> p;
            v.push_back(p);
        }
        C1 o1 = C1(size,v);
        ostream_iterator<int> it(cout,"---");
        copy(*o1, (*o1)+size, it);
        cout<<endl;
        for(int i = 0; i < size; ++i){
            o1[i]*=2;
            cout<<o1[i]<<"***";
        }
        cout<<endl;
    }
    
}
*/


//39/0305:Converting
/*
#include<iostream>
using namespace std;
template<class T>
// 在此处补充你的代码
class f{
    public:
        T * p;
        int n;
        f(T * a, int nn):n(nn){
            p = new T[n+1];
            for(int i=0;i<n;i++)
                p[i] = a[n-1-i];
            for(int i=0;i<n;i++)
            a[i] = p[i];
        }
};
//
int main()
{
	int a[5] = { 10, 21, 34, 4, 50 };
	double d[6] = { 4.1, 11.1, 10.1, 9.1, 8.1, 7.1 };
	f(a, 5);
	f(d, 6);
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	for (int j = 0; j < 6; j++)
	{
		cout << d[j] << " ";
	}
	cout << endl;
	return 0;
}
*/

//38/0304:⭐Array Output
/*
#include <iostream>
#include <string>
#include <numeric>
#include <algorithm>
using namespace std;
// 在此处补充你的代码
template<class T>
class Print{
    public:
        int n;
        Print(int nn):n(nn){}
        //return value should be "Print<T>"
        //Ctrl+click for source code of "accumulate"
        Print<T> operator+(T & v){
            n--;
            cout << v;
            if(n==0) cout << endl;
            return *this;
        }
};
int main(){
	string s[20];
	int num[20];
	int m,n;
	
	while(cin >> m >> n){
		for(int i=0; i<m; i++){
			cin >> s[i];
		}
		accumulate(s, s+m, Print<string>(m));
		for(int i=0; i<n; i++){
			cin >> num[i];
		}
		accumulate(num, num+n, Print<int>(n));
	}
}
*/

//37/0303: ⭐Matrix Sorting
/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Mat{
	int h,w;
public:
	Mat(int height,int width):h(height),w(width)
// 在此处补充你的代码
    {};
    int * pa;
    int sum;
    int ord;
    int matnum;
    static int num;
    friend bool operator<(Mat & a,Mat & b){
        if(a.matnum == b.matnum) return a.ord > b.ord;
        return a.matnum < b.matnum;
    }
    friend istream & operator>>(istream & ip, Mat & m){
        m.pa = new int[m.h*m.w+1];
        m.sum=0;
        m.ord = m.num;
        m.matnum = m.h*m.w;
        m.num++;
        for(int i=0;i<m.h*m.w;i++){
            ip>>m.pa[i];
            m.sum+=m.pa[i];
        }
        return ip;
    }
    friend ostream & operator<<(ostream & op, Mat & m){
        int * p =m.pa;
        for(int i=0;i<m.h;i++){
            for(int j=0;j<m.w-1;j++){
                op << *p << ' ';
                p++;
            }
            op << *p << endl;
            p++;
        }
        return op;
    }
};
bool comparator_1(Mat& a,Mat &b){
    if(a.sum==b.sum) return a.ord>b.ord;
            return a.sum < b.sum;
        }  
class comparator_2{
    public:
        bool operator()(Mat& a,Mat &b){
            return a.ord < b.ord;
        }  
};
//don't forget to initialize static variable
int Mat::num=0;
//
int main()
{
	vector<Mat> m;
	m.push_back(Mat(2,2));
	m.push_back(Mat(3,4));
	m.push_back(Mat(2,2));
	cin >> m[0] >> m[1] >> m[2];
	sort(m.begin(),m.end());
	cout<< m[0] << endl << m[1] << endl << m[2] <<endl;
	cout<<"*************"<<endl;
	sort(m.begin(),m.end(),comparator_1);
	cout<< m[0] << endl << m[1] << endl << m[2] <<endl;
	cout<<"*************"<<endl;
	sort(m.begin(),m.end(),comparator_2());
	cout<< m[0] << endl << m[1] << endl << m[2] <<endl;
	return 0;
}
*/

//36/0302: Polymorphism
/*
#include <iostream>
using namespace std;

class Base {
public:
   virtual Base& fun() { cout << "base fun" << endl; return *this; }
   virtual Base& foo() { cout << "base foo" << endl; return *this; }
};

class Derived: public Base {
public:
   Base& fun() { cout << "derived fun" << endl; return *this; }
   Base& foo() { cout << "derived foo" << endl; return *this; }
};

Base& foo();
Base& fun();
// 在此处补充你的代码
Base & foo(){
    Base * b = new Derived;
    return b->foo();
}
Base & fun(){
    Base * b = new Base;
    return b->fun();
}
//
int main() {
   foo().fun().foo();
   fun().foo().fun();
   return 0;
}
*/

//35/0301: Counter(constructor & destructor)
/*
#include <iostream>
using namespace std;

class Counter {


private:
	static int nGlobalNumber;
	int nLocalNumber;
public:
// 在此处补充你的代码
    Counter(int n=1):nLocalNumber(n){
        nGlobalNumber++;
    }
    ~Counter(){
        nGlobalNumber--;
    }
    Counter(Counter & c){
        nLocalNumber = c.nLocalNumber;
        nGlobalNumber++;
    }

//    
void add(int n) { nLocalNumber += n; }

	void PrintLocalNumber(){
		cout << nLocalNumber << endl;
	}
	static void PrintGlobalNumber() {
		cout << nGlobalNumber << endl;
	}

};
int Counter::nGlobalNumber = 0;

int main()
{
	Counter::PrintGlobalNumber();
	Counter b1, b2;
	Counter::PrintGlobalNumber();
	b1.PrintLocalNumber();
	b2.add(10);
	b2.PrintLocalNumber();
	Counter* b3 = new Counter(7);
	b3->PrintLocalNumber();
	Counter b4 = b2;
	b4.PrintLocalNumber();
	Counter::PrintGlobalNumber();
	if (b3 != NULL)
	{
		delete b3;
		b3 = NULL;
	}
	Counter::PrintGlobalNumber();


	return 0;
}
*/

//34/0213: TV series
/*
#include<iostream>
#include<cstring>
#include<list>
#include<algorithm>
using namespace std;

class TV_Drama{
	public:
	char name[100];
	int actor;
	int story;
	int acting_skill;
// 在此处补充你的代码
    TV_Drama(char * n,int a,int s,int as):actor(a),story(s),acting_skill(as){
        for(int i=0;i<100;i++)
            name[i]=n[i];
    }
    friend bool operator<(TV_Drama & t1,TV_Drama & t2){
        return t1.actor > t2.actor;
    }

};
bool comparator_1(TV_Drama & t1,TV_Drama & t2){
    return t1.story > t2.story;
}
class comparator_2{
    public:
    bool operator()(TV_Drama & t1,TV_Drama & t2){
    return t1.acting_skill > t2.acting_skill;
    }
};
void Printer(TV_Drama & t){
        cout << t.name << ';';
    }
//
int main(){
	list<TV_Drama> lst;
	int n;
	
	cin>>n;
	char  _name[100];
	int _actor, _story, _acting_skill;
	for (int i=0; i<n; i++){
        cin.ignore();
        cin.getline(_name,100);
        cin>>_actor>>_story>>_acting_skill;
		lst.push_back(TV_Drama(_name, _actor, _story, _acting_skill));
	}

	lst.sort();
	for_each(lst.begin(), lst.end(), Printer);	
	cout<<endl;

	lst.sort(comparator_1);
	for_each(lst.begin(), lst.end(), Printer);	
	cout<<endl;

	lst.sort(comparator_2());
	for_each(lst.begin(), lst.end(), Printer);	
	cout<<endl;

	return 0;
}
*/

//33/0212: Simple Object(const overloading)
/*
#include <iostream>
using namespace std;
class A
{
	static int num;
public:
	A(){num+=1;}
	void func()
	{
		cout<< num <<endl;
	}
// 在此处补充你的代码
   	void func() const
	{
        num--;
		cout<< num <<endl;
	}     
};

int A::num=1;

int main()
{
	A a1;
	const A a2 = a1;
	A & a3 = a1;
	const A & a4 = a1;

	a1.func();
	a2.func();
	a3.func();
	a4.func();

	return 0;
}
*/

//32/0211: MyClass2(basic operator overloading)
/*
#include <iostream>
#include <cstring> 
#include <vector>
#include <cstdio> 
using namespace std;
// 在此处补充你的代码
template <class T>
class CMyClass{
    public:
        T * pv;
        int l;
        CMyClass(T * val,int len):pv(val),l(len){}
        T operator[](int i){
            return pv[i];
        }
};
int  a[40];
int main(int argc, char** argv) {
	int t;
	scanf("%d",&t);
	while ( t -- ) {
		int m;
		scanf("%d",&m);
		for (int i = 0;i < m; ++i) 
			scanf("%d",a+i);
		char s[100];
		scanf("%s",s);
		CMyClass<int> b(a, m);
		CMyClass<char> c(s, strlen(s));
		printf("%d %c\n", b[5], c[7]);
	}
	return 0;
}
*/

//31/0210: MyClass(Inheritance & virtual function)
/*
#include <iostream>
using namespace std;
class CMyClassA {
	int val;
public:
	CMyClassA(int);
	void virtual print();
};
CMyClassA::CMyClassA(int arg) {
	val = arg;
	printf("A:%d\n", val);
}
void CMyClassA::print() {
	printf("%d\n", val);
	return;
}
// 在此处补充你的代码
class CMyClassB: public CMyClassA{
    public:
        int val;
        CMyClassB(int arg):CMyClassA(3*arg),val(arg){
	        printf("B:%d\n", val);
        }
        void print(){
            printf("%d\n",val);
        }

};
int main(int argc, char** argv) {
	CMyClassA a(3), *ptr;
	CMyClassB b(5);
	ptr = &a; ptr->print();
	a = b;
	a.print();
	ptr = &b; ptr->print();
	return 0;
}
*/

//30/0209: ⭐Max k numbers(istream operator<< overloading)
/*
#include <algorithm>
#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <string>
#include <map>
#include <set>

using namespace std;
class MyQueue
{
// 在此处补充你的代码
    public:
        vector<int> q;
        int k;
        MyQueue(int kk):k(kk){}
        friend void operator>>(istream & ip,MyQueue & mq){
            //note: "MyQueue & mq",not "MyQueue mq"
            int v;
            ip >> v;
            if(v%2==0)
                mq.q.push_back(v); 
        }
        friend ostream & operator<<(ostream & op, MyQueue & mq){
            int i;
            sort(mq.q.begin(),mq.q.end(),[](int x,int y){return x>y;});
            for(i=0;i<mq.k-1;i++)
                op << mq.q[i] << ' ';
            op << mq.q[mq.k-1];
            return op;
        }
};
int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		MyQueue q(k);
		for (int i = 0; i < n; ++i)
			cin >> q;
		cout<<q;
		cout << endl;
	}
	return 0; 
}
*/

//29:Printer(No need for template)
/*
#include<iostream>
#include<algorithm>
#include<vector>
#include<bitset>

using namespace std;


class Printer{
// 在此处补充你的代码
    public:
        int x;
        Printer(int xx):x(xx){}
        //There's no need for a template
        void operator()(int a){
            if(a>x) cout << a << ',';
        }
        void operator()(string s){
            if(s.size()>x) cout <<s << ',';
        }
};
int main(){

	int t;
	cin >> t;
	while(t--) {
		int n,x;
		cin>>x>>n;
		
		vector<int> intVec;
		for(int i = 0;i < n; ++i) {
			int y;
			cin >> y;
			intVec.push_back(y);
		}
		for_each(intVec.begin(), intVec.end(), Printer(x));
		cout<<endl;
		
		vector<string> strVec;
		for(int i = 0;i < n; ++i) {
			string str;
			cin >> str;
			strVec.push_back(str);
		}
		for_each(strVec.begin(), strVec.end(), Printer(x));
		cout<<endl;
	}
	return 0;
}
*/

//28/0207:Fun&Do(Polymorphism)
/*
#include <iostream> 
using namespace std;

class A { 
	public: 
		virtual void Fun() { 
			cout << "A::Fun" << endl; 
		}; 
		virtual void Do() { 
			cout << "A::Do" << endl; 
		} 
};
// 在此处补充你的代码
class B: public A{
    public:
        virtual void Do(){
            cout << "B::Do" << endl;
        }
};
class C:public B{
    public:
        virtual void Fun(){
            cout << "C::Fun" << endl;
        }
        virtual void Do(){
            cout << "C::Do" << endl;
        }
};
//note: "A p" is wrong 
void Call1(A & p)
{ 
	p.Fun(); 
	p.Do(); 
} 

void Call2(B p) {
	p.Fun();
	p.Do();
}



int main() { 
	C c;
	B b;
	Call1(b);
	Call1(c); 
	Call2(c);
	return 0;
}
*/

//27/0206:⭐Duplicate-Removing & Sorting(ostream_iterator)
/*
#include <iterator>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <stack>
#include <iostream>
#include <set>
using namespace std;
int main() {
	int t;
	int  a[100];
	cin >> t;
	while(t--) {
		for(int i = 0;i < 12; ++i)
			cin >> a[i];
// 在此处补充你的代码
    ostream_iterator<int> c(cout," ");
    //#include<iterator> is needed for this
    set<int> b;
    for(int i=0;i<12;i++)
        b.insert(a[i]);

std::copy(b.begin(), b.end(), c);
		cout << endl;

	}
	return 0;
}
*/

//26/0205:BinaryString
/*
#include <iostream>
#include <string>
using namespace std;
string dec2bin(int x){
// 在此处补充你的代码
    string s="0";
    for(int i=0;i<30;i++)
        s+="0";
    int i=30;
    while(x){
        s[i]=x%2+'0';
        x/=2;
        i--;
    }
    return s;
}
int main(){
	int n;
	cin >> n;
	while(n--) {
		int x;
		cin >> x;
		cout << dec2bin(x) << endl;
	}
	return 0;
}
*/

//25/0204:MyFunc(basic function object)
/*
#include <algorithm>
#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <string>
#include <cmath>
#include <map>
#include <set>

using namespace std;
class MyFunc
{
// 在此处补充你的代码
    public:
        int d;
        MyFunc(int dd):d(dd){}
        int operator()(int v){
            int s=1;
            for(int i=0;i<d;i++)
                s*=v;
            return s;
        }
};
int main()
{
	int n;
	cin >> n;
	while(n--) {
		vector<MyFunc> v;
		for (int i = 0; i < 5; ++i)
			v.push_back(MyFunc(i+1));
		int ans = 1;
		for (int i = 0; i < 5; ++i)
		{
			int m;
			cin >> m;
			ans += v[i](m);
		}
		cout << ans <<endl;
	}
}
*/

//24/0203:Output(basic map)
/*
#include <iterator>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <stack>
#include <iostream>
#include <set>
using namespace std;
int  a[10] = {0, 6, 7, 3, 9, 5, 8, 6, 4, 9};
int  b[10] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
int main(int argc, char** argv) {
// 在此处补充你的代码
typedef map<int,int> mmap;
mmap c;
mmap::iterator it;

for(int i=0; i<10; i++) 
		c[a[i]] = b[i];
	for(it=c.begin(); it!=c.end(); it++) 
		cout<<it->second<<" ";
	return 0;
}
*/

//23/0202: Simple Calculation(Basic Function Object)
/*
#include <iostream>
using namespace std;
template <class T>
class Add{
public:
// 在此处补充你的代码
    public:
        T v;
        Add(T vv):v(vv){}
        T operator()(T a,T b){
            return a+b-v;
        }
};

int main(){
	double f;
	int n;
	while( cin >> f >> n) {
		
		Add<double> a1(f);
		Add<int> a2(n);
		double x,y;
		int p,q;
		cin >> x >> y >> p >> q;
		cout << a1(x, y) << endl;
		cout << a2(p, q) << endl;
	}
	return 0;
}
*/

//22: ⭐Animal Statics(virtual detructor)
/*
#include <iostream>
using namespace std;
// 在此处补充你的代码
class Animal{
    public:
        static int number;
        Animal(){
            number++;
        }
        //note: "virtual" is necessary
        virtual ~Animal(){
            number--;
        }
};
class Dog:public Animal{
    public:
        static int number;
        Dog(){
            number++;
        }
        ~Dog(){
            number--;
        }
};
class Cat:public Animal{
    public:
        static int number;
        Cat(){
            number++;
        }
        ~Cat(){
            number--;
        }
};
int Animal::number=0;
int Dog::number=0;
int Cat::number=0;
void print() {
	cout << Animal::number << " animals in the zoo, " << Dog::number << " of them are dogs, " << Cat::number << " of them are cats" << endl;
}

int main() {
	print();
	Dog d1, d2;
	Cat c1;
	print();
	Dog* d3 = new Dog();
	Animal* c2 = new Cat;
	Cat* c3 = new Cat;
	print();
	delete c3;
	delete c2;
	delete d3;
	print();
}
*/

//21/0111: ⭐CArray3D
/*
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
template <class T>
class CArray3D
{
// 在此处补充你的代码
    public:
        int m,n,r;
        T * pt;
        class CArray2D{
            public:
                T * p2d;
                int r;
                CArray2D(int rr,T * p):r(rr){
                    p2d = p;
                }
                T * operator[](int j){
                    return p2d+j*r;
                }
        };
        CArray3D(int mm,int nn,int rr):m(mm),n(nn),r(rr){
            pt = new T(m*n*r+1);
        }
        CArray2D operator[](int i){
            return CArray2D(r,pt+i*n*r);
            //return CArray2D(n,pt+i*n*r);//wrong
        }
        operator T*(){
            return pt;
        }
};

CArray3D<int> a(3,4,5);
CArray3D<double> b(3,2,2);
void PrintA()
{
    for(int i = 0;i < 3; ++i) {
        cout << "layer " << i << ":" << endl;
        for(int j = 0; j < 4; ++j) {
            for(int k = 0; k < 5; ++k)
                cout << a[i][j][k] << "," ;
            cout << endl;
        }
    }
}
void PrintB()
{
    for(int i = 0;i < 3; ++i) {
        cout << "layer " << i << ":" << endl;
        for(int j = 0; j < 2; ++j) {
            for(int k = 0; k < 2; ++k)
                cout << b[i][j][k] << "," ;
            cout << endl;
        }
    }
}

int main()
{
    
    int No = 0;
    for( int i = 0; i < 3; ++ i )
        for( int j = 0; j < 4; ++j )
            for( int k = 0; k < 5; ++k )
                a[i][j][k] = No ++;
    PrintA();
    memset(a, -1, 60 * sizeof(int));        //注意这里
    memset(a[1][1], 0, 5 * sizeof(int));
    PrintA();
    
    for( int i = 0; i < 3; ++ i )
        for( int j = 0; j < 2; ++j )
            for( int k = 0; k < 2; ++k )
                b[i][j][k] = 10.0 / (i + j + k + 1);
    PrintB();
    int n = a[0][1][2];
    double f = b[0][1][1];
    cout << "****" << endl;
    cout << n << "," << f << endl;
    
    return 0;
}
*/

//20/0110: Pokemon
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t){
        t--;

    }
    return 0;
}
*/

//19/0109: ⭐Integral
/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class IntegralImage{
// 在此处补充你的代码
    public:
        int h,w;
        int * sum;
        int * p;
        IntegralImage(int hh,int ww):h(hh),w(ww){
            sum = new int[h*w+1];
            p = sum;
        }
        void operator()(int * pi){
            int thissum= 0;
            if(p-sum>=w) {
                for(int i=0;i<w;i++){
                    thissum+=pi[i];
                    *p = *(p-w) + thissum;
                    p++;
                }
            }
            else{
                for(int i=0;i<w;i++){
                    thissum+=pi[i];
                    *p = thissum;
                    p++;
                }
            }
                
        }
        int * operator[](int i){
            return sum+w*i;
        }
};
int main(){
    int H, W;
    cin >> H >> W;
    int ** image = new int*[H];
    for(int i=0;i<H;++i){
        image[i]=new int[W];
    }
    for(int i=0;i<H;++i)
    for(int j=0;j<W;++j)
        cin >> image[i][j];
    IntegralImage it(H,W);
    for_each(image, image+H, it);
    for(int i=0;i<H;++i){
        for(int j=0;j<W;++j)
            cout<<it[i][j]<<" ";
        cout<<endl;
    }  
}
*/

//⭐18/0108: Bit Operation
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,i,j;
    cin>>a>>b>>i>>j;
    int block = (1<<(j+1)) - (1<<i) ;
    int ans = (a & (~block)) | ((~b) & block);
    cout << ans << endl;
    return 0;
}
*/

//17/0107:Average Class
/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
class CMean {
// 在此处补充你的代码
    public:
        int * pa;
        int num=0;
        int sum=0;
        CMean(int & a){
            pa = &a;
        }
        void operator()(int a){
            sum+=a;
            num++;
            *pa = sum/num;
        }
};
int main(int argc, char* argv[]) {
	int  v;
	int t;
	cin >> t;
	while ( t -- ) {
		cin >> v;
		vector<int> vec;
		while (v) {
			vec.push_back(v);
			cin >> v;
		}
		int myAver = 0;
		for_each(vec.begin(), vec.end(), CMean(myAver));
		cout << myAver << endl;
	}
	return 0;
}
*/

//16/0105: WeirdContainer(Basic Operator Overloading)
/*
#include <iostream>
#include <string>
using namespace std;
template <class T> 
class container{
// 在此处补充你的代码
    public:
        T a;
        container(T aa):a(aa){}
        T operator+(container b){
            return a + b.a + b.a;
        }
        T operator+(T b){
            return a+b;
        }
};
int main(){
	int n,m;
	cin >> n >> m;
	string s1,s2;
	cin >> s1 >> s2;
    container <int> a = n;
    container <int> b = m;
    cout<<a+b<<endl;
    cout<<a+m<<endl;
    container <string> sa = string(s1);
    container <string> sb = string(s2);
    cout<<sa+sb<<endl;
    cout<< sa + s2<<endl;
}
*/

//15/0104:FindFirstLess(template & type-converting operator)
/*
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// 在此处补充你的代码
template<class PT,class T,class Pred>
class FindFirstLess{
    public:
        PT result;
        FindFirstLess(PT fir,PT las,T t,Pred c){
            bool b=1;
            for(;fir!=las;fir++)
                if(c(*fir,t)) {
                    result = fir;
                    b=0;
                    break;
                }
            if(b) result = las;
        }
        //type-convirting operator should use "PT" instead of "vector<T>::iterator"
        operator PT(){
            return result;
        }
};
int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n ;
		string type; 
		cin >> n >> type;
		vector<int> vi;
		vector<string> vs;
		if( type == "N") {
			int a,m;
			for(int i = 0;i < n  - 1; ++i) {
				
				cin >> a;
				vi.push_back(a);
			}
			cin >> m;
			vector<int>::iterator p = FindFirstLess(vi.begin(),vi.end(),m,less<int>());
			if( p!= vi.end())
				cout << * p << endl;
			else
				cout << "Not Found" << endl; 
				
		}
		else {
			string a,m;
			for(int i = 0;i < n - 1; ++i) {
				cin >> a;
				vs.push_back(a);
			}
			cin >> m;
			vector<string>::iterator p = FindFirstLess(vs.begin(),vs.end(),m,less<string>());
			if( p!= vs.end())
				cout << * p << endl;
			else
				cout << "Not Found" << endl; 
		
		}
	}
    return 0;
}
*/

//14/0103: Simple MyNum(Type-Converting Operator)
/*
#include <stdio.h>
#include <iostream>
using namespace std;
class MyNum{
public:
    char C;
    MyNum(char c='0'): C(c) {}
// 在此处补充你的代码
    MyNum operator*(MyNum & a){
        return MyNum((C-'0')*(a.C-'0')+'0');
    }
    operator int(){
        return C-'0';
    }
};

int main() { 
    char m,n;
    cin >> m >>  n;
    MyNum n1(m), n2(n);
    MyNum n3;
    n3 = n1*n2;
    cout << int(n3) << endl;
    return 0;
}
*/

//13/0102: Beef & Meat (inherirtance & virtual)
/*
#include<bits/stdc++.h>
using namespace std;

class Food {
public:
// 在此处补充你的代码  
    void Buy() { cout << "Buy Nothing" << endl; }
    virtual void Pay() {}
};

class Meat : public Food {
public:
	void Buy() { cout << "Buy Meat" << endl; }
	virtual void Pay() { cout << "Pay Meat" << endl; }
};

class Beef : public Meat {
public:
	void Buy() { cout << "Buy Beef" << endl; }
	void Pay() { cout << "Pay Beef" << endl; }
};
int main() {
	Beef bf;
	Meat* pmt = &bf;
	Food* pfd = &bf;

	pfd->Buy();
	pfd->Pay();
	pmt->Buy();
	pmt->Pay();
	return 0;
}
*/

//12/0101: Static Member(Basic)
/*
#include <iostream>
#include <vector>
using namespace std;
class A {
    static int count;
public:
// 在此处补充你的代码
    A(){
        count++;
    }

static int theNumberOfA() {
        return count;
    }
};

int A::count = 0;

int main() {
    vector<A> v;
    
    for(int i = 0; i < 3; i++) {
        {
            A a;
            v.push_back(a);
        }
        cout << A::theNumberOfA() << endl;
    }

    return 0;
}
*/

//11.Sorting by Distance(function object & std::sort)
/*
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;
template <class T1,class T2>
struct Closer {
// 在此处补充你的代码
    T1 sample;
    T2 pf;
    Closer(T1 a,T2 p):sample(a),pf(p){    }
    bool operator()(T1 a,T1 b){
        int d1 = pf(a,sample);
        int d2 = pf(b,sample);
        if(d1==d2) return a<b;
        return d1<d2;
    }
};

int Distance1(int n1,int n2) {
	return abs(n1-n2);
}
int Distance2(const string & s1, const string & s2)
{
	return abs((int)s1.length()- (int) s2.length());
}
int a[10] = { 0,3,1,4,7,9,20,8,10,15};
string b[6] = {"American","Jack","To","Peking","abcdefghijklmnop","123456789"};
int main()
{
	int n;string s;
	while( cin >> n >> s ) {
		sort(a,a+10,Closer<int ,int (*)(int ,int)> (n,Distance1));
		for(int i = 0;i < 10; ++i)
			cout << a[i] << "," ;
		cout << endl;
		sort(b,b+6,Closer<string,int (*)(const string &,const string &  )> (s,Distance2)); 
		for(int i = 0;i < 6; ++i)
			cout << b[i] << "," ;
		cout << endl;
	}
	return 0;
}
*/

//10. ⭐CArray3D(subclass)
/*
#include <iostream>
#include <iomanip> 
#include <cstring>
using namespace std;
template <class T>
class CArray3D
{
// 在此处补充你的代码
    public:
        int m,n,r;
        T * pt;
        class arr{
            public:
                T * pb;
                int k,n,r;
                arr(int kk,int nn, int rr , T * pt):k(kk),n(nn),r(rr){
                    pb = pt + k * n * r;
                }
                T * operator[](int j){
                    return pb+j*r;
                }
                operator void*(){
                    return pb;
                }
        };
        CArray3D(int mm,int nn,int rr):m(mm),n(nn),r(rr){
            pt = new T(m*n*r+1);
        }
        arr operator[](int k){
            //"arr&" results in error
            return arr(k,n,r,pt);
        }
};

CArray3D<int> a(3,4,5);
CArray3D<double> b(3,2,2);
void PrintA()
{
	for(int i = 0;i < 3; ++i) {
		cout << "layer " << i << ":" << endl;
		for(int j = 0; j < 4; ++j) {
			for(int k = 0; k < 5; ++k) 
				cout << a[i][j][k] << "," ;
			cout << endl;
		}
	}
}
void PrintB()
{
	for(int i = 0;i < 3; ++i) {
		cout << "layer " << i << ":" << endl;
		for(int j = 0; j < 2; ++j) {
			for(int k = 0; k < 2; ++k) 
				cout << b[i][j][k] << "," ;
			cout << endl;
		}
	}
}

int main()
{

	int No = 0;
	for( int i = 0; i < 3; ++ i ) {
		a[i];
		for( int j = 0; j < 4; ++j ) {
			a[j][i];
			for( int k = 0; k < 5; ++k )
				a[i][j][k] = No ++;
			a[j][i][i];	
		}
	}
	PrintA();
	memset(a[1],-1 ,20*sizeof(int));	
	memset(a[1],-1 ,20*sizeof(int));
	PrintA(); 
	memset(a[1][1],0 ,5*sizeof(int));	
	PrintA();

	for( int i = 0; i < 3; ++ i )
		for( int j = 0; j < 2; ++j )
			for( int k = 0; k < 2; ++k )
				b[i][j][k] = 10.0/(i+j+k+1);
	PrintB();
	int n = a[0][1][2];
	double f = b[0][1][1];
	cout << "****" << endl;
	cout << n << "," << f << endl;
		
	return 0;
}
*/

//9.Complex (basic operator overloading)
/*
#include <iostream>
using namespace std;
// 在此处补充你的代码
#include<string>
class Complex{
    public:
        int a,b;
        Complex(int aa=0,int bb=0):a(aa),b(bb){}
        Complex(string s){
            a = s[0]-'0';
            b = s[2]-'0';
        }
        friend ostream & operator<<(ostream & op, const Complex & c){
            if(c.a==0 && c.b!=0) op << c.b << 'i';
            else if(c.b==0) op << c.a;
            else if (c.b>0)
                op << c.a << '+' << c.b << 'i';
            else op << c.a << c.b << 'i';
            return op;
        }
        Complex operator+(Complex c){
            //Solution 1:
            return Complex(a+c.a,b+c.b);
        }
        Complex operator-(Complex c){
            //Solution 2:
            Complex cc(a-c.a,b-c.b);
            return cc;
        }
        Complex operator*(Complex c){
            Complex cc(a*c.a-b*c.b, a*c.b+b*c.a);
            return cc;
        }
        void operator+=(Complex c){
            a+=c.a;
            b+=c.b;
        }
        void operator-=(int c){
            a-=c;
        }
        void operator*=(Complex c){
            int aa=a,bb=b;
            a = a*c.a - b*c.b;
            b = aa*c.b + b*c.a;
        }
};
int main() {
	Complex c1;
	Complex c2("3+2i"); // 用字符串初始化时，只需考虑"a+bi"的形式，其中a和b都是1位数字
	Complex c3(c2);
	Complex c4(-15);
	cout << c2 << endl;
	cout << c3 << endl;
	cout << c4 << endl;
	cout << c2 + c4 << endl;
	cout << c2 - c3 << endl;
	cout << c2 * c3 << endl;
	c2 += c4;
	cout << c2 << endl;
	c2 -= -12;
	cout << c2 << endl;
	c3 *= c3;
	cout << c3 << endl;
	return 0;
}
*/

//8.Points in a Flat
/*
#include <set>
#include <iostream>
#include <string>
using namespace std;
// 在此处补充你的代码
typedef pair<int,int> Pair;
class myComp{
    public:
        bool operator()(const Pair a, const Pair b) const{
            if(a.first==-1 || b.first == -1) return a.second > b.second;
            return a.first < b.first;
        }
};
int main() {
	string cmd;
	set<pair<int, int>, myComp> S;
	while (cin >> cmd) {
		if (cmd == "A") {
			int x, y;
			cin >> x >> y;
			S.insert(make_pair(x, y));
		} else if (cmd == "Qx") {
			int x;
			cin >> x;
			cout << S.lower_bound(make_pair(x, -1))->second << endl;
		} else if (cmd == "Qy") {
			int y;
			cin >> y;
			cout << S.lower_bound(make_pair(-1, y))->first << endl;
		} else {
			int x, y;
			cin >> x >> y;
			S.erase(make_pair(x, y));
		}
	}
	return 0;
}
*/

//7. Student Check-in Database(list & iterator)
/*
#include <iostream>
#include <string>
#include <map>
#include <list>
using namespace std;
// 在此处补充你的代码
typedef map<int,list<int>> mmap;
void QueryResult(mmap::iterator fir,mmap::iterator las){
    for(;fir!=las;fir++){
        cout << fir->first << ':';
        list<int>::iterator i;
        for(i=fir->second.begin();i!=fir->second.end();i++)
            cout << ' ' << *i;
        cout << endl;
    }
}
int main(int argc, char* argv[])
{
	map<int, list<int> > Attendance;
	map<int, list<int> >::iterator it;
	string cmd;
	int date, id, date_lower, date_upper;
	while (cin >> cmd){
		if (cmd == "add"){
			cin >> date >> id;
			it = Attendance.find(date);
			if (it != Attendance.end()){
				it->second.push_back(id);
			}
			else{
				list<int> lst_id;
				lst_id.push_back(id);
				Attendance.insert(make_pair(date,lst_id));
			}
		}
		else if (cmd == "query"){
			cin >> date_lower>>date_upper;
			QueryResult(Attendance.lower_bound(date_lower), Attendance.upper_bound(date_upper));
		}
		else if (cmd == "exit")
			return 0;
	}
	return 0;
}
*/

//6.⭐Rectangle Sorting(multimap)
/*
#include <iostream>
#include <set>
using namespace std;
// 在此处补充你的代码
class Rectangle{
    public:
        int a=0,b=0,s=0;
        Rectangle(int aa,int bb):a(aa),b(bb),s(aa*bb){}
        friend bool operator<(const Rectangle r1,const Rectangle r2){
            if(r1.s==r2.s) return r1.a+r1.b>r2.a+r2.b;
            return r1.s>r2.s;
        }
        //notice: overloading of "<<" shoule use "Rectangle r" instead of "Rectangle & r"
        //reason: (?)Can't *iterator be refered ?
        friend ostream & operator<<(ostream & op, Rectangle r){
            op << r.s << ' ' << 2*(r.a+r.b) ;
            return op;
        }
};
//notice: multimap<key,pred>, pred should be a function object
class Comp{
    public:
        bool operator()(Rectangle r1,Rectangle r2) const{
            if(r1.a+r1.b==r2.a+r2.b) return r1.s<r2.s;
            return r1.a+r1.b<r2.a+r2.b;
        }
};
int main() {
    multiset<Rectangle> m1;
    multiset<Rectangle, Comp> m2;
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        m1.insert(Rectangle(a, b));
        m2.insert(Rectangle(a, b));
    }
    for (multiset<Rectangle>::iterator it = m1.begin(); it != m1.end(); it++) {
        cout << *it << endl;
    }
    cout << endl;
    for (multiset<Rectangle>::iterator it = m2.begin(); it != m2.end(); it++) {
        cout << *it << endl;
    }
	return 0;
}
*/

//5.Template(Class Basics)
/*
#include <iostream>
#include <string>
using namespace std;
// 在此处补充你的代码
template<class T,int n>
class A{
    public:
        T *pa;
        A(T * p){
            pa = new T[n+1];
            for(int i=0;i<n;i++)
                pa[i]=p[i];
        }
        T operator[](int i){
            return pa[i];
        }
        T sum(){
            T s=pa[0];
            for(int i=1;i<n;i++)
                s = s+ pa[i];
            return s;
        }
};
int main() {
	
	int t;
	cin >> t;
	while( t -- ) { 
	    int b1[10];
	    for(int i = 0;i < 10; ++i) 	
	
	    	cin >> b1[i];
	    A<int, 10> a1 = b1;
	    cout << a1[2] << endl;
	    
	
	    double b2[5] ;
	    for(int i = 0;i < 5; ++i) 	
	    	cin >> b2[i];
	    
	    A<double, 5> a2 = b2;
	    cout << a2.sum() << endl;
	
		
	    string b3[4] ;
	    for(int i = 0;i < 4; ++i) 	
	    	cin >> b3[i];
	    
	    A<string, 4> a3 = b3;
	    cout << a3.sum() << endl;
	}
	return 0;
}
*/

//4.Output(Operator Overloading)
/*
#include <iostream>
using namespace std;
class A {
public:
// 在此处补充你的代码
    int n;
    A(int nn):n(nn){}
    friend ostream & operator<<(ostream & op, A & a){
        op << a.n;
        return op;
    }
    int &getValue(){
        return n;
    }
    A & operator+=(A & b){
        n+=b.n;
        return *this;
    }
    A & operator-=(int c){
        n-=c;
        return *this;
    }
};

int main() {
	int t;
	cin >> t;
	while(t-- ) {
		int m,n,k;
		cin >> m >> n >> k;	
	    A a(m);
	    A b = a;
	    cout << b << endl;
	    cout << (a += b -= n) << endl;
	    cout << a.getValue() << endl;
	    a.getValue() = k;
	    cout << a << endl;
	} 
	return 0;
}
*/

//3.Binary Count(Binary Calculation & Template)
/*
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// 在此处补充你的代码
class Pred{
    public:
        int n;
        Pred(int nn):n(nn){}
        bool operator()(int x){
            return  (x&(1<<n)) == 1<<n;
        }
};
int main(int argc, char** argv) {	
	int n, x;
	vector<int> intVec;
	cin>>n>>x; 
	while(x) {
		intVec.push_back(x);
		cin>>x;
	}
	cout<<count_if(intVec.begin(), intVec.end(), Pred(n))<<endl;
	return 0;
}
*/

//2.Hero & Priest(Virtual Function)
/*
#include <iostream>
using namespace std;
class Hero {
public:
// 在此处补充你的代码
    virtual void defense(){cout << "Hero::defense()" << endl;}
    //"virtual" for "defense()" but not for 'attack()
    void attack(){cout << "Hero::attack()"<<endl;}
};
class Priest: public Hero {
public:
    virtual void attack() { cout << "Priest::attack()" << endl; }
    virtual void defense() { cout << "Priest::defense()" << endl; } 
}; 

int main() {
    Priest anduin;
    Hero h;
    h.defense();
    Hero *player = &anduin;
    player->attack();
    player->defense();
    anduin.attack();
    anduin.defense();
    return 0;
}
*/

//1.Multiplication(Overloading of Type-converting Operator)
/*
#include <iostream>
using namespace std;
class Number {
public: 
    int num;
    Number(int n): num(n) {}
// 在此处补充你的代码
    operator int(){
        return num;
    }
};
int main() {
	int t;
	int m,n;
	cin >> t;
	while(t--) {
	    cin >> m>> n;
	    Number n1(m), n2 = n1 * n;
	    if( m * n == n2 )
	    	cout << n2 << endl;
	}
    return 0;
}
*/