#include "stdafx.h"

// 내 답안
int main()
{
    int a[100], n, count = 0, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int b[100];
    for (int j = 0; j < n; j++)
    {
        if (a[j] < 0)
        {
            b[count] = a[j];
            count++;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (a[j] > 0)
        {
            b[count] = a[j];
            count++;
        }
    }


    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
	return 0;
}

// 강의 답안

int main()
{
    int a[101], n, i, j, tmp;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > 0 && a[j + 1] < 0)
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
    return 0;
}