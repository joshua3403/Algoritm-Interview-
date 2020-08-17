#include "stdafx.h"

void RecBinary(int x)
{
	if (x == 0)
		return;

	RecBinary(x / 2);
	printf("%d", x % 2);

}

// 내 답안
int main()
{
	int input;
	scanf("%d", &input);
	RecBinary(input);
	return 0;
}

//// 강의 답안
//void D(int x)
//{
//	if (x == 0)
//		return;
//	else
//	{
//		D(x / 2);
//		printf("%d", x % 2);
//	}
//}
//
//int main()
//{
//	int x;
//	scanf("%d", &x);
//	D(x);
//	return 0;
//}