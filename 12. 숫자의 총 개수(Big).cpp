#include "stdafx.h"


// �� ���
int main()
{
	// �Է�
	int input = 0;
	scanf("%d", &input);
	// ���
	int result = 0;
	// �ڸ���
	int flag = 1;
	// �ڸ��� �� ����
	int count = 9;

	// �ڸ����� ��
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

//// ���� ���
//int main()
//{
//	// c�� �ڸ��� d�� ����
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