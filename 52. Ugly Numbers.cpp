#include "stdafx.h"

std::set<double> check;

// 내 답안
int main()
{
	int count = 0;
	scanf("%d", &count);
	int start = 1;
	check.insert(start);
	std::set<double>::iterator iter = check.begin();
	int i = 1;
	while (true)
	{
		if (i >= count)
			break;

		check.insert(start * 2);
		check.insert(start * 3);
		check.insert(start * 5);

		iter++;
		start = (*iter);
		i++;
	}

	printf("%.0f\n", (*iter));
	return 0;
}

// 강의 답안
int a[1501];
int main()
{
	int n, i, p2, p3, p5, min = 2147000000;
	scanf("%d", &n);
	a[1] = 1;
	p2 = p3 = p5 = 1;
	for (i = 2; i <= n; i++)
	{
		if (a[p2] * 2 < a[p3] * 3)
			min = a[p2] * 2;
		else
			min = a[p3] * 3;

		if (a[p5] * 5 < min)
			min = a[p5] * 5;

		if (a[p2] * 2 == min)
			p2++;

		if (a[p3] * 3 == min)
			p3++;

		if (a[p5] * 5 == min)
			p5++;

		a[i] = min;
	}

	printf("%d\n", a[n]);

	return 0;
}