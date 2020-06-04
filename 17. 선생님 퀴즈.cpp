#include "stdafx.h"

// 내 답안
int main()
{
	int input = 0;
	scanf("%d", &input);

	for (int i = 0; i < input; i++)
	{
		int number = 0;
		int sum = 0;
		int temp = 0;
		scanf("%d", &number);
		scanf("%d", &sum);

		if (number % 2 == 0)
		{
			temp = (number + 1) * number / 2;
		}
		else
		{
			temp = (number + 1) * (number / 2) + (number / 2) + 1;
		}

		if (temp == sum)
			printf("YES\n");
		else
			printf("NO\n");

	}
	return 0;
}

// 강의 답안
int main()
{
	int n, sum = 0, i, j, m, ans;
	scanf("%d", &n);

	for (i = 1; i < n; i++)
	{
		scanf("%d %d", &m, &ans);
		sum = 0;
		for (j = 1; j <= m; j++)
		{
			sum += j;
		}
		if (ans == sum) printf("YES\n");
		else printf("NO\n");
	}
}