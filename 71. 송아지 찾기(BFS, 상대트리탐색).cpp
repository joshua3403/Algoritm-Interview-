#include "stdafx.h"
// 내 답안
int g_Check[10001], g_Count[10001];
std::queue<int> g_Queue;

#define MOVE_FRONT		1
#define MOVE_REAR		-1
#define MOVE_FURTHER	5

int main()
{
	int start, target;
	scanf("%d %d", &start, &target);

	g_Queue.push(start);
	g_Check[start] = 1;
	while (!g_Queue.empty())
	{
		int current = g_Queue.front();
		g_Queue.pop();

		if (current == target)
		{
			printf("%d", g_Count[current]);
			break;
		}

		if ((current + MOVE_FRONT) < 10001 && g_Check[current + MOVE_FRONT] == 0)
		{
			g_Check[current + MOVE_FRONT] = 1;
			g_Queue.push(current + MOVE_FRONT);
			g_Count[current + MOVE_FRONT] = g_Count[current] + 1;
		}


		if ((current + MOVE_REAR) >= 0 && g_Check[current + MOVE_REAR] == 0)
		{
			g_Check[current + MOVE_REAR] = 1;
			g_Queue.push(current + MOVE_REAR);
			g_Count[current + MOVE_REAR] = g_Count[current] + 1;
		}

		if ((current + MOVE_FURTHER) < 10001 && g_Check[current + MOVE_FURTHER] == 0)
		{
			g_Check[current + MOVE_FURTHER] = 1;
			g_Queue.push(current + MOVE_FURTHER);
			g_Count[current + MOVE_FURTHER] = g_Count[current] + 1;
		}
	}
}

// 강의 답안
int ch[10001] , d[3] = { 1, -1, 5 };

int main()
{
	int s, e, x, pos, i;
	std::queue<int> Q;
	scanf("%d %d", &s, &e);
	ch[s] = 1;
	Q.push(s);
	while (!Q.empty())
	{
		x = Q.front();
		Q.pop();
		for (i = 0; i < 3; i++)
		{
			pos = x + d[i];
			if (pos < 0 || pos > 10000)
				continue;
			if (pos == e)
			{
				printf("%d\n", ch[x]);
			}
			if (ch[pos] == 0)
			{
				ch[pos] = ch[x] + 1;
				Q.push(pos);
			}
		}
	}
}