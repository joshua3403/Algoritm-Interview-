#include "stdafx.h"

#define C_WEIGHT 12
#define H_WEIGHT 1

// 내 답안
//int main()
//{
//	char input[10] = { 0 };
//	int iCCount = 0;
//	int iHCount = 0;
//	int iCresult = 0;
//	int iHresult = 0;
//	scanf("%s", &input);
//	int temp = strlen(input) - 1;
//	int flag = 0;
//	while (true)
//	{
//		if (input[temp] == 'H')
//			break;
//
//		int number = (input[temp] - '0');
//		iHCount += number * pow(10, flag);
//		temp--;
//		flag++;
//	}
//
//	if (iHCount == 0)
//		iHCount = 1;
//
//	flag = 0;
//	temp--;
//	while (true)
//	{
//		if (input[temp] == 'C')
//			break;
//
//		int number = (input[temp] - '0');
//		iCCount += number * pow(10, flag);
//		temp--;
//		flag++;
//	}
//
//	if (iCCount == 0)
//		iCCount = 1;
//
//	printf("%d", iCCount * C_WEIGHT + iHCount);
//
//
//	return 0;
//}

// 강의 답안
int main()
{
	char a[10];
	int c = 0, h = 0, i, pos;
	scanf("%s", &a);
	if (a[1] == 'H')
	{
		c = 1;
		pos = 1;
	}
	else
	{
		for (i = 1; a[i] != 'H'; i++)
		{
			c = c * 10 + (a[i] - 48);
		}
		pos = i;
	}

	if (a[pos + 1] == '\0')
		h = 1;
	else
	{
		for (i = pos + 1; a[i] != '\0'; i++)
		{
			h = h * 10 + (a[i] - 48);
		}
	}
	return 0;
}