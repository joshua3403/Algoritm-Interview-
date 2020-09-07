#include "stdafx.h"

// 내 답안
std::vector<std::pair<int, int>> Matrix[21];
int check[21];
int v, e;
int answer = 2147000000;
void GetAnswer(int x, int val)
{
	if (v == x)
	{
		if (answer > val)
			answer = val;
		return;
	}
	else
	{
		for (int i = 0; i < Matrix[x].size(); i++)
		{
			if (check[Matrix[x][i].first] == 0)
			{
				check[Matrix[x][i].first] = 1;
				GetAnswer(Matrix[x][i].first, val + Matrix[x][i].second);
				check[Matrix[x][i].first] = 0;
			}
		}
	}
}
int main()
{
	scanf("%d %d", &v, &e);
	for (int i = 1; i <= e; i++)
	{
		int x, y, v;
		scanf("%d %d %d", &x, &y, &v);
		Matrix[x].push_back(std::make_pair(y, v));
	}
	check[1] = 1;
	GetAnswer(1, 0);
	printf("%d", answer);
	return 0;
}

// 강의 답안
// pair란 2개의 데이터형을 한 쌍으로 묶는 것.
// first와 second로 데이터에 접근.
int ch[30], n, cost = 2147000000;
std::vector<std::pair<int, int>> map[30];

void DFS(int v, int sum)
{
	int i;
	if (v == n)
	{
		if (sum < cost)
			cost = sum;
	}
	else
	{
		for (i = 0; i < map[v].size(); i++)
		{
			if (ch[map[v][i].first] == 0)
			{
				ch[map[v][i].first] = 1;
				DFS(map[v][i].first, sum + ch[map[v][i].second);
				ch[map[v][i].first] = 0;
			}
		}
	}
}

int main()
{
	int m, i, a, b, c;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= m; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		map[i].push_back(std::make_pair(b, c));
	}
	ch[1] = 1;
	DFS(1, 0);
	return 0;
}