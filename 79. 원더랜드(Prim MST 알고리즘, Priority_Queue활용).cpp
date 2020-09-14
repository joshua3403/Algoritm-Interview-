#include "stdafx.h"

// 내 답안
struct st_EDGE
{
	int weight;
	int end;
	st_EDGE(int y, int z)
	{
		end = y;
		weight = z;
	}
	~st_EDGE()
	{

	}
};

struct st_COMPARE
{
	bool operator()(const st_EDGE& lhs, const st_EDGE& rhs)
	{
		return lhs.weight > rhs.weight;
	}
};

std::priority_queue<st_EDGE, std::vector<st_EDGE>, st_COMPARE> PQ_Edge;
std::vector<std::pair<int,int>> Ve[101];
int Flag[101];

int main()
{
	int v, e;
	scanf("%d %d", &v, &e);
	for (int i = 0; i < e; i++)
	{
		int x, y, val;
		scanf("%d %d %d", &x, &y, &val);
		Ve[x].push_back(std::make_pair(y, val));
		Ve[y].push_back(std::make_pair(x, val));
	}

	int sum = 0;
	int Vertex;
	PQ_Edge.push(st_EDGE(1, 0));
	while (!PQ_Edge.empty())
	{
		st_EDGE currentEdge = PQ_Edge.top();
		PQ_Edge.pop();
		if (Flag[currentEdge.end] == 0 )
		{
			Flag[currentEdge.end] = 1;
			sum += currentEdge.weight;
			for (int i = 0; i < Ve[currentEdge.end].size(); i++)
			{
				st_EDGE newEdge(Ve[currentEdge.end][i].first, Ve[currentEdge.end][i].second);
				PQ_Edge.push(newEdge);
			}
		}

	}
	printf("%d\n", sum);
	return 0;
}

//// 강의 답안
//int ch[30];
//struct EDGE
//{
//	int e;
//	int val;
//	EDGE(int a, int b)
//	{
//		e = a;
//		val = b;
//	}
//
//	bool operator<(const EDGE& b) const
//	{
//		return val > b.val;
//	}
//};
//
//int main()
//{
//	std::priority_queue<EDGE> Q;
//	std::vector<std::pair<int, int>> map[30];
//	int i, n, m, a, b, c, res = 0;
//	scanf("%d %d", &n, &m);
//	for (i = 1; i <= m; i++)
//	{
//		scanf("%d %d %d", &a, &b, &c);
//		map[a].push_back(std::make_pair(b, c));
//		map[b].push_back(std::make_pair(a, c));
//	}
//
//	Q.push(EDGE(1, 0));
//	while (!Q.empty())
//	{
//		EDGE temp = Q.top();
//		Q.pop();
//		int v = temp.e;
//		int cost = temp.val;
//		if (ch[v] == 0)
//		{
//			ch[v] = 1;
//			for (int i = 0; i < map[v].size(); i++)
//			{
//				Q.push(EDGE(map[v][i].first, map[v][i].second));
//			}
//		}
//	}
//}