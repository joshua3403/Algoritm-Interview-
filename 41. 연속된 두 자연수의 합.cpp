#include "stdafx.h"

// �� ���
int main()
{
	int input = 0, count = 0;
	scanf("%d", &input);
	std::map<int, int> answer;
	for (int i = 1; i < input / 2 + 1; i++)
	{
		int res = 0;
		int temp = i;
		count = 0;
		while (true)
		{
			if (res == input)
			{
				answer.insert(std::make_pair(i, count));
				break;
			}

			if (res > input)
				break;

			res += temp;
			temp++;
			count++;
		}
	}

	for (std::map<int, int>::reverse_iterator itor = answer.rbegin(); itor != answer.rend(); ++itor)
	{
		int temp = itor->first;
		for (int j = 1; j < itor->second; j++)
		{
			printf("%d + ", temp++);
		}
		printf("%d = %d\n", temp, input);
	}
	printf("%d", answer.size());
	return 0;
}

// ���� ���
int main()
{
	
	// b�� ��� ���ӵ� ���ڷ� �̷�� ���°�
	// a�� b�� ������ �������� ���ӵ� ������ ������ ��Ÿ�� �� ����
	// ���ӵ� ���� (1,2,3...)�� a/b�� ���� �����ָ� �ȴ�.
	int a, b = 1, cnt = 0, tmp, i;
	scanf("%d", &a);
	tmp = a;
	a--;
	while (a > 0)
	{
		b++;
		a = a - b;
		if (a % b == 0)
		{
			for (i = 1; i < b; i++)
			{
				printf("%d + ", (a/b) + i);
			}
			printf("%d = %d\n", (a / b) + b, tmp);
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}