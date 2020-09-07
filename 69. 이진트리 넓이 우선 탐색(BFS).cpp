#include "stdafx.h"

//// 내 답안
//int main()
//{
//	std::multimap<int, int> Edge;
//	for (int i = 0; i < 6; i++)
//	{
//		int x, y;
//		scanf("%d %d", &x, &y);
//		Edge.insert(std::make_pair(x, y));
//	}
//
//	printf("1 ");
//
//	for (std::multimap<int,int>::iterator itor = Edge.begin(); itor != Edge.end(); itor++)
//	{
//		printf("%d ", (itor)->second);
//	}
//	return 0;
//}

// 강의 답안
int Q[100], front = -1, back = -1, ch[10];
std::vector<int> map[10];
int main()
{
	int i, a, b, x;
	for (i = 1; i <= 6; i++)
	{
		scanf("%d %d", &a, &b);
		map[a].push_back(b);
		map[b].push_back(a);
	}
	Q[++back] = 1;
	ch[1] = 1;
	while (front < back)
	{
		x = Q[++front];
		printf("%d ", x);
		for (i = 0; i < map[x].size(); i++)
		{
			if (ch[map[x][i]] == 0)
			{
				ch[map[x][i]] = 1;
				Q[++back] = map[x][i];
			}
		}
	}
	return 0;
}