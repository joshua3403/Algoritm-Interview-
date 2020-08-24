#include "stdafx.h"

int g_iSize;

int* g_Input;
int* g_Flag;

bool g_bFind = false;

void Print(int count)
{
	if (g_bFind)
		return;
	if (count == g_iSize)
	{
		int first = 0;
		int second = 0;
		for (int i = 0; i < g_iSize; i++)
		{
			if (g_Flag[i] == 1)
			{
				first += g_Input[i];
			}
			else
			{
				second += g_Input[i];
			}
		}

		if (first == second)
		{
			g_bFind = true;
		}
	}
	else
	{
		g_Flag[count] = 1;
		Print(count + 1);
		g_Flag[count] = 0;
		Print(count + 1);
	}
}

int main()
{
	scanf("%d", &g_iSize);
	g_Input = new int[g_iSize];
	g_Flag = new int[g_iSize];
	for (int i = 0; i < g_iSize; i++)
	{
		scanf("%d", &g_Input[i]);
	}
	Print(0);
	if (g_bFind)
		printf("YES\n");
	else
		printf("NO\n");
	delete[] g_Input;
	delete[] g_Flag;
	return 0;
}

// 강의 답안
int n, a[11], total = 0;
bool flag = false;
void DFS(int L, int sum)
{
	if (flag)
		return;
	if (L == n + 1)
	{
		if (sum == (total - sum))
		{
			flag = true;
		}
	}
	else
	{
		DFS(L + 1, sum + a[L]);
		DFS(L + 1, sum);
	}
}

int main()
{
	int i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
		total += a[i];
	}

	DFS(1, 0);
	if(flag)
		printf("YES\n");
	else
		printf("NO\n");
}