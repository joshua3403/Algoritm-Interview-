#include "stdafx.h"
# define SWAP(x, y, temp) ( (temp)=(x), (x)=(y), (y)=(temp) )

void selection_sort(std::vector<int>* list, int n)
{

}

// 내 답안
int main()
{
    int count = 0;
    scanf("%d", &count);
    std::vector<int> vec;

    for (int i = 0; i < count; i++)
    {
        int temp = 0;
        scanf("%d", &temp);
        vec.push_back(temp);
    }

    int i, j, least, temp;

    // 마지막 숫자는 자동으로 정렬되기 때문에 (숫자 개수-1) 만큼 반복한다.
    for (i = 0; i < count - 1; i++)
    {
        least = i;

        // 최솟값을 탐색한다.
        for (j = i + 1; j < count; j++)
        {
            if (vec[j] < vec[least])
                least = j;
        }

        // 최솟값이 자기 자신이면 자료 이동을 하지 않는다.
        if (i != least)
        {
            SWAP(vec[i], vec[least], temp);
        }
    }

    for (int i = 0; i < count; i++)
    {
        printf("%d ", vec[i]);
    }
	return 0;
}

// 강의 답안
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
    return 0;
}