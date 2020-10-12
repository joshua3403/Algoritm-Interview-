#include "stdafx.h"
int n,m, cnt = 0;
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { -1, 0, 1, 0 };

int Matrix[1000][1000];

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
std::stack<Loc> st;
int count;

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin >> m >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			scanf("%d", &Matrix[i][j]);
		}
	}

	// 큐의 시작점을 찾기
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (Matrix[i][j] == 1)
			{
				Q.push(Loc(i, j));
			}
			else if (Matrix[i][j] == 0)
				count++;
		}
	}

	int day = 0;
	while (true)
	{
		if (count == 0)
		{
			std::cout << day;
			break;
		}
		else if (count != 0 && Q.empty())
		{
			std::cout << -1;
			break;
		}
		while (!Q.empty())
		{
			Loc temp = Q.front();
			Q.pop();

			for (int i = 0; i < 4; i++)
			{
				int xx = temp.x + dx[i];
				int yy = temp.y + dy[i];

				if (Matrix[xx][yy] == -1)
					continue;
				if (Matrix[xx][yy] == 0 && xx >= 1 && yy >= 1 && xx <= n && yy <= m)
				{
					Matrix[xx][yy] = 1;
					count--;
					st.push(Loc(xx, yy));
				}

			}
		}

		while (!st.empty())
		{
			Q.push(st.top());
			st.pop();
		}
		day++;
		
	}

	return 0;
}