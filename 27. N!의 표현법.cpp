#include "stdafx.h"

// �� ���
int main()
{
	int i, j, n, temp;
	scanf("%d", &n);
	std::vector<int> ch(n + 1);
	for (i = 2; i <= n; i++)
	{
		temp = i;
		j = 2;
		// ��� ���� ���μ� �����Ѵ�.
		while (true)
		{
			int flag = temp % j;
			if (flag == 0)
			{
				ch[j]++;
				temp = temp / j;
			}
			else
			{
				j++;
			}
			if (temp == 1)
				break;
		}
	}

	printf("%d! = ", n);
	for (int i = 2; i <= n; i++)
	{
		if (ch[i] != 0)
			printf("%d ", ch[i]);
	}
	return 0;
}