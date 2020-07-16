#include "stdafx.h"

int a[700][700], b[700][700];
// ³» ´ä¾È
int main()
{
	int maxX = 0, maxY = 0, myX = 0, myY = 0, max = 0, temp = 0;
	scanf("%d %d", &maxY, &maxX);

	for (int i = 1; i <= maxY; i++)
	{
		for (int j = 1; j <= maxX; j++)
		{
			scanf("%d", &a[i][j]);
			b[i][j] = b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1] + a[i][j];
		}
	}
	scanf("%d %d", &myY, &myX);

	for (int i = myY; i <= maxY; i++)
	{
		for (int j = myX; j <= maxX; j++)
		{
			temp = b[i][j] - b[i - myY][j] - b[i][j - myX] + b[i - myY][j - myX];

			if (temp > max)
				max = temp;
		}
	}

	printf("%d", max);
	return 0;
}