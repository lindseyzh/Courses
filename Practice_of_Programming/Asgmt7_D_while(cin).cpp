#include <iostream>
using namespace std;
class MyCin
{
// 在此处补充你的代码
    public:
        bool stop;
        MyCin():stop(0){};
        MyCin & operator>>(int & n){
            cin >> n;
            if(n==-1) stop=1;
            return *this;
        }
        operator bool(){
            return !stop;
        }
};
int main()
{
    MyCin m;
    int n1,n2;
    while( m >> n1 >> n2) 
        cout  << n1 << " " << n2 << endl;
    return 0;
}