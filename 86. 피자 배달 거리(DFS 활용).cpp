#include "stdafx.h"

std::vector<std::pair<int, int>> house;
std::vector<std::pair<int, int>> pizza;
int check[20];

int matrix, count, res = 2147000000;

void GetAnswer(int level, int number)
{
	if (count == level)
	{
		int sum = 0;
		for (int i = 0; i < house.size(); i++)
		{
			int x1 = house[i].first;
			int y1 = house[i].second;
			int dis = 2147000000;

			for (int i = 0; i < count; i++)
			{
				int x2 = pizza[check[i]].first;
				int y2 = pizza[check[i]].second;
				dis = std::min(dis, abs(x1 - x2) + abs(y1 - y2));
			}
			sum += dis;
		}
		if (res > sum)
		{
			res = sum;
		}
	}
	else
	{
		for (int i = number; i < pizza.size(); i++)
		{
			check[level] = i;
			GetAnswer(level + 1, i + 1);
		}
	}
}

int main()
{
	scanf("%d %d", &matrix, &count);

	for (int i = 0; i < matrix; i++)
	{
		for (int j = 0; j < matrix; j++)
		{
			int x;
			scanf("%d", &x);
			if (x == 1)
			{
				house.push_back(std::make_pair(i, j));
			}
			else if (x == 2)
			{
				pizza.push_back(std::make_pair(i, j));
			}
		}
	}

	GetAnswer(0, 0);

	printf("%d", res);
	return 0;
}