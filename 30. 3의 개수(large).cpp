#include "stdafx.h"

// 내 답안
int main()
{
	int n, lt = 1, rt, cur, k = 1, res = 0;
	scanf("%d", &n);
	while (lt != 0)
	{
		// 현재 자리수 왼쪽의 수
		lt = n / (k * 10);
		// 현재 자리수 오른쪽의 수
		rt = n % (k);
		// 현재 자리수
		cur = (n / k) % 10;
		if (cur > 3)
		{
			res = res + ((lt + 1) * k);
		}
		else if (cur == 3)
			res = res + ((lt * k) + (rt + 1));
		else
			res = res + (lt * k);


		k = k * 10;
	}

	printf("%d", res);
	return 0;
}

// 강의 답안
int main()
{
	int n, lt = 1, rt, cur, k = 1, res = 0;
	scanf("%d", &n);
	while (lt != 0)
	{
		lt = n / (k * 10);
		rt = n % k;
		cur = (n / k) % 10;

		if (cur > 3)
			res += (lt + 1) * k;
		else if (cur == 3)
			res += (lt * k) + (rt + 1);
		else
			res += lt * k;

		k *= 10;
	}

	printf("%d", res);
	return 0;
}