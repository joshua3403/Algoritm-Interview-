#include "stdafx.h"

// 내 답안
int main()
{
	int input, max = 0, count = 0, temp = 0;
	int twoCount = 0, fiveCount = 0;
	scanf("%d", &input);

	for (int i = 2; i <= input; i++)
	{
		temp = i;
		while (true)
		{
			if (temp % 2 == 0)
			{
				temp /= 2;
				twoCount++;
			}
			else if (temp % 5 == 0)
			{
				temp /= 5;
				fiveCount++;
			}
			else
			{
				break;
			}
		}
	}

	printf("%d", std::min(twoCount, fiveCount));
}

// 강의 답안
int main()
{
	int n, i, j, tmp, cnt1 = 0, cnt2 = 0;
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		tmp = i;
		j = 2;
		while (true)
		{
			if (tmp % j == 0)
			{
				if (j == 2)
					cnt1++;
				else if (j == 5)
					cnt2++;
				tmp = tmp / j;
			}
			else
				j++;
			if (tmp == 2)
				break;
		}
	}

	printf("%d", std::min(cnt1, cnt2));
}