#include <iostream>
using namespace std;
int fri[100001][2] = { 0 };
int health[100001] = { 0 };
int healthtmp[100001] = { 0 };
int main()
{
	//����
	int n = 0, m = 0;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> fri[i][0] >> fri[i][1];
	}
	
	//ͳ��ÿ��ÿ��Ľ���״��
	//0���������ߣ�1��������2���������������ߣ���ϵΪ0�Ӵ�1���ձ�Ϊ1��1���ձ�Ϊ2��2���ձ�Ϊ0
	int first = 0;
	cin >> first;
	health[first] = 1;

	//��ʼͳ������
	long long day = 0;
	for (long long i = 2; i < 2000000001; i++)
	{
		//����ÿ�����ڵ�i��Ľ���״��
		//��Լ�����ѹ�ϵ�����л���������һ�������е���Ľ������ݶ�����һ���ݴ����洢��ֹǰ������ѹ�ϵ�ĸ�ֵӰ��󷽣�
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

		//����������������ʧЧ
		for (int j = 1; j <= n; j++)
		{
			if (health[j] == 2)   healthtmp[j] = 0;
		}

		//ת�����ݣ���������ʱ�洢������healthtmp
		for (int j = 1; j <= n; j++)
		{
			health[j] = healthtmp[j];
			healthtmp[j] = 0;
		}

		//�ж��Ƿ����˻���
		int flag = 1;
		for (int j = 1; j < n + 1; j++)
		{
			if (health[j] == 1)
			{
				flag = 0; break;
			}
		}

		//�޻���������ѭ��
		if (flag == 1)
		{
			day = i-1; break;
		}
	}

	if (day == 0)   cout << -1 << endl;
	else   cout << day << endl;
	return 0;
}