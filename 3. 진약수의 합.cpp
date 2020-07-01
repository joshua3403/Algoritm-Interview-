#include "stdafx.h"

int main()
{
	int n;
	int result = 1;

	scanf("%d", &n);

	printf("1");
	for (int i = 2; i < n; i++)
	{
		if ((n % i) == 0)
		{
			result += i;
			printf(" + %d", i);
		}
	}

	printf(" = %d", result);

	return 0;
}