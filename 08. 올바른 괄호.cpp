#include "stdafx.h"

// 내 답안
int main()
{
	//freopen("input.txt", "rt", stdin);

	char a[31];
	int open, close;
	open = close = 0;
	bool isCorrect = false;

	scanf("%s", &a);

	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == '(')
			open++;
		else if (a[i] == ')')
		{
			close++;
			if (open < close)
			{
				isCorrect = false;
				break;
			}
		}
	}

	if (close == open)
		isCorrect = true;

	if (isCorrect)
		printf("YES");
	else
		printf("NO");


}
//
//// 강의 답안
//int main()
//{
//	char a[100];
//	int i, cnt = 0;
//	scanf("%s", &a);
//
//	for (i = 0; a[i] != '\0'; i++)
//	{
//		if (a[i] == '(')
//			cnt++;
//		else if (a[i] == ')')
//			cnt--;
//		if (cnt < 0)
//			break;
//	}
//
//	if (cnt == 0)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}