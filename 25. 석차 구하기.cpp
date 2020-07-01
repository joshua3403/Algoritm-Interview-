#include "stdafx.h"

// ³» ´ä¾È
int main()
{
	int count = 0;
	scanf("%d", &count);
	std::vector<int> score(count, 0);
	std::vector<int> rank(count, 1);

	for (int i = 0; i < count; i++)
	{
		scanf("%d", &score[i]);
	}

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (score[i] < score[j])
			{
				rank[i]++;
			}
		}
	}

	for (int i = 0; i < count; i++)
	{
		printf("%d ", rank[i]);
	}

	return 0;
}