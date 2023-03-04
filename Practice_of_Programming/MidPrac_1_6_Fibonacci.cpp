#include <iostream>
#include <iterator>
using namespace std;

template<class T1, class T2>
void Copy(T1 s, T1 e, T2 x) {
    for(; s != e; ++s, ++x)
        *x = *s;
}
// 在此处补充你的代码
class Fib{
	public:
		int val;
		int arr[1000]{0};
        //if use arr[100] -> RE
		Fib(int v):val(v){
			arr[1]=1;
			}
		void operator++(){
			val++;
		}
		bool operator!=(Fib &b){
			if(b.val!=val) return 1;
			return 0;
		}
		int & operator*(){
			arr[val+1]=arr[val]+arr[val-1];
			return arr[val];
		}
};
int main() {
	while(true) {
		int n;
		cin >> n;
		if(n == 0)
			break;
		
	    Fib f1(1), f2(n);
	    ostream_iterator<int> it(cout, " ");
	    Copy(f1, f2, it);
	    cout << endl;
	}
	return 0;
}