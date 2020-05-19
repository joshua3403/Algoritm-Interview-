#include "stdafx.h"

// ³» ´ä¾È
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
