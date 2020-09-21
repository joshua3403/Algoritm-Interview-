#include "stdafx.h"

// �� ���
// ����-���� �˰���
// �ִ� ������ �� - 1�� ���� ������ �̿��ؼ� ��ǥ �������� ���� ��츦 ��� ��������.
// ����ġ�� ���ؼ� �ּ� ��θ� ã��.
// Ʈ�� ���·� �����ȴ�.
// �ּ� ��θ� ã�� �� ���� ����Ŭ�� �����ؼ��� �ȵȴ�.
// �� ���� ����ŭ ������ �̿��Ѵٴ� ���� ���� ����Ŭ�� �����Ѵٴ� ���̴�.

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