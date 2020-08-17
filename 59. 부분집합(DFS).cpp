#include "stdafx.h"

int n;

int* array = new int[n + 1];

void Print(int x)
{
	if (x == n + 1)
	{
		for (int i = 1; i <= n; i++)
		{
			if (array[i] == 1)
				printf("%d ", i);
		}
		printf("\n");
		return;
	}
	else
	{
		array[x] = 1;
		Print(x + 1);
		array[x] = 0;
		Print(x + 1);
	}
}

// 내 답안 L은 레벨
int main()
{
	scanf("%d", &n);
	Print(1);
	delete[] array;
	return 0;
}


