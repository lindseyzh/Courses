#include <iostream>
#include <cstring>
#include<bitset>
using namespace std;
template <int bitNum>
struct MyBitset 
{
	char a[bitNum/8+1];
	MyBitset() { memset(a,0,sizeof(a));};
	void Set(int i,int v) {
		char & c = a[i/8];
		int bp = i % 8;
		if( v ) 
			c |= (1 << bp);
		else 
			c &= ~(1 << bp);
	}
// 在此处补充你的代码
	friend class sub;//Necessary!
	class sub{
		public:
			int i;
			MyBitset * mbs;
			sub(MyBitset & mb,int ii):i(ii){
				mbs = &mb;
			}
			friend ostream & operator<<(ostream & op, sub s){
				//Don't use "sub & s"
				int c= (s.mbs->a[s.i/8]) >> (s.i%8) & 1;
				op << c;
				return op;
			}
			sub & operator=(bool b){
				mbs->Set(i,b);
				return *this;
			}
			sub & operator=(const sub & s){
				bool temp = (s.mbs->a[s.i/8]) >> (s.i%8) & 1;
				mbs->Set(i,temp);
				return *this;
			}
	};
	sub operator[](int i){
		return sub(*this,i);
	}

void Print() {
		for(int i = 0;i < bitNum; ++i) 
			cout << (*this) [i];
		cout << endl;
	}

};

int main()
{
	int n;
	int i,j,k,v;
	while( cin >>  n) {
		MyBitset<20> bs;
		for(int i = 0;i < n; ++i) {
			int t;
			cin >> t;
			bs.Set(t,1);
		}
		bs.Print();
		cin >> i >> j >> k >> v;
		bs[k] = v;
		bs[i] = bs[j] = bs[k];
		bs.Print();
		cin >> i >> j >> k >> v;
		bs[k] = v;
		(bs[i] = bs[j]) = bs[k];
		bs.Print();
	}
	return 0;
}