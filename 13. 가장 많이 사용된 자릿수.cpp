#include "stdafx.h"

// 내 답안
int main()
{
	// 입력
	char input[100] = { 0 };
	char numbers[10] = { 0 };
	scanf("%s", &input);
	int left = 0;
	int len = strlen(input);
	int i = 0;
	while (true)
	{
		if (i == len)
			break;
		int t = input[i] - 48;
		numbers[t]++;
		i++;
	}

	int max = 0;

	for (int i = 0; i < 10; i++)
	{
		if (numbers[i] > max)
		{
			max = numbers[i];
		}
	}

	int index = 0;
	for (int i = 0; i < 10; i++)
	{
		if (numbers[i] == max)
		{
			if (i > index)
			{
				index = i;
			}
		}
	}

	printf("%d", index);
	return 0;
}

// 강의 답안
int main()
{
	int ch[10];
	int i, digit, max = -2147000000, res;
	char a[101] = { '\0' };
	scanf("%s", &a);
	for (i = 0; a[i] != '\0'; i++)
	{
		digit = a[i] - 48;
		ch[digit]++;
	}

	for (i = 0; i <= 9; i++)
	{
		if (ch[i] >= max)
		{
			max = ch[i];
			res = i;
		}
	}
	return 0;
}