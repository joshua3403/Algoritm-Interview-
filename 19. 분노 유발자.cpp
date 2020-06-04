#include "stdafx.h"

// 강의 답안
int main()
{
	int input = 0;
	int result = 0;
	int length[100] = { 0 };

	scanf("%d", &input);

	for (int i = 0; i < input; i++)
	{
		scanf("%d", &length[i]);
	}

	for (int i = 0; i < input - 1; i++)
	{
		bool temp = false;
		for (int j = i + 1; j < input; j++)
		{
			if (length[i] <= length[j])
			{
				temp = false;
				break;
			}
			else
			{
				temp = true;
			}
		}
		if (temp)
			result++;
	}

	printf("%d", result);
	return 0;
}

// 강의 답안
int main()
{
	int n, i, cnt = 0, h[101], max;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &h[i]);
	}

	max = h[n];
	for (i = n - 1; i >= 1; i--)
	{
		if (h[i] > max)
		{
			max = h[i];
			cnt++;
		}
	}

	printf("%d\n", cnt);
	return 0;
}