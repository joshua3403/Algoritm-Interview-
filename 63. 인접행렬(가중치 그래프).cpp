#include "stdafx.h"

int main()
{
	int y = 0, x = 0;

	scanf("%d %d", &y, &x);

	int** Matrix = new int* [y + 1];

	for (int i = 1; i <= y; i++)
	{
		Matrix[i] = new int[y + 1];
		memset(Matrix[i] + 1, 0, sizeof(int) * y);
	}

	for (int i = 0; i < x; i++)
	{
		int z, t, val;
		scanf("%d %d %d", &z, &t, &val);
		Matrix[z][t] = val;
	}

	for (int i = 1; i <= y; i++)
	{
		for (int z = 1; z <= y; z++)
		{
			printf("%d ", Matrix[i][z]);
		}
		printf("\n");
	}

	for (int i = 0; i <= y; i++)
	{
		delete[] Matrix[i];
	}
	return 0;
}