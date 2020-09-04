#include "stdafx.h"

// 내 답안

int g_Matrix[21][21], g_Check[21];
int v,e,g_Count = 99999;

void GetValue(int x, int value)
{
	if (x == v)
	{
		if (value < g_Count)
		{
			g_Count = value;
			return;
		}
	}
	else
	{
		for (int i = 1; i <= v; i++)
		{
			if (g_Check[i] == 0 && g_Matrix[x][i] != 0)
			{
				g_Check[i] = 1;
				GetValue(i, value + g_Matrix[x][i]);
				g_Check[i] = 0;
			}
		}
	}
}

int main()
{
	scanf("%d %d", &v, &e);
	for (int i = 0; i < e; i++)
	{
		int x, y,value;
		scanf("%d %d %d", &x, &y, &value);
		g_Matrix[x][y] = value;
	}
	g_Check[1] = 1;
	GetValue(1, 0);

	printf("%d", g_Count);

	return 0;
}

//// 강의 답안
//
//int map[30][30], ch[30], n, cost = 2147000000;
//
//void DFS(int v, int sum)
//{
//	if (v == n)
//	{
//		if (sum < cost)
//		{
//			sum = cost;
//		}
//	}
//	else
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			if (map[v][i] > 0 && ch[i] == 0)
//			{
//				ch[i] = 1;
//				DFS(i, sum + map[v][i]);
//				ch[i] = 0;
//			}
//		}
//	}
//}
//int main()
//{
//	int m, i, a, b, c;
//	scanf("%d %d", &n, &m);
//	for (int i = 1; i <= m; i++)
//	{
//		scanf("%d %d %d", &a, &b, &c);
//		map[a][b] = c;
//	}
//
//	ch[1] = 1;
//	DFS(1, 0);
//	printf("%d", cost);
//}