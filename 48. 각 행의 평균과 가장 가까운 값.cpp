#include "stdafx.h"

int a[9][10];

int main()
{
	for (int i = 0; i < 9; i++)
	{
		int aver = 0;

		for (int j = 0; j < 9; j++)
		{
			scanf("%d", &a[i][j]);
			aver += a[i][j];
		}

		double temp = aver / 9.0f;
		a[i][9] = std::round(temp);
		printf("%d ", a[i][9]);

		int flag = 2147000000, prev = 0;
		for (int j = 0; j < 9; j++)
		{
			if (abs(a[i][j] - a[i][9]) < flag)
			{
				flag = abs(a[i][j] - a[i][9]);
				prev = a[i][j];
			}
			else if (abs(a[i][j] - a[i][9]) == flag)
			{
				if (a[i][j] > prev)
				{
					prev = a[i][j];
				}
			}
		}

		printf("%d\n", prev);
	}

	return 0;
}

// 강의 답안
int b[10][10];

int main()
{
	int i, j, sum = 0, ave;
	for (i = 1; i <= 9; i++)
	{
		sum = 0;
		for (j = 1; j <= 9; j++)
		{
			scanf("%d", &a[i][j]);
			sum = a[i][j];
		}

		ave = (sum / 9.0f) + 0.5;
		printf("%d ", ave);
		int min = 2147000000;
		int temp = 0;
		int result = 0;
		for (j = 1; j <= 9; j++)
		{
			temp = std::abs(a[i][j] - ave);
			if (temp < min)
			{
				temp = min;
				result = a[i][j];
			}
			else if (temp == min)
			{
				if (a[i][j] > result)
					result = a[i][j];
			}

		}

		printf("%d\n", result);
	}
	return 0;
}