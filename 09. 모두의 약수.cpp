#include "stdafx.h"

//// 내 답안
//int main()
//{
//	//freopen("input.txt", "rt", stdin);
//
//	int input = 0;
//	scanf("%d", &input);
//	int count = 0;
//	char result[50000] = { '\0' };
//
//	// 시간 초과
//	for (int i = 1; i <= input; i++)
//	{
//		count = 0;
//		for (int j = 1; j <= i; j++)
//		{
//			if ((i % j) == 0)
//				count++;
//		}
//		printf("%d ", count);
//	}
//
//	return 0;
//}

// 강의 답안

int cnt[50001];
int main()
{
	//freopen("input.txt", "rt", stdin);
	int n, i, j;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (j = i; j <= n; j = j + i)
		{
			cnt[j]++;
		}
	}

	for (i = 1; i <= n; i++)
		printf("%d ", cnt[i]);
	return 0;
}