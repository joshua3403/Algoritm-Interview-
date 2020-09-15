#include "stdafx.h"
struct EDGE
{
	int y;
	int val;
	EDGE(int a, int b)
	{
		y = a;
		val = b;
	}
	~EDGE()
	{

	}
};
std::vector<std::pair<int, int>> Map[21];
int Cost[21];

void GetAnswer(int x, int target, int val)
{
	if (x == target)
	{
		if (Cost[target] > val)
		{
			Cost[target] = val;
		}
		return;
	}
	else
	{
		for (int i = 0; i < Map[x].size(); i++)
		{
			if (Map[x][i].second + val < Cost[Map[x][i].first])
			{
				Cost[Map[x][i].first] = Map[x][i].second + val;
				GetAnswer(Map[x][i].first, target, Cost[Map[x][i].first]);
			}
		}
	}
}

int main()
{
	int v, e;
	scanf("%d %d", &v, &e);
	for (int i = 0; i < e; i++)
	{
		int x, y, val;
		scanf("%d %d %d", &x, &y, &val);
		Map[x].push_back(std::make_pair(y, val));
	}
	for (int j = 2; j <= v; j++)
	{
		for (int i = 0; i < 21; i++)
		{
			Cost[i] = 2147000000;
		}
		Cost[1] = 0;
		GetAnswer(1, j, 0);
		if (Cost[j] == 2147000000)
			printf("%d : impossible", j);
		else
			printf("%d : %d\n", j,Cost[j]);
	}

	return 0;
}

// 강의 답안
// 다익스트라 알고리즘은 가중치가 무조건 양수여야 한다.

struct Edge
{
	int vex;
	int dis;
	Edge(int a, int b)
	{
		vex = a;
		dis = b;
	}
	bool operator<(const Edge& rhs) const
	{
		return dis > rhs.dis;
	}
};

int main()
{
	std::priority_queue<Edge> PQ;
	std::vector<std::pair<int, int>> graph[30];
	int dis[30];
	int i, n, m, a, b, c;
	std::cin >> n >> m;
	std::vector<int> dis(n + 1, 2147000000);
	for (i = 1; i <= m; i++)
	{
		std::cin >> a >> b;
		graph[a].push_back(std::make_pair(b, c));
	}
	PQ.push(Edge(1, 0));
	dis[1] = 0;
	while (!PQ.empty())
	{
		int now = PQ.top().vex;
		int cost = PQ.top().dis;
		PQ.pop();
		if (cost > dis[now])
		{
			continue;
		}
		for (int i = 0; i < graph[now].size(); i++)
		{
			int next = graph[now][i].first;
			int nextdis = cost + graph[now][i].second;
			if (dis[next] > nextdis)
			{
				dis[next] = nextdis;
				PQ.push(Edge(next, nextdis));
			}
		}
	}
	return 0;
}