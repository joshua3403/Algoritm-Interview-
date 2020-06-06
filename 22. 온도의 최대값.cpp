#include "stdafx.h"

// 내 답안
int main()
{
	int count, k = 0, max = -2147000000, result = 0;
	int temp[100000];
	scanf("%d %d", &count, &k);
	for (int t = 0; t < count; t++)
	{
		scanf("%d", &temp[t]);
		if (t < k)
		{
			result += temp[t];
		}
		else
		{
			result -= temp[t - k];
			result += temp[t];
			if (result > max)
				max = result;
		}

	}
	printf("%d", max);
	return 0;
}

// 강의 답안
int main()
{
	int count, k = 0, max = -2147000000, result = 0;
	scanf("%d %d", &count, &k);
	std::vector<int> a(k);
	for (int i = 0; i < k; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < k; i++)
	{
		result += a[i];
	}

	for (int i = k; i < count; i++)
	{
		result += (a[i] - a[i - k]);
		if (result > max)
			max = result;
	}

	printf("%d\n", max);

	return 0;
}