#include "stdafx.h"

//// �� ���
//int main()
//{
//	//freopen("input.txt", "rt", stdin);
//	char a[100];
//	char result[100] = { '\0' };
//	int res = 0, cnt = 0, i;
//
//	// ���͸� ������ ��� ���ڸ� �޴´�.(�ٵ� ���� ���ڵ� �޴´�?)
//	scanf("%[^\n]", &a);
//	int len = strlen(a);
//
//	for (int i = 0; i < len; i++)
//	{
//		if (a[i] != ' ')
//		{
//			result[res] = a[i];
//			res++;
//		}
//	}
//	i = 0;
//
//	while (result[i])
//	{
//		result[i] = tolower(result[i]);
//		i++;
//	}
//
//	printf("%s", result);
//
//	return 0;
//}

// ���� ���
int main()
{
	freopen("input.txt", "rt", stdin);

	char a[101], b[101];
	int i, position = 0;
	gets_s(a);
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] != ' ')
		{
			if (a[i] >= 65 && a[i] <= 90)
			{
				b[position++] = a[i] + 32;
			}
			else
			{
				b[position++] = a[i];
			}
		}
	}
	b[position] = '\0';
	printf("%s\n", b);
	return 0;
}