#include "stdafx.h"

// 내 답안
std::vector<int> g_vMatrix[21];
int g_vCheck[21];

int v, e, g_Count = 0;

void GetAnswer(int x)
{
	if (x == v)
	{
		g_Count++;
		return;
	}
	else
	{
		for (int i = 0; i < g_vMatrix[x].size(); i++)
		{
			if (g_vCheck[g_vMatrix[x][i]] == 0)
			{
				g_vCheck[g_vMatrix[x][i]] = 1;
				GetAnswer(g_vMatrix[x][i]);
				g_vCheck[g_vMatrix[x][i]] = 0;
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
		g_vMatrix[x].push_back(y);
	}
	g_vCheck[1] = 1;
	GetAnswer(1);
	printf("%d\n", g_Count);
	return 0;
}

//// 강의 답안
//int ch[30], cnt = 0, n;
//std::vector<int> map[30];
//
//void DFS(int v)
//{
//	if (v == n)
//	{
//		cnt++;
//	}
//	else
//	{
//		for (int i = 0; i < map[v].size(); i++)
//		{
//			if (ch[map[v][i]] == 0)
//			{
//				ch[map[v][i]] = 1;
//				DFS(ch[map[v][i]]);
//				ch[map[v][i]] = 0;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int m, i, j, a, b;
//	scanf("%d %d", &n, &m);
//
//	for (int i = 0; i < m; i++)
//	{
//		int x, y;
//		scanf("%d %d", &a, &b);
//		g_vMatrix[a].push_back(b);
//	}
//	g_vCheck[1] = 1;
//	DFS(1);
//	printf("%d", cnt);
//}