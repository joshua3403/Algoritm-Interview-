#include "stdafx.h"

// 내 답안
int main()
{
	int count = 0, flag = 1, pred = 0;
	std::vector<int> result;
	scanf("%d", &count);
	scanf("%d", &pred);
	for (int i = 0; i < count - 1; i++)
	{
		int temp;
		scanf("%d", &temp);
		result.push_back(std::abs(pred - temp));
		pred = temp;
	}

	std::sort(result.begin(), result.end());

	for (int i = 0; i < count; i++)
	{
		if (result[i] == flag)
		{
			if (result[i] == count - 1)
			{
				printf("YES\n");
				return 0;
			}
			flag++;
			continue;
		}
		else
		{
			printf("NO\n");
			return 0;
		}
	}

	return 0;
}

// 강의 답안
int main()
{
	int n, i, now, pre, pos;
	scanf("%d", &n);
	std::vector<int> ch(n);
	scanf("%d", &pre);
	for (int i = 1; i < n; i++)
	{
		scanf("%d", &now);
		pos = std::abs(now - pre);
		if (pos > 0 && pos < n && ch[pos] == 0)
			ch[pos] = 1;
		else
		{
			printf("NO\n");
			return 0;
		}
		pre = now;
	}

	printf("YES\n");
	return 0;
}