#include <iostream>
#include <string>
using namespace std;
// 在此处补充你的代码
template <class T1, class T2>
inline void MyForeach(T1 * p1, T1 * p2,T2 pf){
    for(int i=0;i<p2-p1;i++){
        pf(p1[i]);
    }
}
/*
//solution 1: two template
template <class T>
inline void MyForeach(T * p1, T * p2, void (*pf)(T&)){
    for(int i=0;i<p2-p1;i++)
        pf(p1[i]);
    return;
}
template<class T>
inline void MyForeach(const T * p1, const T * p2, void (*pf)(T)){
    for(int i=0;i<p2-p1;i++)
        pf(p1[i]);
    return;
}
*/
void Print(string s)
{
	cout << s;
}
void Inc(int & n)
{
	++ n;
}
string array[100];
int a[100];
int main() {
	int m,n;
	while(cin >> m >> n) {
		for(int i = 0;i < m; ++i)
			cin >> array[i];
		for(int j = 0; j < n; ++j)
			cin >> a[j];
		MyForeach(array,array+m,Print);		 
		cout << endl;
		MyForeach(a,a+n,Inc);		 
		for(int i = 0;i < n; ++i)
			cout << a[i] << ",";
		cout << endl;
	}
	return 0;
}