#include "stdafx.h"

// 내 답안
int main()
{
	int count = 0, result = 1, input = 0, max = -100, pre = 0;
	int a[100001];
	scanf("%d", &count);
	for (int i = 0; i < count; i++)
	{
		scanf("%d", &a[i]);
		if (i == 0)
		{
			pre = a[i];
		}
		else
		{
			if (a[i] >= pre)
			{
				result++;
				if (result > max)
					max = result;
			}
			else
			{
				result = 0;
			}
			pre = a[i];
		}
	}
	printf("%d\n", max + 1);
	return 0;
}

// 강의 답안
int main()
{
	int n, i, pre, now, cnt = 1, max;
	scanf("%d", &n);
	scanf("%d", &pre);
	max = 1;
	for (i = 2; i <= n; i++)
	{
		scanf("%d", &now);
		if (now >= pre)
		{
			cnt++;
			if (cnt > max)
				max = cnt;
		}
		else
		{
			cnt = 1;
		}
		pre = now;
	}

	printf("%d\n", max);
}