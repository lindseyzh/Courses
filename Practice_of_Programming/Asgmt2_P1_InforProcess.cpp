#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <cstdlib>
using namespace std;
class Student {
    private:
        string name;
        int age;
        string num;
        int ave[5];
        float tave;
    public:
        void input(){
            getline(cin, name, ',');
            cin >> age;
            getchar();
            getline(cin, num, ',');
            cin >> ave[1];
            getchar();
            cin >> ave[2];
            getchar();
            cin >> ave[3];
            getchar();
            cin >> ave[4];
            getchar();
    }
        void calculate(){
            tave = 1.0 * (ave[1] + ave[2] + ave[3] + ave[4]) / 4;
        }
        void output(){
            cout << name << ',' << age << ',' << num << ',' << tave << endl;
        }
};
int main() {
	Student student;        // 定义类的对象
	student.input();        // 输入数据
	student.calculate();    // 计算平均成绩
	student.output();       // 输出数据
}