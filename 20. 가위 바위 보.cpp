#include "stdafx.h"

// 내 답안
int main()
{
	int count = 0;
	scanf("%d", &count);
	int a[101], b[101];

	for (int i = 0; i < count; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < count; i++)
	{
		scanf("%d", &b[i]);
	}
	for (int i = 0; i < count; i++)
	{
		switch (a[i])
		{
			// 가위
		case 1:
			switch (b[i])
			{
				// 가위
			case 1:
				printf("D\n");
				break;
				// 바위
			case 2:
				printf("B\n");
				break;
				// 보
			case 3:
				printf("A\n");
				break;
			}
			break;
			// 바위
		case 2:
			switch (b[i])
			{
				// 가위
			case 1:
				printf("A\n");
				break;
				// 바위
			case 2:
				printf("D\n");
				break;
				// 보
			case 3:
				printf("B\n");
				break;
			}
			break;
			// 보
		case 3:
			switch (b[i])
			{
				// 가위
			case 1:
				printf("B\n");
				break;
				// 바위
			case 2:
				printf("A\n");
				break;
				// 보
			case 3:
				printf("D\n");
				break;
			}
			break;
		}
	}
	return 0;
}

// 강의 답안
int main()
{
	int n, i, a[101], b[101];

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &b[i]);
	}
	for (i = 1; i <= n; i++)
	{
		if (a[i] == b[i])
			printf("D\n");
		else if (a[i] == 1 & b[i] == 3)
			printf("A\n");
		else if (a[i] == 2 && b[i] == 1)
			printf("A\n");
		else if (a[i] == 3 && b[i] == 2)
			printf("A\n");
		else
			printf("B\n");
	}

	return 0;
}