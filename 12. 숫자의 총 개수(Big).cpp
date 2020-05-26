#include "stdafx.h"


// 내 답안
int main()
{
	// 입력
	int input = 0;
	scanf("%d", &input);
	// 결과
	int result = 0;
	// 자릿수
	int flag = 1;
	// 자리수 의 개수
	int count = 9;

	// 자릿수의 합
	int sum = 0;
	
	while (sum + count < input)
	{
		result += count * flag;
		sum += count;
		count *= 10;
		flag++;
	}

	result += (input - sum) * flag;
	printf("%d", result);
	return 0;
}

//// 강의 답안
//int main()
//{
//	// c는 자릿수 d는 개수
//	int n, sum = 0, c = 1, d = 9, res = 0;
//	scanf("%d", &n);
//	while (sum + d < n)
//	{
//		res += c * d;
//		sum += d;
//		c++;
//		d = d * 10;
//	}
//
//	res += (n - sum) * c;
//	printf("%d", res);
//	return 0;
//}