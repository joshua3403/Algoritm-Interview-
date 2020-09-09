#include "stdafx.h"
// ³» ´ä¾È

struct st_NODE
{
	int cost;
	int day;
};

struct st_COMPARE
{
	bool operator()(const st_NODE& lhs, const st_NODE& rhs)
	{
		if (lhs.day == rhs.day)
		{
			return lhs.cost < rhs.cost;
		}
		else
			return lhs.day < rhs.day;
	}
};

int main()
{
	std::priority_queue<st_NODE, std::vector<st_NODE>, st_COMPARE> Q;
	std::priority_queue<int> answer;
	int count;
	int max_day = 0;
	int sum = 0;
	scanf("%d", &count);
	for (int i = 0; i < count; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);
		if (y > max_day)
			max_day = y;
		st_NODE temp;
		temp.cost = x;
		temp.day = y;
		Q.push(temp);
	}

	while (max_day != 0)
	{
		while (!Q.empty())
		{
			if (Q.top().day == max_day)
			{
				answer.push(Q.top().cost);
				Q.pop();
			}
			else
				break;
		}

		if (!answer.empty())
		{
			sum += answer.top();
			answer.pop();
		}

		max_day--;
	}

	printf("%d", sum);
	return 0;
}