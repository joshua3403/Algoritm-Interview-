#include "stdafx.h"

// 내 답안
int main()
{
	int a, b, count = 0, ai = 0, bi = 0;
	scanf("%d", &a);
	std::vector<int> vectorA(a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &vectorA[i]);
	}
	scanf("%d", &b);
	std::vector<int> vectorB(b);
	for (int i = 0; i < b; i++)
	{
		scanf("%d", &vectorB[i]);
	}
	int size = a + b;
	std::vector<int> vectorC(size);

	while (true)
	{
		if (count == size)
			break;
		if (ai >= a)
		{
			vectorC[count] = vectorB[bi];
			bi++;
			count++;
			continue;
		}

		if (bi >= b)
		{
			vectorC[count] = vectorA[ai];
			ai++;
			count++;
			continue;
		}

		if (vectorA[ai] > vectorB[bi])
		{
			vectorC[count] = vectorB[bi];
			bi++;
			count++;
		}
		else if (vectorA[ai] < vectorB[bi])
		{
			vectorC[count] = vectorA[ai];
			ai++;
			count++;
		}
		else
		{
			vectorC[count] = vectorA[ai];
			ai++;
			count++;
		}
	}

	for (int i = 0; i < vectorC.size(); i++)
	{
		printf("%d ", vectorC[i]);
	}
	return 0;
}

//// 강의 답안
//int a[101], b[101], c[202];
//int main()
//{
//	int p1 = 1, p2 = 1, p3 = 1, n, m, i;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &m);
//	for (i = 1; i <= m; i++)
//	{
//		scanf("%d", &b[i]);
//	}
//
//	while (p1 <= n && p2 <= m)
//	{
//		if (a[p1] < b[p2])
//		{
//			c[p3++] = a[p1++];
//		}
//		else
//		{
//			c[p3++] = b[p2++];
//		}
//	}
//
//	while (p1 <= n)
//	{
//		c[p3++] = a[p1++];
//	}
//
//	while (p2 <= n)
//	{
//		c[p3++] = b[p2++];
//	}
//
//	for (int i = 0; i < p3; i++)
//	{
//		printf("%d ", c[i]);
//	}
//	return 0;
//}