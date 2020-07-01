#include "stdafx.h"

// ³» ´ä¾È
int main()
{
    int a[100], n, idx, i, j, tmp;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - (i + 1); j++)
        {
            if (a[j] > a[j + 1])
            {
                tmp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = tmp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
	return 0;
}