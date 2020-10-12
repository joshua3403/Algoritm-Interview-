#include "stdafx.h"

// 내 답안

//int Matrix[10][10];
//int result = 2147000000;
//// 우 하 좌 상
//int dx[4] = { 1 ,0, -1, 0 };
//int dy[4] = { 0, 1, 0, -1 };
//
//void GetAnswer(int x, int y, int count)
//{
//	if (x > 7 || y > 7 || x < 1 || y < 1)
//		return;
//	if (x == 7 && y == 7)
//	{
//		if (count < result)
//		{
//			result = count;
//		}
//	}
//	else
//	{
//		for (int i = 0; i < 4; i++)
//		{
//			int xx = x + dx[i];
//			int yy = y + dy[i];
//			if (Matrix[xx][yy] == 0)
//			{
//				Matrix[xx][yy] = 1;
//				GetAnswer(xx, yy, count + 1);
//				Matrix[xx][yy] = 0;
//			}
//		}
//	}
//}
//
//int main()
//{
//	for (int i = 1; i <= 7; i++)
//	{
//		for (int j = 1; j <= 7; j++)
//		{
//			scanf("%d", &Matrix[i][j]);
//		}
//	}
//	Matrix[1][1] = 1;
//	GetAnswer(1, 1, 0);
//	printf("%d", result);
//	return 0;
//}

// 강의 답안
// BFS는 최단 거리. 큐를 활용해라.

int n, map[10][10], dis[10][10];
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { -1, 0, 1, 0 };
struct Loc
{
	int x;
	int y;
	Loc(int a, int b)
	{
		x = a;
		y = b;
	}
};

std::queue<Loc> Q;

int main()
{
	for (int i = 1; i <= 7; i++)
	{
		for (int j = 1; j <= 7; j++)
		{
			scanf("%d", &map[i][j]);
		}
	}

	Q.push(Loc(1, 1));
	map[1][1] = 1;
	while (!Q.empty())
	{
		Loc temp = Q.front();
		Q.pop();
		for (int i = 0; i < 4; i++)
		{
			int xx = temp.x + dx[i];
			int yy = temp.y + dy[i];
			if (map[xx][yy] == 0 && xx <= 7 && yy <= 7 && xx >= 1 && yy >= 1)
			{
				Q.push(Loc(xx, yy));
				map[xx][yy] = 1;
				dis[xx][yy] = dis[temp.x][temp.y] + 1;
			}
		}
	}

	printf("%d", dis[7][7]);
	return 0;
}