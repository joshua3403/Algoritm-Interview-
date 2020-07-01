#include "stdafx.h"

// 내 답안
//int main()
//{
//	int count = 0;
//	scanf("%d", &count);
//	std::vector<int> rank(count);
//	std::vector<int> skill(count);
//	for (int i = 0; i < count; i++)
//	{
//		scanf("%d", &skill[i]);
//		rank[i] = i + 1;
//	}
//
//	for (int i = 0; i < count; i++)
//	{
//		for (int j = i + 1; j < count; j++)
//		{
//			if (skill[j] > skill[i])
//			{
//				rank[i]--;
//				if (rank[i] <= 1)
//				{
//					rank[i] = 1;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < count; i++)
//	{
//		printf("%d ", rank[i]);
//	}
//
//	return 0;
//}

// 강의 답안
int main()
{
	int i, j, n, cnt = 0;
	scanf("%d", &n);
	std::vector<int> a(n + 1);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}

	printf("1 ");
	for (i = 2; i <= n; i++)
	{
		cnt = 0;
		for (j = i - 1; j >= 1; j--)
		{
			if (a[j] >= a[i])
			{
				cnt++;
			}
		}
		printf("%d ", cnt + 1);
	}
}