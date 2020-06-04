#include "stdafx.h"
//
//// 내 답안
//int main()
//{
//	int count = 0;
//	int max = 0;
//	scanf("%d %d", &count, &max);
//	bool flag = false;
//	int result = -1;
//
//	for (int i = 0; i < count; i++)
//	{
//		int cal = 0;
//		scanf("%d", &cal);
//
//		if (cal >= max && flag)
//		{
//			result++;
//		}
//
//		if (cal >= max)
//		{
//			flag = true;
//		}
//		else
//		{
//			flag = false;
//		}
//
//
//	}
//
//	printf("%d", result);
//	return 0;
//}

// 강의 답안
int main()
{
	int n, a, val, i, cnt = 0, max = -2147000000;
	scanf("%d %d", &n, &val);

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &a);
		if (a > val)
			cnt++;
		else
			cnt = 0;

		if (cnt > max)
			max = cnt;
	}

	if (max == 0)
		printf("-1");
	else
		printf("%d", max);
	return 0;
}