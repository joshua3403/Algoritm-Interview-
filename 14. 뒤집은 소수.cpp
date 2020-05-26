#include "stdafx.h"

int reverse(int x);
bool isPrime(int x);

//int main()
//{	
//
//	int input = 0;
//	scanf("%d", &input);
//
//	for (int i = 0; i < input; i++)
//	{
//		int temp = 0;
//		scanf("%d", &temp);
//		if (isPrime(reverse(temp)) == true)
//		{
//			printf("%d ", reverse(temp));
//		}
//	}
//	return 0;
//}
//
//int reverse(int x)
//{
//	int result = 0;
//	int temp = x;
//	int len = 0;
//	while (true)
//	{
//		if (temp <= 0)
//			break;
//		temp /= 10;
//		len++;
//	}
//	temp = x;
//	while (true)
//	{
//		if (len == 0)
//			break;
//		result += pow(10, len - 1) * (temp % 10);
//		temp /= 10;
//		len--;
//	}
//	return result;
//}
//
//bool isPrime(int x)
//{
//	if (x <= 1)
//		return false;
//	for (int i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//			return false;
//	}
//	return true;
//}

// 강의 답안
int main()
{
	int n, num, i, tmp;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &num);
		tmp = reverse(num);
		if (isPrime(tmp))
			printf("%d ", tmp);
	}
	return 0;
}

int reverse(int x)
{
	int res = 0;
	int tmp = 0;
	while (x > 0)
	{
		tmp = x % 10;
		res = res * 10 + tmp;
		x = x / 10;
	}
	return tmp;
}

bool isPrime(int x)
{
	int i;
	bool flag = true;
	if (x == i)
		return false;

	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			flag = false;
			break;
		}
	}

	return flag;
}