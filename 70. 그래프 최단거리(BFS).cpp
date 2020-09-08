#include "stdafx.h"
// 내 답안
//std::vector<int> g_Matrix[21];
//int ch[21],  count[21];
//std::queue<int> g_Queue;
//int v, e;
//
//int main()
//{
//	scanf("%d %d", &v, &e);
//	for (int i = 1; i <= e; i++)
//	{
//		int x, y;
//		scanf("%d %d", &x, &y);
//		g_Matrix[x].push_back(y);
//	}
//	ch[1] = 1;
//	g_Queue.push(1);
//
//	for (int i = 2; i <= v; i++)
//	{
//		printf("%d : %d\n", i, count[i]);
//	}
//
//	return 0;
//}

// 강의 답안
int ch[30], dis[30];
int main()
{
	int n, m, a, b, x, i;
	std::vector<int> map[30];
	std::queue<int> Q;
	scanf("%d %d", &n, &m);
	for (i = 1; i <= m; i++) 
	{
		scanf("%d %d", &a, &b);
		map[a].push_back(b);
	}

	Q.push(1);
	ch[1] = 1;
	while (!Q.empty())
	{
		x = Q.front();
		Q.pop();
		for (i = 0; i < map[x].size(); i++)
		{
			if (ch[map[x][i]] == 0)
			{
				ch[map[x][i]] = 1;
				Q.push(map[x][i]);
				dis[map[x][i]] = dis[x] + 1;
			}
		}
	}

	for (int i = 2; i <= n; i++)
	{
		printf("%d : %d\n", i, dis[i]);
	}
}