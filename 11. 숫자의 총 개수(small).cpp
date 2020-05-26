#include "stdafx.h"

// 내 답안
int main()
{
	int input = 0;
	scanf("%d", &input);
	int result = 0;

	for (int i = 1; i <= input; i++)
	{
		int temp = i;
		while (true)
		{
			if (temp == 0)
				break;
			result++;
			temp /= 10;
		}
	}


	printf("%d", result);
	return 0;
}

//// 강의 답안
//int main()
//{
//	int n, i, cnt = 0, tmp;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		tmp = i;
//		while (tmp > 0)
//		{
//			tmp /= 10;
//			cnt++;
//		}
//
//	}
//
//	printf("%d", cnt);
//	return 0;
//}