#include "stdafx.h"


// 내 답안
int Matrix[21][21];
int count;
int result = 0;
std::queue<std::pair<int,int>> Q;

void Check(int x, int y)
{
	if (Matrix[x][y] == 1)
	{
		Matrix[x][y] = 0;

		// 하
		if (Matrix[x + 1][y] == 1)
		{
			Q.push(std::make_pair(x + 1, y));
			Check(x + 1, y);
		}

		// 상
		if (Matrix[x - 1][y] == 1) 
		{
			Q.push(std::make_pair(x - 1, y));
			Check(x - 1, y);
		}

		// 좌
		if (Matrix[x][y - 1] == 1)
		{
			Q.push(std::make_pair(x, y - 1));
			Check(x, y - 1);
		}

		// 우
		if (Matrix[x][y + 1] == 1)
		{
			Q.push(std::make_pair(x, y + 1));
			Check(x, y + 1);
		}

		// 좌하
		if (Matrix[x - 1][y - 1] == 1)
		{
			Q.push(std::make_pair(x - 1, y - 1));
			Check(x - 1, y - 1);
		}

		// 우하
		if (Matrix[x - 1][y + 1] == 1)
		{
			Q.push(std::make_pair(x - 1, y + 1));
			Check(x - 1, y + 1);
		}

		// 좌상
		if (Matrix[x + 1][y - 1] == 1)
		{
			Q.push(std::make_pair(x + 1, y - 1));
			Check(x + 1, y - 1);
		}

		// 우상
		if (Matrix[x + 1][y + 1] == 1)
		{
			Q.push(std::make_pair(x + 1, y + 1));
			Check(x + 1, y + 1);
		}
	}
}
int main()
{
	scanf("%d", &count);
	for (int i = 1; i <= count; i++)
	{
		for (int j = 1; j <= count; j++) 
		{
			int x = 0;
			scanf("%d", &x);
			Matrix[i][j] = x;
		}
	}

	for (int i = 1; i <= count; i++)
	{
		for (int j = 1; j <= count; j++)
		{
			if (Matrix[i][j] == 1)
			{
				Check(i, j);
				result++;
			}
		}
	}
	
	printf("%d", result);
	return 0;
}

// 강의 답안

int n, map[30][30], cnt = 0;
int dx[8] = { 0,1,1,1,0,-1,-1,-1 };
int dy[8] = { -1,-1,0,1,1,1,0,-1 };

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

std::queue<Loc> Queue;

int main()
{
	int i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			scanf("%d", &map[i][j]);
		}
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (map[i][j] == 1)
			{
				Queue.push(Loc(i, j));
				map[i][j] = 0;
				while (!Q.empty())
				{
					Loc temp = Queue.front();
					Queue.pop();

					for (int i = 0; i < 8; i++)
					{
						int xx = temp.x + dx[i];
						int yy = temp.y + dy[i];
						if (map[xx][yy] == 1)
						{
							Queue.push(Loc(xx, yy));
							map[xx][yy] = 0;
						}
					}
				}
				cnt++;
			}
		}
	}
}