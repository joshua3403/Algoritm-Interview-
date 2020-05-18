#include "stdafx.h"

// 내 답안
int main()
{
	//freopen("input.txt", "rt", stdin);
	char numbers[10] = { '0','1', '2', '3', '4', '5', '6', '7', '8', '9' };
	char input[51] = { '\0' };
	char findnumbers[10] = { '\0' };
	int index = 0;
	int result = 0;
	int count = 0;
	std::cin >> input;
	int len = strlen(input);

	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (numbers[j] == input[i])
			{
				if (index == 0 && numbers[j] == 0)
				{
					continue;
				}
				else
				{
					findnumbers[index] = numbers[j];
					index++;
				}

			}
		}
	}
	int temp = index - 1;
	while (temp >= 0)
	{
		if (temp == (index - 1))
		{
			result += findnumbers[temp] - 48;
		}
		else
		{
			result += (findnumbers[temp]-48) * pow(10,(index - temp - 1));

		}
		temp--;
	}

	std::cout << result << std::endl;

	for (int i = 1; i <= result; i++)
	{
		if ((result % i) == 0)
		{
			count++;
		}
	}

	std::cout << count;

	return 0;
}

// 강의 답안
int main()
{
	freopen("input.txt", "rt", stdin);
	char a[100];
	int res = 0, cnt = 0, i;
	scanf("%s", &a);

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 48 && a[i] <= 57)
		{
			// 참 쉽다
			res = res * 10 + (a[i] - 48);
		}
	}

	printf("%d\n", res);

	for (i = 1; i <= res; i++)
	{
		if (res % i == 0)
			cnt++;
	}
	printf("%d\n", cnt);

	return 0;
}