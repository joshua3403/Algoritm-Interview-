#include "stdafx.h"

// 내 답안
int a[10][10];

int main()
{
	int count = 0;
	int first[10];
	int second[10];

	scanf("%d", &count);

	for (int i = 0; i < count; i++)
	{
		scanf("%d", &first[i]);
	}

	for (int i = 0; i < count; i++)
	{
		scanf("%d", &second[i]);
	}

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			a[j][i] = first[i];
		}
	}

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (a[i][j] > second[count - i - 1])
			{
				a[i][j] = second[count - i - 1];
			}
		}
	}
	int sum = 0;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			sum += a[i][j];
		}
	}

	printf("%d", sum);
	return 0;
}

// 강의 답안
int b[11][11];
int c[11];
int main()
{
	int n, sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &c[i]);
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			b[j][i] = c[i];
		}
	}

	for (int i = n; i >= 1; i--)
	{
		scanf("%d", &c[i]);
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (b[i][j] > c[i])
				b[i][j] = c[i];
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			sum += b[i][j];
		}
	}

	printf("%d\n", sum);
	return 0;
}