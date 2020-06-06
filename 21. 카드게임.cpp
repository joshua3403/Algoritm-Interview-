#include "stdafx.h"

int main()
{
	int a[10], b[10], scoreA = 0, scoreB = 0;
	char result[10];

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &b[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		if (a[i] > b[i])
		{
			scoreA += 3;
			result[i] = 'A';
		}
		else if (a[i] < b[i])
		{
			scoreB += 3;
			result[i] = 'B';
		}
		else
		{
			scoreA++;
			scoreB++;
			result[i] = 'D';
		}
	}

	printf("%d %d\n", scoreA, scoreB);

	if (scoreA == scoreB)
	{
		for (int i = 9; i >= 0; i--)
		{
			if (result[i] != 'D')
			{
				printf("%c\n", result[i]);
				return 0;
			}
		}
		printf("D\n");
	}
	else if (scoreA > scoreB)
	{
		printf("A\n");
	}
	else
		printf("B\n");
	return 0;
}

// 강의 답안
int main()
{
	int i, a[10], b[10], as = 0, bs = 0, lw = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &b[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		if (a[i] > b[i])
		{
			as += 3;
			lw = 1;
		}
		else if (a[i] < b[i])
		{
			bs += 3;
			lw = 2;
		}
		else
		{
			as += 1;
			bs += 1;
		}
	}

	printf("%d %d\n", as, bs);
	if (as == bs)
	{
		if (lw == 0)
			printf("D\n");
		else if (lw == 1)
			printf("A\n");
		else
			printf("B\n");
	}
	else if (as > bs)
		printf("A\n");
	else
		printf("B\n");

	return 0;
}