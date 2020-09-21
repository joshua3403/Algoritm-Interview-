#include "stdafx.h"

// 내 답안
// 벨만-포드 알고리즘
// 최대 정점의 수 - 1의 간선 개수를 이용해서 목표 정점까지 가는 경우를 모두 조사하자.
// 가중치를 비교해서 최소 경로를 찾자.
// 트리 형태로 구성된다.
// 최소 경로를 찾을 때 음의 사이클이 존재해서는 안된다.
// 즉 정점 수만큼 간선을 이용한다는 것은 음의 사이클이 존재한다는 뜻이다.

int dist[101];
struct st_EDGE
{
	int s;
	int e;
	int val;

	st_EDGE(int a, int b, int c)
	{
		s = a;
		e = b;
		val = c;
	}
};
int main()
{
	int i, n, m, a, b, c, j, s, e;
	std::vector<st_EDGE> Ed;
	scanf("%d %d", &n, &m);
	for (i = 1; i <= m; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		Ed.push_back(st_EDGE(a, b, c));
	}

	for (i = 1; i <= n; i++)
	{
		dist[i] = 2147000000;
	}

	scanf("%d %d", &s, &e);
	dist[s] = 0;
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < Ed.size(); j++)
		{
			int u = Ed[j].s;
			int v = Ed[j].e;
			int w = Ed[j].val;
			if (dist[u] != 2147000000 && dist[u] + w < dist[v])
			{
				dist[v] = dist[u] + w;
			}
		}
	}
	for (j = 0; j < Ed.size(); j++)
	{
		int u = Ed[j].s;
		int v = Ed[j].e;
		int w = Ed[j].val;
		if (dist[u] != 2147000000 && dist[u] + w < dist[v])
		{
			printf("-1\n");
			return 0;
		}
	}

	printf("%d", dist[e]);

	return 0;
}