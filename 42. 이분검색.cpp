#include "stdafx.h"

// 내 답안
int main()
{
	int count, target;
	scanf("%d %d", &count, &target);
	std::vector<int> vectorA(count);
	int t = 1;

	for (int i = 0; i < count; i++)
	{
		scanf("%d", &vectorA[i]);
		if (vectorA[i] < target)
			t++;
	}
	printf("%d", t);

	//std::sort(vectorA.begin(), vectorA.end());

	//for (int i = 0; i < count; i++)
	//{
	//	if (vectorA[i] == target)
	//	{
	//		break;
	//	}
	//	else
	//	{
	//		t++;
	//	}
	//}
	return 0;
}

// 강의 답안
int main()
{
	int n, i, key, lt = 0, rt, mid;
	scanf("%d %d", &n, &key);
	std::vector<int>a(n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	std::sort(a.begin(), a.end());

	rt = n - 1;
	while (lt <= rt)
	{
		mid = (lt + rt) / 2;
		if (a[mid] == key)
		{
			printf("%d", mid + 1);
			return;
		}
		else if (a[mid] > key)
		{
			rt = mid - 1;
		}
		else
			lt = mid + 1;

	}
	return 0;
}