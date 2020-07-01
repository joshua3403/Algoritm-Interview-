#include "stdafx.h"

//// 내 답안
//int main()
//{
//	int a, b, i, j, countA = 0, countB = 0, countC = 0;
//	scanf("%d", &a);
//	std::vector<int> vectorA(a);
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d", &vectorA[i]);
//	}
//	std::sort(vectorA.begin(), vectorA.end());
//
//	scanf("%d", &b);
//	std::vector<int> vectorB(b);
//	std::vector<int> vectorC;
//	for (i = 0; i < b; i++)
//	{
//		scanf("%d", &vectorB[i]);
//	}
//	std::sort(vectorB.begin(), vectorB.end());
//
//
//	while (true)
//	{
//
//		if (countA == a || countB == b)
//			break;
//
//		if (vectorA[countA] < vectorB[countB])
//		{
//			countA++;
//		}
//		else if (vectorA[countA] > vectorB[countB])
//		{
//			countB++;
//		}
//		else
//		{
//			vectorC.push_back(vectorA[countA]);
//			countA++;
//			countB++;
//			countC++;
//		}
//	}
//
//	for (int t = 0; t < vectorC.size(); t++)
//		printf("%d ", vectorC[t]);
//
//
//	return 0;
//}

// 강의 답안
int main()
{
	int n, m, i, p1 = 0, p2 = 0, p3 = 0;
	scanf("%d", &n);
	std::vector<int> vectorA(n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &vectorA[i]);
	}
	scanf("%d", &m);
	std::vector<int> vectorB(m);
	std::vector<int> vectorC;
	for (i = 0; i < m; i++)
	{
		scanf("%d", &vectorB[i]);
	}

	std::sort(vectorA.begin(), vectorA.end());
	std::sort(vectorB.begin(), vectorB.end());

	while (p1 < n && p2 < m)
	{
		if (vectorA[p1] == vectorB[p2])
		{
			vectorC.push_back(vectorA[p1++]);
			p3++;
			p2++;
		}
		else if (vectorA[p1] > vectorB[p2])
		{
			p2++;
		}
		else
			p1++;
	}
	for (int t = 0; t < vectorC.size(); t++)
		printf("%d ", vectorC[t]);
	return 0;
}