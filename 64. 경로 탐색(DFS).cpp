#include "stdafx.h"

int g_Array[51][51], check[51];

int v, e, g_Count = 0;
void GetAnswer(int y)
{
	if (y == v)
	{
		g_Count++;
		return;
	}
	else
	{
		for (int i = 1; i <= v; i++)
		{
			if (g_Array[y][i] == 1 && check[i] == 0)
			{
				check[i] = 1;
				GetAnswer(i);
				check[i] = 0;
			}
		}
	}


}

int main()
{
	scanf("%d %d", &v, &e);
	for (int i = 0; i < e; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);
		g_Array[x][y] = 1;
	}
	check[1] = 1;
	GetAnswer(1);

	printf("%d", g_Count);
	return 0;
}