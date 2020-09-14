#include "stdafx.h"

// 내 답안
struct st_EDGE
{
	int weight;
	int start;
	int end;
	st_EDGE(int x,int y,int z)
	{
		start = x;
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
int uni[101];

int Find(int v)
{
	if (v == uni[v])
		return v;
	else
		return uni[v] = Find(uni[v]);
}

void Union(int a, int b)
{
	a = Find(a);
	b = Find(b);
	if (a != b)
		uni[a] = b;
}


int main()
{
	int v, e;
	scanf("%d %d", &v, &e);

	for (int i = 0; i < e; i++)
	{
		int x, y, w;
		scanf("%d %d %d", &x, &y, &w);
		st_EDGE newEdge(x, y, w);
		PQ_Edge.push(newEdge);
	}

	for (int i = 1; i <= 100; i++)
	{
		uni[i] = i;
	}

	int sum = 0;

	while (!PQ_Edge.empty())
	{
		st_EDGE currentEdge = PQ_Edge.top();
		PQ_Edge.pop();
		int Fromindex, ToIndex;
		Fromindex = currentEdge.start;
		ToIndex = currentEdge.end;
		if (Find(Fromindex) != Find(ToIndex))
		{
			Union(Fromindex, ToIndex);
			sum += currentEdge.weight;
		}
	}

	printf("%d\n", sum);
	return 0;
}

// 강의 답안
// Kruskal 알고리즘
// 모든 간선을 가중치를 기준으로 오름차순 정렬한다.
// 가중치가 제일 작은 간선을 순차적으로 선택하지만, 선택시 사이클이 생성되는 경우 넘어가자.

struct Edge
{
	int v1;
	int v2;
	int val;
	Edge(int a, int b, int c)
	{
		v1 = a;
		v2 = b;
		val = c;
	}
	bool operator<(Edge& b)
	{
		return val < b.val;
	}
};

int main()
{
	std::vector<Edge> Ed;
	int v, e;
	scanf("%d %d", &v, &e);

	for (int i = 0; i < e; i++)
	{
		int x, y, w;
		scanf("%d %d %d", &x, &y, &w);
		Edge newEdge(x, y, w);
		Ed.push_back(newEdge);
	}
	int res;
	std::sort(Ed.begin(), Ed.end());
	for (int i = 0; i < e; i++)
	{
		int fa = Find(Ed[i].v1);
		int fb = Find(Ed[i].v2);
		if (fa != fb)
		{
			res = Ed[i].val;
			Union(Ed[i].v1, Ed[i].v2);
		}
	}

	printf("%d\n", res);
	return 0;
}