#include "stdafx.h"

int a[50][50];

// ³» ´ä¾È
int main()
{
	int maxX = 0, maxY= 0, myX = 0, myY = 0, max = 0;
	scanf("%d %d", &maxY, &maxX);

	for (int i = 0; i < maxY; i++)
	{
		for (int j = 0; j < maxX; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d %d", &myY, &myX);

	for (int i = 0; i <= maxY - myY; i++)
	{
		for (int j = 0; j <= maxX - myX; j++)
		{
			int temp = 0;
			for (int t = i; t <  i + myY; t++)
			{
				for (int f = j; f < j + myX; f++)
				{
					temp += a[t][f];
				}
			}

			if (temp > max)
				max = temp;
		}
	}

	printf("%d", max);
	return 0;
}