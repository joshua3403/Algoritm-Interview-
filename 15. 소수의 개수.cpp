#include "stdafx.h"

// 내 답안
int main()
{
	int input = 0;
	int result = 0;
	scanf("%d", &input);

	for (int i = 2; i <= input; i++)
	{
		int temp = false;
		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				temp = true;
				break;
			}
		}

		if (!temp)
			result++;
	}

	printf("%d", result);
	return 0;
}

// 강의 답안
int main()
{
	int n, i, j, flag, cnt = 0;
	scanf("%d", &n);

	for (i = 2; i <= n; i++)
	{
		flag = 1;
		for (j = 2; j*j <= i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag)
			cnt++;
	}

	printf("%d\n", cnt);
	return 0;
}