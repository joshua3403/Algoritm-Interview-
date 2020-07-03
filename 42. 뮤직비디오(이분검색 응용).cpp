#include "stdafx.h"

// ³» ´ä¾È
int a[1000], n;

int Count(int s)
{
	int i, cnt = 1, sum = 0;
	for (i = 1; i <= n; i++)
	{
		if (sum + a[i] > s)
		{
			cnt++;
			sum = a[i];
		}
		else
			sum += a[i];
	}

	return cnt;
}

int main()
{
	int m, i, lt = 1, rt = 0, mid, res, max = -2147000000;
	scanf("%d %d", &n, &m);
	std::vector<int>a(n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
		rt = rt + a[i];
		if (a[i] > max)
			max = a[i];
	}

	while (lt <= rt)
	{
		mid = (lt + rt) / 2;
		if (Count(mid) <= m && mid >= max)
		{
			res = mid;
			rt = mid - 1;
		}
		else
		{
			lt = mid + 1;
		}
	}

	printf("%d\n", res);
	return 0;
}