#include "stdafx.h"

// 내 답안
int main()
{
    int a[100], n, idx, i, j, tmp;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[idx])
                idx = j;
        }
        tmp = a[i];
        a[i] = a[idx];
        a[idx] = tmp;
    }

    int count = n - 1;
    int temp = a[count];
    int result = 1;
    while (true)
    {
        if (temp != a[count - 1])
            result++;

        count--;
        temp = a[count];
        if (result == 3)
        {
            printf("%d", temp);
            break;
        }
    }
	return 0;
}

// 강의 답안
int main()
{
    int n, a[101], i, j, tmp, idx, cnt = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] > a[idx])
                idx = j;
        }

        tmp = a[i];
        a[i] = a[idx];
        a[idx] = tmp;
    }

    for (i = 1; i < n; i++)
    {
        if (a[i - 1] != a[i])
            cnt++;
        if (cnt == 2)
        {
            printf("%d\n", a[i]);
            break;
        }

    }
}