#include <iostream>
using namespace std;
// 在此处补充你的代码
//solution 1: function object (x)
/*
template<class T1,class T2>
class f{
    public:
        T1 a;
        f(T1 aa):a(aa){};
        T2 operator()(T2 b){
            return b+a;
        }
};
*/
//solution 2: lambda expression (recommandation)
template <class T1, class T2>
auto f = [](T1 a){
    return [a](T2 b)->T2{
        return b+a;
    };
};
int main()
{
   cout << f<int,int>(7)(9) << endl;   //16
   cout << f<string,string> (" hello!")("world")  <<endl; // world hello!
   cout << f<char,string> ('!')("world") << endl;
   
   
   return 0;    //world!
}