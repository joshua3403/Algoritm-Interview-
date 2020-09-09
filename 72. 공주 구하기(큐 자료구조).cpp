#include "stdafx.h"
// 내 답안
std::queue<int> left;
int main()
{
	int numbers, target, count = 1;
	scanf("%d %d", &numbers, &target);
	for (int i = 1; i <= numbers; i++)
	{
		left.push(i);
	}

	while (true)
	{
		int front;
		if (left.size() == 1)
		{
			printf("%d", left.front());
			break;
		}

		if (count != target)
		{
			count++;
			front = left.front();
			left.pop();
			left.push(front);
		}
		else
		{
			left.pop();
			count = 1;
		}
	}
	return 0;
}

// 강의 답안
int main()
{
	int n, k, i;
	std::queue<int> Q;
	scanf("%d %d", &n, &k);
	for (i = 1; i <= n; i++)
	{
		Q.push(i);
	}

	while (!Q.empty())
	{
		for (i = 1; i < k; i++)
		{
			Q.push(Q.front());
			Q.pop();
		}
		Q.pop();

		if (Q.size() == 1)
		{
			printf("%d", Q.front());
			break;
		}
	}
	return 0;
}