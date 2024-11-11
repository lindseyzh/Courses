#include <iostream>
using namespace std;
int fri[100001][2] = { 0 };
int health[100001] = { 0 };
int healthtmp[100001] = { 0 };
int main()
{
	//输入
	int n = 0, m = 0;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> fri[i][0] >> fri[i][1];
	}
	
	//统计每人每天的健康状况
	//0代表无免疫，1代表患病，2代表患病康复有免疫；关系为0接触1次日变为1，1次日变为2，2次日变为0
	int first = 0;
	cin >> first;
	health[first] = 1;

	//开始统计天数
	long long day = 0;
	for (long long i = 2; i < 2000000001; i++)
	{
		//更新每个人在第i天的健康状况
		//逐对检查朋友关系，若有患病则考虑另一方（所有当天的健康数据都设置一个暂存器存储防止前面的朋友关系的赋值影响后方）
		for (int j = 0; j < m; j++)
		{
			if (health[fri[j][0]] == 1)
			{
				healthtmp[fri[j][0]] = 2;
				if (health[fri[j][1]]==0)   healthtmp[fri[j][1]] = 1;
			}
			else if (health[fri[j][1]] == 1)
			{
				healthtmp[fri[j][1]] = 2;
				if (health[fri[j][0]] == 0)   healthtmp[fri[j][0]] = 1;
			}
		}

		//有免疫力的人免疫失效
		for (int j = 1; j <= n; j++)
		{
			if (health[j] == 2)   healthtmp[j] = 0;
		}

		//转移数据，并重置临时存储的数组healthtmp
		for (int j = 1; j <= n; j++)
		{
			health[j] = healthtmp[j];
			healthtmp[j] = 0;
		}

		//判断是否有人患病
		int flag = 1;
		for (int j = 1; j < n + 1; j++)
		{
			if (health[j] == 1)
			{
				flag = 0; break;
			}
		}

		//无患病，跳出循环
		if (flag == 1)
		{
			day = i-1; break;
		}
	}

	if (day == 0)   cout << -1 << endl;
	else   cout << day << endl;
	return 0;
}