#include "stdafx.h"
# define SWAP(x, y, temp) ( (temp)=(x), (x)=(y), (y)=(temp) )

void selection_sort(std::vector<int>* list, int n)
{

}

// �� ���
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

    // ������ ���ڴ� �ڵ����� ���ĵǱ� ������ (���� ����-1) ��ŭ �ݺ��Ѵ�.
    for (i = 0; i < count - 1; i++)
    {
        least = i;

        // �ּڰ��� Ž���Ѵ�.
        for (j = i + 1; j < count; j++)
        {
            if (vec[j] < vec[least])
                least = j;
        }

        // �ּڰ��� �ڱ� �ڽ��̸� �ڷ� �̵��� ���� �ʴ´�.
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

// ���� ���
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