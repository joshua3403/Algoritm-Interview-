#include "stdafx.h"

int g_Array[8][8];
int g_Check[8][8];
int g_Count = 0;

void GetAnswer(int y, int x)
{
	if (x < 1 || x > 7 || y < 1 || y > 7)
		return;
	if (x == 7 && y == 7)
	{
		g_Count++;
		return;
	}
	else
	{
		// 왼쪽
		if (g_Array[y][x - 1] == 0 && g_Check[y][x - 1] != 1)
		{
			g_Check[y][x - 1] = 1;
			GetAnswer(y, x - 1);
			g_Check[y][x - 1] = 0;
		}

		// 오른쪽
		if (g_Array[y][x + 1] == 0 && g_Check[y][x + 1] != 1)
		{
			g_Check[y][x + 1] = 1;
			GetAnswer(y, x + 1);
			g_Check[y][x + 1] = 0;
		}

		// 위
		if (g_Array[y - 1][x] == 0 && g_Check[y - 1][x] != 1)
		{
			g_Check[y - 1][x] = 1;
			GetAnswer(y - 1, x);
			g_Check[y - 1][x] = 0;

		}

		// 아래
		if (g_Array[y + 1][x] == 0 && g_Check[y + 1][x] != 1)
		{
			g_Check[y + 1][x] = 1;
			GetAnswer(y + 1, x);
			g_Check[y + 1][x] = 0;

		}
	}
}
int main()
{
	for (int i = 1; i <= 7; i++)
	{
		for (int j = 1; j <= 7; j++)
		{
			scanf("%d", &g_Array[i][j]);
		}
	}
	g_Check[1][1] = 1;

	GetAnswer(1, 1);
	printf("%d", g_Count);

	return 0;
}

// 강의 답안
int map[10][10], ch[10][10];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int cnt = 0;

void DFS(int x, int y)
{
	int i, xx, yy;
	if (x == 7 && y == 7)
	{
		cnt++;
	}
	else
	{
		for (i = 0; i < 4; i++)
		{
			xx = x + dx[i];
			yy = y + dy[i];
			if (xx < 1 || xx > 7 || yy < 1 || yy > 7)
				continue;

			if (map[xx][yy] == 0 && ch[xx][yy] == 0)
			{
				ch[xx][yy] = 1;
				DFS(xx, yy);
				ch[xx][yy] = 0;
			}
		}
	}
}

int main()
{
	for (int i = 1; i <= 7; i++)
	{
		for (int j = 1; j <= 7; j++)
		{
			scanf("%d", &g_Array[i][j]);
		}
	}
	ch[1][1] = 1;
}