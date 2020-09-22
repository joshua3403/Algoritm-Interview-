#include "stdafx.h"


int Vec[16];
int Check[16];
int Res[16];
int n, m, result = 0;

void GetAnswer(int first)
{
	if (first == m)
	{
		for (int i = 0; i < first; i++)
		{
			printf("%d ", Res[i]);
		}
		printf("\n");
		result++;
	}
	else
	{
		for(int i = 1; i <= n; i++)
		{
			if (Check[i] == 0)
			{
				Res[first] = Vec[i];
				Check[i] = 1;
				GetAnswer(first + 1);
				Check[i] = 0;
			}

		}
	}
}

int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		int t;
		scanf("%d", &t);
		Vec[i] =t;
	}
	GetAnswer(0);

	printf("%d", result);
	return 0;
}