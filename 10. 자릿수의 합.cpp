#include "stdafx.h"

int digit_sum(int x);

// 내 답안
int main()
{
	//freopen("input.txt", "rt", stdin);

	int count = 0;
	scanf("%d", &count);
	int compare = -4140000;
	int result = 0;
	for (int i = 0; i < count; i++)
	{
		int input = 0;
		scanf("%d", &input);
		if (compare < digit_sum(input))
		{
			compare = digit_sum(input);
			result = input;
		}
		else if (compare == digit_sum(input))
		{
			if (input > result)
				result = input;
		}
	}
	
	printf("%d", result);

	return 0;
}

int digit_sum(int x)
{
	int temp = x;
	int result = 0;

	while (temp != 0)
	{
		result += temp % 10;
		temp /= 10;
	}

	return result;
}

// 강의 답안

int main()
{
	int n, num, i, sum, max = -2147000000, res;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &num);
		sum = digit_sum(num);
		if (sum > max)
		{
			max = sum;
			res = num;
		}
		else if (sum == max)
		{
			if (num > res) res = num;
		}
	}
	return 0;
}

