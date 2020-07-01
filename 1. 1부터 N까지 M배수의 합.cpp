#include "stdafx.h"

int main()
{
	int n, m;
	n = m = 0;
	int result = 0;

	scanf("%d", &n);
	scanf("%d", &m);

	for (int i = 0; i <= n; i++)
	{
		if ((i % m) == 0)
		{
			result += i;
		}
	}

	printf("%d", result);

	return 0;
}