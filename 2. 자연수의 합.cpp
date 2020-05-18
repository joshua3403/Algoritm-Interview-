#include "stdafx.h"

int main()
{
	int n, m;
	n = m = 0;
	int result = 0;

	scanf("%d", &n);
	scanf("%d", &m);

	for (int i = n; i < m; i++)
	{
		printf("%d + ", i);
		result += i;
	}

	result += m;

	printf("%d = %d", m, result);

	return 0;
}