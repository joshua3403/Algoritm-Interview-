#include "stdafx.h"

// 내 답안
int main()
{
	int count, left = 0, total = 0;
	scanf("%d", &count);
	std::vector<int> tasks(count + 1);
	for (int i = 1; i <= count; i++)
	{
		int temp;
		scanf("%d", &temp);
		tasks[i] = temp;
		total += temp;
	}
	int blackOut = 0;
	int index = 0;

	
	scanf("%d", &blackOut);

	if (total <= blackOut)
	{
		printf("-1\n");
		return 0;
	}

	while (true)
	{
		index++;
		if (index > count)
			index = 1;
		if (tasks[index] == 0)
		{
			continue;
		}
		else if (tasks[index] != 0)
		{
			tasks[index]--;
			blackOut--;
		}

		if (blackOut == 0)
			break;
	}

	while (true)
	{
		index++;
		if (index > count)
			index = 1;

		if (tasks[index] != 0)
		{
			printf("%d\n", index);
			break;
		}
	}
	
	return 0;
}

// 강의 답안

//int a[2001];
//int main()
//{
//	int n, k, i, p = 0, cnt = 0, tot = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &a[i]);
//		tot += a[i];
//	}
//	scanf("%d", &k);
//	if (k >= tot)
//	{
//		printf("-1\n");
//		return 0;
//	}
//	while (true)
//	{
//		p++;
//		if (p > n)
//			p = 1;
//		if (a[p] == 0)
//			continue;
//		a[p]--;
//		cnt++;
//		if (cnt == k)
//			break;
//	}
//	
//	while (true)
//	{
//		p++;
//		if (p > n)
//			p = 1;
//		if (a[p] != 0)
//		{
//			printf("%d", p);
//			break;
//		}
//	}
//	return 0;
//}