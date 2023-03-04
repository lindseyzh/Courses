#include <iostream>
#include <algorithm>
#include <string> 
using namespace std;

int main()
{
	string s = "132";
	while (
// 在此处补充你的代码
next_permutation
//about permutation:https://blog.csdn.net/weixin_43325354/article/details/99208140
//当当前序列不存在下一个排列时，函数返回false，否则返回true
(s.begin(),s.end())	
	) {
		cout << s << endl; 
	}
	return 0;
}