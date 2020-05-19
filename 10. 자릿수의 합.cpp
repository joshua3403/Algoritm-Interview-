#include "stdafx.h"

int digit_sum(int x);

// ³» ´ä¾È
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