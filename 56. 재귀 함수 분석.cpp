#include "stdafx.h"

// �� ���
void recursion(int x)
{
	if (x == 0)
		return;
	else
	{
		recursion(x - 1);
		printf("%d ", x);
	}
}

int main()
{
	int input = 0;
	scanf("%d", &input);
	recursion(input);
	return 0;
}

// ��ͷ� ����� ���� ã�� �� �������� ������ ��Ȯ�� ����
// ��ʹ� ���� �������� ����ؼ� ����Ѵ�.
// ���� ������ �� ù ��°���� main() �Լ��� ������ ����ȴ�.(�Ű�����, ��������, �����ּ�)
// ���� ȣ��� �Լ��� ������ ���� �����ӿ� ����ȴ�.