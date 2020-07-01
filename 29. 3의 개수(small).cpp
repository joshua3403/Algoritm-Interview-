#include "stdafx.h"

// 내 답안
int main()
{
	int count = 0, result = 0;
	scanf("%d", &count);

	for (int i = 3; i <= count; i++)
	{
		int temp = i;
		while (true)
		{
			if (temp <= 0)
				break;

			if (temp % 10 == 3)
				result++;

			temp /= 10;
		}
	}

	printf("%d", result);
	return 0;
}

// 강의 답안
int main()
{
	int n, tmp, i, cnt = 0, digit;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		tmp = i;
		while (tmp > 0)
		{
			digit = tmp % 10;
			if (digit == 3)
				cnt++;
			tmp /= 10;
		}
	}

	printf("%d", cnt);
}