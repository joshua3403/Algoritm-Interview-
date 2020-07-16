#include "stdafx.h"

// 내 답안
int main()
{
	int n, flag, count = 1;
	scanf("%d %d", &n, &flag);
	std::list<int> round;
	for (int i = 1; i <= n; i++)
	{
		round.push_back(i);
	}

	std::list<int>::iterator itor = round.begin();

	while (true)
	{
		if (round.size() == 1)
		{
			printf("%d", *round.begin());
			break;
		}
		if (count == flag)
		{			
			itor = round.erase(itor);
			if (itor == round.end())
				itor = round.begin();
			count = 1;
		}
		else
		{
			if (itor == (--round.end()))
				itor = round.begin();
			else
				itor++;
			
			count++;

		}
	}
	return 0;
}

// 강의 답안
int main()
{
	int n, k, pos = 0, bp = 0, cnt = 0, i;
	scanf("%d %d", &n, &k);
	std::vector<int> prince(n + 1);
	while (true)
	{
		pos++;
		if (pos > n)
			pos = 1;
		if (prince[pos] == 0)
		{
			cnt++;
			if (cnt == k)
			{
				prince[pos] = 1;
				cnt = 0;
				bp++;
			}
		}

		if (bp == n - 1)
			break;
	}

	for (i = 1; i <= n; i++)
	{
		if (prince[i] == 0)
		{
			printf("%d", prince[i]);
			break;
		}
	}
	return 0;
}