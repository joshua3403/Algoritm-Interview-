#include "stdafx.h"

//int matrix[51][51];
//
//bool Check(int x, int y)
//{
//	bool flag = true;
//	int compare = matrix[y][x];
//	
//	// 왼쪽
//	if (matrix[y][x - 1] >= compare)
//	{
//		flag = false;
//		return flag;
//	}
//
//	// 위
//	if(matrix[y - 1][x] >= compare)
//	{
//		flag = false;
//		return flag;
//	}
//
//	// 오른쪽
//	if (matrix[y][x + 1] >= compare)
//	{
//		flag = false;
//		return flag;
//	}
//
//	// 아래
//	if (matrix[y + 1][x] >= compare)
//	{
//		flag = false;
//		return flag;
//	}
//
//	return flag;
//
//}
//
//int main()
//{
//	int n, count = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &matrix[i][j]);
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (Check(j, i) == true)
//			{
//				count++;
//			}
//		}
//	}
//
//	printf("%d\n", count);
//	return 0;
//}

// 강의 답안
int a[51][51];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };

int main()
{
	int n, i, j, k, cnt = 0, flag;
	scanf("%d", &n);

	for ( i = 1; i <= n; i++)
	{
		for ( j = 1; j <= n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	for ( i = 1; i <= n; i++)
	{
		for ( j = 1; j <= n; j++)
		{
			flag = 0;

			for (k = 0; k < 4; k++)
			{
				if (a[i][j] <= a[i + dy[k]][j + dx[k]])
				{
					flag = 1;
					break;
				}
			}

			if (flag == 0)
				cnt++;
		}
	}

	printf("%d\n", cnt);
}